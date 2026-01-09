#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN& ob):_stack(ob._stack){}

RPN& RPN::operator=(const RPN& ob){
    if (this != &ob)
        this->_stack = ob._stack;
    return *this;
}

RPN::~RPN(){}

void RPN::run(std::string input)
{
    for (int i = 0; input[i]; i++)
    {
        if (input[i] != ' ' && (input[i] < '0' || input[i] > '9') && input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/') // check if any invalid character is present and throw error
            throw std::runtime_error("Error");
    }
    for (int i = 0; input[i]; i++)
    {
        if (input[i] >= '0' && input[i] <= '9')
        {
            if (input[i + 1] != ' ' || (i != 0 && input[i - 1] != ' ')) // check if the number is not single digit or not separated by space
                throw std::runtime_error("Error");
            int value = input[i] - '0';
            this->_stack.push(value); // push value in stack
        }
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/')
        {
            if (this->_stack.size() < 2) // if stack has less than 2 throw error
                throw std::runtime_error("Error");
            double b = this->_stack.top(); // pop top value from stack
            this->_stack.pop(); // remove same value from stack
            double a = this->_stack.top(); // pop next top value from stack
            this->_stack.pop(); // remove same value from stack
            double result = 0.0;
            if (input[i] == '+')
                result = a + b;
            else if (input[i] == '-')
                result = a - b;
            else if (input[i] == '*')
                result = a * b;
            else if (input[i] == '/')
            {
                if (b == 0)
                    throw std::runtime_error("Error"); // check division by zero
                result = a / b;
            }
            if (result == std::numeric_limits<double>::infinity() || result == -std::numeric_limits<double>::infinity()) // check for overflow and underflow and throw error
                throw std::runtime_error("Error");
            this->_stack.push(result);
        }
    }
    if (_stack.size() == 1) // if stack has only one element print it else throw error
        std::cout << this->_stack.top() << std::endl; // print the final result
    else
        throw std::runtime_error("Error");
}