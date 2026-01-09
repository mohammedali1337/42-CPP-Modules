#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <limits>
class RPN
{
    private:
        std::stack<double> _stack; // to store the numbers for RPN calculation
    public:
        RPN();
        RPN(const RPN& ob);
        ~RPN();
        RPN& operator=(const RPN& ob);

        void run(std::string input); // method to execute RPN calculation
};