#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	// we use loadDataBase function to load the database from data.csv file if any error occurs throw exception
	try
	{
		loadDataBase();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &ob)
{
	*this = ob;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &ob)
{
	if (this != &ob)
		this->dataBase = ob.dataBase;
	return *this; // for chained assignments
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::loadDataBase()
{
	std::ifstream file("data.csv"); // open the database file if not found throw exception
	if (!file.is_open())
		throw std::runtime_error("Error: could not open file. ");

	std::string line; // to store each line

	std::getline(file, line); // skip the header line
	while (std::getline(file, line))
	{
		size_t pos = line.find(',');
		if (pos == std::string::npos)
			continue;
		dataBase[line.substr(0, pos)] = std::strtod(line.substr(pos + 1).c_str(), NULL);
	}
	file.close();
}

void BitcoinExchange::run(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: could not open file."); // if file cannot be opened throw exception

	std::string line; // to store each line

	std::getline(file, line);
	if (line != "date | value")
		throw std::runtime_error("Error: bad header. "); // if header is incorrect throw exception

	while (std::getline(file, line))
	{
		if (line.empty())
			continue; // if line is empty skip go to next line

		size_t delimiterPos = line.find('|');
		if (delimiterPos == std::string::npos)
		{
			std::cout << "Error: bad input => " << line << std::endl; // if no delimiter found print error and continue to next line
			continue;
		}

		std::string date = trim(line.substr(0, delimiterPos));
		std::string valueStr = trim(line.substr(delimiterPos + 1)); // from delimiter to end of line
		// if the date or value is invalid print error and continue to next line
		if (!isValidDate(date))
			continue;
		if (!isValidValue(valueStr))
			continue;

		double value = std::strtod(valueStr.c_str(), NULL); // we use strtod because cpp98 does not have stod

		std::map<std::string, double>::const_iterator it = dataBase.lower_bound(date); // we use lower_bound to find the closest date
		if (it->first != date)
			it--; // if exact date not found go to previous date
		double result = value * it->second;
		std::cout << date << " => " << value << " = " << result << std::endl;
	}
	file.close(); // close the file but it will be closed automatically when ifstream object goes out of scope
}

std::string BitcoinExchange::trim(const std::string &str)
{
	size_t first = str.find_first_not_of(" \t"); // find first non space or tab character
	if (std::string::npos == first)
		return str;
	size_t last = str.find_last_not_of(" \t"); // find last non space or tab character
	return str.substr(first, (last - first + 1));
}

bool BitcoinExchange::isValidValue(const std::string &valueStr)
{
	if (valueStr.empty()) // check if value string is empty
	{
		std::cout << "Error: bad input => " << valueStr << std::endl;
		return false;
	}
	char *endptr;
	double value = std::strtod(valueStr.c_str(), &endptr); // convert string to double and store the address of first invalid character in endptr
	if (*endptr != '\0')								   // if last character is not null terminator return false
	{
		std::cout << "Error: bad input => " << valueStr << std::endl;
		return false;
	}
	if (value < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	}
	if (value > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return false;
	}
	return true;
}

bool BitcoinExchange::isValidDate(const std::string &date)
{
	if (date.length() > 10 || std::count(date.begin(), date.end(), '-') != 2)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return false;
	}
	for (size_t i = 0; i < date.size(); i++)
	{
		if (!std::isdigit(date[i]) && date[i] != '-')
			return false;
	}
	size_t firstDash = date.find('-');
	size_t secondDash = date.find('-', firstDash + 1);
	std::string year(date.substr(0, firstDash));
	std::string month(date.substr(firstDash + 1, secondDash));
	std::string day(date.substr(secondDash + 1));
	int yearInt, monthInt, dayInt;

	yearInt = std::atoi(year.c_str());
	monthInt = std::atoi(month.c_str());
	dayInt = std::atoi(day.c_str());

	if (yearInt > 2022)
	{
		std::cout << "Error: date too late => " << date << std::endl;
		return false;
	}
	if (yearInt < 2009)
	{
		std::cout << "Error: date too early => " << date << std::endl;
		return false;
	}
	if (monthInt < 1 || monthInt > 12 || dayInt < 1 || dayInt > 31)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return false;
	}
	if (dayInt == 31 && (monthInt == 4 || monthInt == 6 || monthInt == 9 || monthInt == 11))
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return false;
	}
	if (monthInt == 2)
	{
		bool isLeap = (yearInt % 4 == 0 && yearInt % 100 != 0) || (yearInt % 400 == 0);
		if (dayInt > (isLeap ? 29 : 28))
		{
			std::cout << "Error: bad input => " << date << std::endl;
			return false;
		}
	}
	return true;
}