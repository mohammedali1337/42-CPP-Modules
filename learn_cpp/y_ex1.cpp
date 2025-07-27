#include <iostream>
using namespace std;

// class Car
// {
//     private:
//         int price;
//     public:
//         Car(int p);
//         friend void increase_fonc(Car ob);
// };

// Car::Car(int p)
// {
//     price = p;
// }

// void increase_fonc(Car ob)
// {
//     ob.price += 1000;
// }

// int main(void)
// {
//     Car ob(3000);
//     increase_fonc(ob);

// }

//ex 2

class Wo
{
    private:
        int slary;
        string name;
    public:
        Wo(int s, string n);
        friend int average(Wo ob1, Wo ob2, Wo ob3);
};

Wo::Wo(int s, string n)
{
    slary = s;
    name = n;
}

int average(Wo ob1, Wo ob2, Wo ob3)
{
    return ((ob1.slary + ob2.slary + ob3.slary) / 3);
}

int main(void)
{
    Wo ob1(400, "mohammed");
    Wo ob2(800, "saad");
    Wo ob3(90, "ali");

    cout << "the average of salaries for all : " << average(ob1, ob2, ob3) << endl;
}
  