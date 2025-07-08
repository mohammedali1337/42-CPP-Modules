// 1 printf hello world in cpp


// #include <iostream>

// using namespace std;

// int main()
// {
//     cout << "hello world \n" ;
//     return 0;
// }


// 2 exemple for use variable 

// #include <iostream>

// using namespace std;

// int main(void)
// {

//     int year = 20;
//     char name[] = "mohammed ali";

//     cout << "hello my name is " << name << " im " << year << " old " ;
// }








// 3 exercice mini calcul

// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int x = 3;
//     int y = 3;

//     cout << "x + y = " << endl << x + y ;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Yes, you hear the alert :)\a \a \a";
//     return 0;
// }





// print datatype

// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int x = 3;
//     char c = 'c';
//     cout << x << c << endl;
// }


// bitwize


// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 10;      // a = 10 = 00000000000000000000000000001010
//     int b = 75;      // b = 75 = 00000000000000000000000000001011
 
//     int c = a ^ b;   // شرحنا كيف سيتم الحصول على الناتج تحت نتيجة التشغيل
 
//     cout << a << " & " << b << " = " << c;

//     return 0;
// }







// loop in cpp

// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int i = 0;
//     // for (int i = 0 ; i < 10 ; i++)
//     //     cout << "hello world \n";

//     while (i < 10)
//     {
//         cout << "hello world \n";
//         i++;
//     }
// }


// #include <iostream>

// using namespace std;

// int main(void)
// {
//     string s = "hello world ";
//     cout << s ;
//     return 0 ;
// }

#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;

    cout << "a + b = " << a + b;
    return 0;
}