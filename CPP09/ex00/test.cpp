#include <iostream>
#include <string>



int main(void)
{
	std::cout << "Test started." << std::endl;
	// Add test cases here to validate the functionality of BitcoinExchange class
	std::string str = "\t        					Hello, World!   ";
	size_t first = str.find_first_not_of(" \tH"); 

	std::cout << "First non-space character at index: " << first << std::endl;
	size_t last = str.find_last_not_of(" \t"); 
	std::cout << "Last non-space character at index: " << last << std::endl;

	std::cout << "Test completed." << std::endl;
	return 0;
}