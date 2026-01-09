#pragma once

#include <iostream>
#include <map>
#include <algorithm>
#include <fstream>
#include <exception>

class BitcoinExchange
{
	private:
		std::map<std::string, double>	dataBase; // to load the database from data.csv file

		void	loadDataBase(); // to load the database from data.csv file in dataBase map

		std::string	trim(const std::string& str); // to trim spaces and tabs from start and end of string
		// check if date and value are valid
		bool	isValidDate(const std::string& date); 
		bool	isValidValue(const std::string& valueStr);
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& ob);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange& ob);

		void run(const std::string& filename); // to read input file and calculate bitcoin value based on database
};