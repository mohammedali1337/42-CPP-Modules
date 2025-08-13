// #include <iostream>

// using namespace std;

// // فتقوم بطباعة ناتج جمعهما int عند استدعاءها نمرر لها قيمتين من النوع sum هنا قمنا بتعريف دالة إسمها
// void sum(int a, int b)
// {
//     cout << "First method is called ====> " << a << " + " << b << " = " << (a+b) << endl;
// }

// // فتقوم بطباعة ناتج جمعهما double عند استدعاءها نمرر لها قيمتين من النوع sum هنا قمنا بتعريف دالة إسمها
// void sum(double a, double b)
// {
//     cout << "Second method is called ===> " << a << " + " << b << " = " << (a+b) << endl;
// }

// // main() هنا قمنا بتعريف الدالة
// int main()
// {
//     sum(4, 6);            // int هنا سيتم إستدعاء الدالة التي تأخذ 2 باراميتر نوعهم
//     sum(2.3, 5.4);        // double هنا سيتم إستدعاء الدالة التي تأخذ 2 باراميتر نوعهم

//     return 0;
// }






// #include <iostream>

// using namespace std;

// // عند استدعاءها نمرر لها عددين فتقوم بطباعة ناتج جمعهما sum هنا قمنا بتعريف دالة إسمها
// void sum(float a, float b)
// {
//     cout << a << " + " << b << " = " << (a + b) << endl;
// }

// // عند استدعاءها نمرر لها ثلاث أعداد فتقوم بطباعة ناتج جمعهم sum هنا قمنا بتعريف دالة إسمها
// void sum(float a, float b, float c)
// {
//     cout << a << " + " << b << " + " << c << " = " << (a + b + c) << endl;
// }

// // main() هنا قمنا بتعريف الدالة
// int main()
// {
//     sum(1, 3);        // التي تأخذ قيمتين sum() هنا سيتم إستدعاء الدالة
//     sum(1, 3, 7);     // التي تأخذ ثلاث قيم sum() هنا سيتم إستدعاء الدالة

//     return 0;
// }









// exemple for constructor in class 

// #include <iostream>

// using namespace std;

// // الذي يمثل الأشياء التي يمتلكها أي بلد Country هنا قمنا بتعريف الكلاس
// class Country
// {
//     public:
//         // سيملك هذه الخصائص, أي كل بلد سيملك هذه الخصائص Country كل كائن من الكلاس
//         string name;
//         double area;
//         long population;
 
//         // الكونستركتور الأول لا يأخذ باراميترات
//         Country()
//         {
//             name = "";
//             area = 0;
//             population = 0;
//         }
 
//         // الكونستركتور الثاني يتيح لك تحديد إسم البلد مباشرةً عند إنشاء الكائن
//         Country(string n)
//         {
//             name = n;
//             area = 0;
//             population = 0;
//         }
 
//         // الكونستركتور الثالث يتيح لك تحديد إسم البلد و مساحته مباشرةً عند إنشاء الكائن
//         Country(string n, double a)
//         {
//             name = n;
//             area = a;
//             population = 0;
//         }
    
//         // الكونستركتور الرابع يتيح لك تحديد إسم البلد و مساحته و عدد السكان مباشرةً عند إنشاء الكائن
//         Country(string n, double a, long p)
//         {
//             name = n;
//             area = a;
//             population = p;
//         }
    
//         // هذه الدالة تعرض جميع المعلومات التي تم إدخالها في الكائن
//         void printInfo()
//         {
//             cout << "name: " << name << endl;
//             cout << "area: " << area << endl;
//             cout << "population: " << population << endl;
//             cout << "-------------------" << endl;
//         }
// };
 
 
// // main() هنا قمنا بتعريف الدالة
// int main()
// {
//                                               // هنا كل كائن يمثل بلد ,Country هنا قمنا بإنشاء 4 كائنات من الكلاس
//     Country c1;                               // c1 هنا سيتم إستدعاء الكونستركور الأول, أي لن يتم تمرير أي معلومة حول البلد الذي يمثله الكائن
//     Country c2("KSA");                        // c2 هنا سيتم إستدعاء الكونستركور الثاني, أي سيتم تحديد إسم البلد الذي يمثله الكائن
//     Country c3("Turkey", 780580);             // c3 هنا سيتم إستدعاء الكونستركور الثالث, أي سيتم تحديد إسم و مساحة البلد الذي يمثله الكائن
//     Country c4("Lebanon", 10452, 4467000);    // c4 هنا سيتم إستدعاء الكونستركور الربع, أي سيتم تحديد إسم و مساحة و عدد سكان البلد الذي يمثله الكائن
    
