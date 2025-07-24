#include <iostream>
#include <string>

int main() {
    std::string message = "Hi";

    // نطبع الحجم ديال السلسلة
    std::cout << "Original message: \"" << message << "\"" << std::endl;
    std::cout << "Original size: " << message.size() << std::endl;

    // نزيد الحجم حتى 6 بحرف '*'
    message.resize(6, '*');

    std::cout << "After resize to 6: \"" << message << "\"" << std::endl;
    std::cout << "Size now: " << message.size() << std::endl;

    // نقصرها حتى تولي 2 حروف
    message.resize(2);

    std::cout << "After resize to 2: \"" << message << "\"" << std::endl;
    std::cout << "Size now: " << message.size() << std::endl;

    message.resize(10, '$');
    std::cout << "my resize fonction \n" << message << std::endl;
    std::cout << "my size fonction \n" << message.size() << std::endl;
    
    std::string str = "mohammed ali";
    std::cout << "++++++++++++++++\n";

    std::cout << "my resize fonction :" << str << std::endl;
    std::cout << "my size fonction :" << message.size() << std::endl;
    
    str.resize(5);
    
    std::cout << "my resize fonction :" << str << std::endl;
    std::cout << "my size fonction :" << message.size() << std::endl << std::endl;

    std::string str2 = "Hello";
    std::cout << str2 << std::endl;
    str2.append("$");
    std::cout << str2 << std::endl;
    str2.append("World");

    std::cout << str2 << std::endl;

    return 0;
}
 