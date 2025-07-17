// #include <iostream>

// using namespace std;

// class ParentClas
// {
//     private:
//         int num1;
//         int num2;
//     public :
//         int parent_num = 100;
//         void PrintHello()
//         {
//             cout << "hello world \n";
//         }
// };

// class ChildClass : public ParentClas
// {
//     public :
//         int chil_num = 10;
// };

// int main(void)
// {
//     ChildClass test;
    
//     cout << test.parent_num << endl;
//     cout << test.chil_num << endl;

//     test.PrintHello();
// }


// exemple 2 



// #include <iostream>

// using namespace std;

// // printA يحتوي على دالة إسمها A هنا قمنا بتعريف كلاس إسمه
// class A {
    
//     public:    
//         void printA()
//         {
//             cout << "Hello from class A \n";
//         }

// };

// // printB و يحتوي على دالة إسمها A يرث من الكلاس B هنا قمنا بتعريف كلاس إسمه
// class B: public A {

//     public:
//         void printB()
//         {
//             cout << "Hello from class B \n";
//         }
    
// };

// // printC و يحتوي على دالة إسمها B يرث من الكلاس C هنا قمنا بتعريف كلاس إسمه
// class C: public B {

//     public:
//         void printC()
//         {
//             cout << "Hello from class C \n";
//         }
    
// };

// // main() هنا قمنا بتعريف الدالة
// int main()
// {
//     // c إسمه C هنا قمنا بإنشاء كائن من الكلاس
//     C c;
    
//     // c هنا قمنا باستدعاء جميع الدوال الموجودة في الكائن
//     c.printA();
//     c.printB();
//     c.printC();

//     return 0;
// }

















// exemple 3







// #include <iostream>

// using namespace std;

// // printA يحتوي على دالة إسمها A هنا قمنا بتعريف كلاس إسمه
// class A {
    
//     public:    
//         void printA()
//         {
//             cout << "Hello from class A \n";
//         }

// };

// // printB يحتوي على دالة إسمها B هنا قمنا بتعريف كلاس إسمه
// class B {

//     public:
//         void printB()
//         {
//             cout << "Hello from class B \n";
//         }
    
// };

// // printC و يحتوي على دالة إسمها B و يرث من الكلاس A يرث من الكلاس C هنا قمنا بتعريف كلاس إسمه
// class C: public A, public B {

//     public:
//         void printC()
//         {
//             cout << "Hello from class C \n";
//         }
    
// };

// // main() هنا قمنا بتعريف الدالة
// int main()
// {
//     // c إسمه C هنا قمنا بإنشاء كائن من الكلاس
//     C c;
    
//     // c هنا قمنا باستدعاء جميع الدوال الموجودة في الكائن
//     c.printA();
//     c.printB();
//     c.printC();

//     return 0;
// }













// exemple 4





// exemple 5

   
// #include <iostream>

// using namespace std;

// // printMessage يحتوي على دالة إسمها A هنا قمنا بتعريف كلاس إسمه
// class A {
    
//     public:    
//         void printMessage()
//         {
//             cout << "Hello from class A \n";
//         }

// };

// // printMessage يحتوي على دالة إسمها B هنا قمنا بتعريف كلاس إسمه
// class B {

//     public:
//         void printMessage()
//         {
//             cout << "Hello from class A \n";
//         }
    
// };

// // B و الكلاس A يرث من الكلاس C هنا قمنا بتعريف كلاس إسمه
// class C : public A, public B {
    
// };

// // main() هنا قمنا بتعريف الدالة
// int main()
// {
//     // c إسمه C هنا قمنا بإنشاء كائن من الكلاس
//     C c;

//     // الذي يملك دالتين بهذا الإسم c من الكائن printMessage() هنا قمنا باستدعاء الدالة
//     c.printMessage();
    
//     return 0;
// }