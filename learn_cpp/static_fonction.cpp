#include <iostream>

using namespace std;

// Demo هنا قمنا بتعريف الكلاس
class Demo {

    public:
        // counter هنا قمنا بتعريف المتغير المشترك
        static int counter;
        
        // كلما تم استدعاؤه counter هنا قمنا بتعريف الكونستركتور و جعلناه يزيد 1 على قيمة المتغير المشترك
        Demo()
        {
            counter++;
        }
        
        // فقط عندما يتم استدعاءها counter و قلنا أنها ترجع قيمة المشترك getCounter() هنا قمنا بتعريف الدالة المشتركة
        static int getCounter()
        {
            return counter;
        }

};


// القيمة 0 كقيمة أولية counter هنا قمنا بإعطاء المتغير المشترك
int Demo::counter = 0;

// main() هنا قمنا بتعريف الدالة
int main()
{
    // Demo هنا قمنا بتعريف ثلاث كائنات من الكلاس
    Demo demo1, demo2, demo3;
    
    // لطباعة عدد الكائنات التي تم إنشاءها منه Demo من الكلاس getCounter() هنا قمنا باستدعاء الدالة
    cout << "total created object = " << Demo::getCounter();

    return 0;
}