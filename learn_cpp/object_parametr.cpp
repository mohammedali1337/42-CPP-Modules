#include <iostream>

using namespace std;

// يحتوي على 4 متغيرات Book هنا قمنا بتعريف كلاس إسمه
class Book {

public:
    string title;
    string author;
    double price;
    int numberOfPages;

};

// فتقوم بطباعة كل قيم المتغيرات الموجودة فيه Book عند استدعاءها نمرر لها كائن من printInfo هنا قمنا بتعريف دالة إسمها
void printInfo(Book book)
{
    cout << "Title: " << book.title << "\n";
    cout << "Author: " << book.author << "\n";
    cout << "Price: " << book.price << "$\n";
    cout << "Number of pages: " << book.numberOfPages << "\n";
}

// main() هنا قمنا بتعريف الدالة
int main()
{
    // book إسمه Book هنا قمنا بتعريف كائن من
    Book book;

    // book هنا قمنا بإعطاء قيم لمتغيرات الكائن
    book.title = "C++ for beginners";
    book.author = "Mhamad Harmush";
    book.price = 9.99;
    book.numberOfPages = 420;
    
    // لها حتى تقوم بطباعة القيم الموجودة فيه book و تمرير الكائن printInfo() هنا قمنا باستدعاء الدالة
    printInfo(book);

    return 0;
}