#include <iostream>

class Test
{
    private:
        int x;
    public:
        Test()
        {
            std::cout << "x = " << x << std::endl;
            x = 200;
            std::cout << "x = " << x << std::endl;
        }
};

int main(void)
{
    Test ob;
}