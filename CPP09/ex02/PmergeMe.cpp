#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe& ob)
{
	*this = ob;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& ob)
{
	if (this != &ob)
	{
		_vectorData = ob._vectorData;
		_dequeData = ob._dequeData;
	}
	return *this;
}

PmergeMe::~PmergeMe(){}

void PmergeMe::run(int c, char **v)
{
	_parseNumber(c, v);
	std::cout << "Before:   ";
	size_t printLimit = _vectorData.size();
	for (size_t i = 0; i < printLimit; i++) // print all elements of vector
		std::cout << _vectorData[i] << " ";
	std::cout << std::endl;
	// vector sorting
	clock_t startVec = clock(); // load clock before sorting
	_mergeInsertSortVector(_vectorData); // sort vector
	clock_t endVec = clock(); // load clock after sorting
	double timeVec = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC * 1000000.0; // multiply by 1 million to get microseconds
	// deque sorting
	clock_t startDeq = clock(); 
	_mergeInsertSortDeque(_dequeData); 
	clock_t endDeq = clock();
	double timeDeq = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC * 1000000.0;

	std::cout << "After:    ";
	for (size_t i = 0; i < printLimit; i++) // print all elements of vector after sorting
		std::cout << _vectorData[i] << " ";
	std::cout << std::endl;

	std::cout << "Time to process a range of " << _vectorData.size() 
			  << " elements with std::vector : " << timeVec << " us" << std::endl; // print time taken to sort vector
	std::cout << "Time to process a range of " << _dequeData.size() 
			  << " elements with std::deque  : " << timeDeq << " us" << std::endl; // and print time taken to sort deque
}

void PmergeMe::_parseNumber(int c, char **v)
{
	for (int i = 1; i < c; i++)
	{
		std::string arg = v[i]; // convert char* to string for easier handling
		if (arg.empty())
			continue;
		for (size_t j = 0; j < arg.length(); j++) // check if all characters are digits if not throw error
		{
			if (!isdigit(arg[j]))
				throw std::runtime_error("Error: Invalid number. ");
		}
		long val = std::atol(arg.c_str()); // convert string to long to check for overflow
		if (val < 0 || val > INT_MAX) // throw error if out of int range
			throw std::runtime_error("Error: Number out of range. ");
		if (std::find(_vectorData.begin(), _vectorData.end(), static_cast<int>(val)) != _vectorData.end()) // if find returns an iterator not equal to end it means the number is duplicate
			throw std::runtime_error("Error: Duplicate number found. ");
		_vectorData.push_back(static_cast<int>(val)); // push back to vector
		_dequeData.push_back(static_cast<int>(val)); // push back to deque
	}
}

void PmergeMe::_mergeInsertSortVector(std::vector<int>& arr)
{
	if (arr.size() <= 1) // if size is 1 or less no need to sort
		return ;
	
	bool hasStraggler = (arr.size() % 2 != 0); // check if there is a straggler 
	int straggler = 0;
	if (hasStraggler)
	{
		straggler = arr.back(); // if there is a straggler store it and remove from vector
		arr.pop_back(); // remove last element from vector
	}

	std::vector<std::pair<int, int> > pairs; // create vector of pairs to hold the pairs of numbers and their order 
	for (size_t i = 0; i < arr.size(); i+=2)
	{
		if (arr[i] > arr[i + 1]) // store the larger number first in the pair and the smaller second
			pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
		else
			pairs.push_back(std::make_pair(arr[i + 1], arr[i]));
	}

	std::vector<int> mainChain; // to hold the main chain (the larger numbers)
	for(size_t i = 0; i < pairs.size(); i++)
	{
		mainChain.push_back(pairs[i].first); // push back the first element of each pair to main chain
	}

	_mergeInsertSortVector(mainChain); // recursively sort the main chain

	std::vector<int> reorderedPend; // to hold the pend chain (the smaller numbers) in the order of main chain

	for (size_t i = 0; i < mainChain.size(); i++)
	{
		int winner = mainChain[i]; // set winner to the current element in main chain
		for(size_t j = 0; j < pairs.size(); j++)
		{
			if (pairs[j].first == winner) // sort the pend chain based on the order of main chain
			{
				// push back the second element of the pair to reordered pend chain and remove the pair from pairs vector
				reorderedPend.push_back(pairs[j].second);
				pairs.erase(pairs.begin() + j);
				break;
			}
		}
	}

	mainChain.insert(mainChain.begin(), reorderedPend[0]); // insert the first element of reordered because it is always the smallest

	std::vector<int> finalPend; // to hold the final pend chain after removing the first element

	for(size_t i = 1; i < reorderedPend.size(); i++)
		finalPend.push_back(reorderedPend[i]); // push back all elements from reorderedPend except the first
	if (hasStraggler)
		finalPend.push_back(straggler); // if there was a straggler add it to the final pend chain
	if (!finalPend.empty()) // if final pend chain is not empty insert its elements into main chain
		_insertInVector(mainChain, finalPend);
	arr = mainChain;
}