//     // لعرض خصائص جميع الكائنات printInfo() هنا قمنا باستدعاء الدالة
//     c1.printInfo();
//     c2.printInfo();
//     c3.printInfo();
//     c4.printInfo();
 
//     return 0;
// }

















// oveloading operator ++

// #include <iostream>

// using namespace std;

// // الذي يمثل اللاعب Player هنا قمنا بتعريف الكلاس
// class Player {

//     public:
//         // هنا قمنا بتعريف خصائص الكلاس
//         int grade;
//         int speed;
//         int money;

//         // هنا قمنا بتعريف كونستركتور الكلاس بهدف إعطاء قيم أولية لخصائص الكائن الذي يتم إنشاؤه من الكلاس
//         Player()
//         {
//             grade = 1;
//             speed = 1;
//             money = 0;
//         }

//         // هنا قمنا بتعريف دالة تقوم بطباعة قيم خصائص الكائن بشكل مرتب عندما يتم استدعاؤه
//         void printInfo()
//         {
//             cout << "Grade = " << grade << endl;
//             cout << "Speed = " << speed << endl;
//             cout << "Money = " << money << endl;
//             cout << "----------------\n";
//         }
        
//         // هنا قمنا بتعريف ما سيحدث عند استدعاء الرمز ++ من أي كائن ننشئه من الكلاس
//         void operator++ (int)
//         {
//             // سيضاف عليها 1000 money سيضاف عليها 1 و قيمة speed سيضاف عليها 1 و قيمة grade قيمة
//             grade += 1;
//             speed += 1;
//             money += 1000;
//         }
// };

// // main() هنا قمنا بتعريف الدالة
// int main()
// {
//     // أي لاعب جديد ,Player هنا قمنا بإنشاء كائن من الكلاس
//     Player player;

//     // player لعرض القيم الإفتراضية التي يملكها الكائن printInfo() هنا قمنا باستدعاء الدالة
//     player.printInfo();

//     // حتى يتم ترقيته player هنا قمنا باستدعاء الرمز ++ من الكائن
//     player++;

//     // player من جديد لعرض القيم التي أصبحها يملكها الكائن printInfo() هنا قمنا باستدعاء الدالة
//     player.printInfo();

//     return 0;
// }




// overloading +


#include <iostream>
#include <cmath>

using namespace std;

// الذي يمثل النقطة Point هنا قمنا بتعريف الكلاس
class Point {

    public:
        // هنا قمنا بتعريف خصائص الكلاس
        int x;
        int y;

        // هنا قمنا بتعريف كونستركتور الكلاس بهدف إعطاء قيم أولية لخصائص الكائن الذي يتم إنشاؤه من الكلاس
        Point(int x, int y)
        {
            this->x = x;
            this->y = y;
        }

        // و الحصول على المسافة بينهما Point على كائن من الكلاس Point للرمز + حتى نستطيع إضافة كائن من الكلاس overload هنا فعلنا
        double operator+ (Point point)
        {
            return sqrt(pow(point.x - this->x, 2) + pow(point.y - this->y, 2));
        }
};

// main() هنا قمنا بتعريف الدالة
int main()
{
    // أي نقطتين ,Point هنا قمنا بإنشاء كائنين من الكلاس
    Point p1(1, 5);
    Point p2(4, 8);

    // distance و من ثم قمنا بتخزين الناتج في المتغير p2 و النقطة p1 هنا قمنا باستخدام العامل + للحصول على المسافة الموجودة بين النقطة
    double distance = p1 + p2;

    // distance هنا قمنا بعرض المسافة بين النقطتين و التي قمنا بتخزينها في المتغير
    cout << "Distance between p1 and p2 = " << distance;

    return 0;
}