#include <iostream>
#include <string>

using namespace std;

class Car
{
    private:
        string name;
    public:
        Car(string name)
        {
            this->name = name;
        }
        ~Car()
        {
            cout << "destroy car " << name << endl;
        }
        void display_cat()
        {
            cout << "name of car " << name << endl;
        }
};

int main(void)
{
    int num_of_car;
    string name;
    cin >> num_of_car;
    Car **ob;
    for (int i = 0 ; i < num_of_car; i++)
    {
        cout << "car " << i << ": ";
        cin >> name;
        ob[i] = new Car(name);
    }
    for (int i = 0; i < num_of_car; i++)
        ob[i]->display_cat();
        
    for (int i = 0; i < num_of_car; i++)
        delete ob[i];
}