int PmergeMe::_getJacobsthal(int n)
{
	if (!n) return 0;
	if (n == 1) return 1;

	int prev2 = 0;
	int prev1 = 1;
	int current = 0;

	for (int i = 2; i <= n; i++)
	{
		current = prev1 + 2 * prev2; // to get the jacobsthal number we use the formula J(n) = J(n-1) + 2*J(n-2)
		prev2 = prev1; // update previous two numbers
		prev1 = current; // update previous one number
	}
	return current;
}

void PmergeMe::_insertInVector(std::vector<int>& mainChain, std::vector<int>& pendChain)
{
	size_t total = pendChain.size();
	size_t last = 0;
	int jacobIdx = 1;

	while (last < total)
	{
		size_t pos = _getJacobsthal(++jacobIdx);
		if (pos > total)
			pos = total;
		for(size_t i = pos; i > last; i--)
		{
			int val = pendChain[i - 1];
			std::vector<int>::iterator it = std::lower_bound(mainChain.begin(), mainChain.end(), val);
			mainChain.insert(it, val);
		}
		last = pos;
	}
}

void PmergeMe::_mergeInsertSortDeque(std::deque<int>& arr)
{
	if (arr.size() <= 1)
		return;

	bool hasStraggler = (arr.size() % 2 != 0);
	int straggler = 0;
	if (hasStraggler)
	{
		straggler = arr.back();
		arr.pop_back();
	}

	std::deque<std::pair<int, int> > pairs;
	for (size_t i = 0; i < arr.size(); i += 2)
	{
		if (arr[i] > arr[i + 1])
			pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
		else
			pairs.push_back(std::make_pair(arr[i + 1], arr[i]));
	}

	std::deque<int> mainChain;
	for (size_t i = 0; i < pairs.size(); i++)
		mainChain.push_back(pairs[i].first);

	_mergeInsertSortDeque(mainChain);

	std::deque<int> reorderedPend;
	for (size_t i = 0; i < mainChain.size(); i++)
	{
		int winner = mainChain[i];
		for (size_t j = 0; j < pairs.size(); j++)
		{
			if (pairs[j].first == winner)
			{
				reorderedPend.push_back(pairs[j].second);
				pairs.erase(pairs.begin() + j);
				break;
			}
		}
	}

	mainChain.push_front(reorderedPend[0]);

	std::deque<int> finalPend;
	for (size_t i = 1; i < reorderedPend.size(); i++)
		finalPend.push_back(reorderedPend[i]);

	if (hasStraggler)
		finalPend.push_back(straggler);

	if (!finalPend.empty())
		_insertInDeque(mainChain, finalPend);

	arr = mainChain;
}

void PmergeMe::_insertInDeque(std::deque<int>& mainChain, std::deque<int>& pendChain)
{
	size_t total = pendChain.size();
	size_t last = 0;
	int jacobIdx = 1;

	while (last < total)
	{
		size_t pos = _getJacobsthal(++jacobIdx);
		if (pos > total)
			pos = total;
		for (size_t i = pos; i > last; i--)
		{
			int val = pendChain[i - 1];
			std::deque<int>::iterator it = std::lower_bound(mainChain.begin(), mainChain.end(), val);
			mainChain.insert(it, val);
		}
		last = pos;
	}
}