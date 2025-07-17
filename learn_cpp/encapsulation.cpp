#include <iostream>

using namespace std;

class Operation
{
    private:
        int sum;
        int power;

    public:
        Operation()
        {
            int a , b;

            cout << "enter a : ";
            cin >> a;
            cout << "enter b : ";
            cin >> b;
            setsum(a, b);
            setpower(a, b);
        }

        void setsum(int a, int b)
        {
            sum = a + b;
        }
        void setpower(int a, int b)
        {
            power = a * b;
        }

        int getpower()
        {
            return (power);
        }
        int getsum()
        {
            return (sum);
        }

        void print_value()
        {
            cout << "power : " << getpower() << endl;
            cout << "sum : " << getsum() << endl;
        }
};

int main(void)
{
    Operation op1;
    Operation op2;

    op1.print_value();
    op2.print_value();
}



// exemple n 2 




#include <iostream>

using namespace std;

// Employee هنا قمنا بتعريف الكلاس
class Employee {

    // و بالتالي لم يعد ممكناً الوصول لهم بشكل مباشر من خارج الكلاس private لاحظ أننا جعلنا نوع الخصائص
    private:
        string name;
        int age;
        double salary;
        
    // حتى نستطيع من الوصول من خارج الكلاس public هنا قمنا بتعريف جميع الدوال التي سنتعامل من خلالها مع الخصائص كـ
    public:
        // name هذه الدالة ترجع قيمة المخزنة الخاصية
        string getName() {
            return name;
        }
 
        // age هذه الدالة ترجع قيمة المخزنة الخاصية
        int getAge() {
            return age;
        }
 
        // salary هذه الدالة ترجع قيمة المخزنة الخاصية
        double getSalary() {
            return salary;
        }
 
        // name هذه الدالة نعطيها إسم فتقوم بوضعه للخاصية
        void setName(string n) {
            name = n;
        }
        
        // age هذه الدالة نعطيها رقم فتقوم بوضعه للخاصية
        void setAge(int a) {
            age = a;
        }
 
        // salary هذه الدالة نعطيها رقم فتقوم بوضعه للخاصية
        void setSalary(double s) {
            salary = s;
        }
};

// main() هنا قمنا بتعريف الدالة
int main()
{
    // e إسمه Employee هنا قمنا بإنشاء كائن من الكلاس
    Employee e;
 
    // Setter من خلال دوال الـ e هنا قمنا بوضع قيم لخصائص الكائن
    e.setName("Mhamad");
    e.setAge(21);
    e.setSalary(950);
 
    // Getter من خلال دوال الـ e هنا قمنا بعرض قيم خصائص الكائن
    cout << "Name: " << e.getName() << "\n";
    cout << "Age: " << e.getAge() << "\n";
    cout << "Salary: " << e.getSalary();
}