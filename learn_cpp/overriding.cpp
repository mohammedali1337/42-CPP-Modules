#include <iostream>
using namespace std;

// class Country {
//     // هنا قمنا بتعريف دالة تقوم بطباعة لغة البلد و جعلناها تطبع اللغة الإنجليزية كاللغة الإفتراضية لأي بلد
//     public:
//         void language()
//         {
//             cout << "English \n";
//         }
// };

// class Australia : public Country { 
//     // من جديد لأن اللغة الإنجليزية هي لغة أستراليا أصلاً language() هنا لا داعي لتعريف الدالة
// };

// class Spain : public Country {
//     // من جديد لأن اللغة الإنجليزية ليست لغة إسبانيا language() هنا يجب تعريف الدالة
//     public:
//         void language()
//         {
//             cout << "Spanish \n";
//         }
// };

// class Lebanon : public Country {
//     // من جديد لأن اللغة الإنجليزية ليست لغة لبنان language() هنا يجب تعريف الدالة
//     public:
//         void language()
//         {
//             cout << "Arabic \n";
//         }
// };

// int main()
// {
//     // هنا قمنا بإنشاء كائنات من البلدان الثلاثة
//     Australia au;
//     Lebanon lb;
//     Spain sp;

//     // لعرض لغة كل بلد language() هنا قمنا باستدعاء الدالة
//     au.language();
//     lb.language();
//     sp.language();

//     return 0;
// }







// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     virtual void speak() {
//         cout << "Animal speaks" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void speak() override {
//         cout << "Dog barks" << endl;
//     }
// };

// int main() {
//     Dog* a ;
//     a->speak();  // ❌ يطبع "Animal speaks" رغم أن `a` مشير لـ `Dog`
//     return 0;
// }








// exemple 1 





// class Base
// {
//     public:
//         void Print()
//         {
//             cout << "Base::print() \n";
//         }
// };

// class Derived : public Base
// {
//     public :
//         void Print()
//         {
//             cout << "derived::print() \n";
//         }
//         void Printboth()
//         {
//             Base :: Print();
//             Print();
//         }
// };



// int main()
// {
//     Derived b;

//     b.Print();

//     b.Base::Print();

//     b.Printboth();
//     return 0;
// }




// func يحتوي على دالة واحدة إسمها Base هنا قمنا بتعريف كلاس إسمه
// class Base
// {
//     public:
//         virtual void func()
//         {
//             cout << "Base class default behavior \n";
//         }
// };

// // أيضاً func و فيه قمنا بتعريف دالة إسمها Base يرث من الكلاس Derived هنا قمنا بتعريف الكلاس
// class Derived : public Base
// {
//     public:
//         void func() override
//         {
//             Base::func();
//             cout << "Derived class overridden behaviour \n";
//         }
// };

// // main() هنا قمنا بتعريف الدالة
// int main()
// {
//     // d إسمه Derived هنا قمنا بإنشاء كائن من الكلاس
//     Derived d;

//     // Derived و التي تم تعريفها في الكلاس d من الكائن func() هنا قمنا باستدعاء الدالة
//     d.func();

//     return 0;
// }









// Abstraction exemple 3








