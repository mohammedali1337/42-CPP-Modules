#include <iostream>
using namespace std;

// //encapsulation 

// class Car {

//     private:
//         bool isexpired()
//         {
//             return ((2025 - year) > 15);
//         }

//     public:
//         Car(int year, string brand, string model)
//         {
            
//         }
//         string  brand;
//         string  model;
//         int     year;
//         void    display_info()
//         {
//             cout << "brand : " << brand << endl;
//             cout << "model : " << model << endl;
//             cout << "year : " << year << endl;
//             cout << "is expired " << (isexpired() ? "yes" : "no") << endl << "____________________\n";
//         }
//     void setbrand(string n)
//     {
//         brand = n;
//     }
//     void setyear(int n)
//     {
//         year = n;
//     }
//     void setmodel(string n)
//     {
//         model = n;
//     }


//     string getBrand()
//     {
//         return brand;
//     }
//     string setyear()
//     {
//         return brand;
//     }
//     string setmodel()
//     {
//         return brand;
//     }
// };

// int main(void)
// {
//     Car car1;
//     Car car2;

//     car1.setbrand("nissan");
//     car2.setbrand("bmw");
    
//     car1.setmodel("sunn");
//     car2.setmodel("c180");

//     car1.setyear(2000);
//     car2.setyear(2020);

//     car1.display_info();
//     car2.display_info();
// }



//++++++++++++++++++++exemple of encapsulation 

// #include <iostream>
// using namespace std;


// class Car {

//     private:
//         string  brand;
//         string  model;
//         int     year;
//         bool isexpired()
//         {
//             return ((2025 - year) > 15);
//         }

//     public:
//         Car(int year, string brand, string model)
//         {
//             setyear(year);
//             setbrand(brand);
//             setmodel(model);
//         }
//         ~Car()
//         {
//             cout << "clean resources\n";
//         }
//         void    display_info()
//         {
//             cout << "brand : " << brand << endl;
//             cout << "model : " << model << endl;
//             cout << "year : " << year << endl;
//             cout << "is expired " << (isexpired() ? "yes" : "no") << endl << "____________________\n";
//         }


//     string getBrand()
//     {
//         return brand;
//     }
//     string setyear()
//     {
//         return brand;
//     }
//     string setmodel()
//     {
//         return brand;
//     }
//     void setbrand(string n)
//     {
//         brand = n;
//     }
//     void setyear(int n)
//     {
//         year = n;
//     }
//     void setmodel(string n)
//     {
//         model = n;
//     }
// };

// int main(void)
// {
//     Car car1(2000, "nissan", "qqqqq");
//     Car car2(2005, "bmw", "jjjjjjjj");


//     car1.display_info();
//     car2.display_info();

//     cout << "++++++++++++++++++++++++++++\n";

//     cout << car1.getBrand() << endl;
// }













// solid prenciples



class Car {

    private:
        string  brand;
        string  model;
        int     year;
        bool isexpired()
        {
            return ((2025 - year) > 15);
        }

    public:
        Car(int year, string brand, string model)
        {
            setyear(year);
            setbrand(brand);
            setmodel(model);
        }
        ~Car()
        {
            cout << "clean resources\n";
        }
        void    display_info()
        {
            cout << "brand : " << brand << endl;
            cout << "model : " << model << endl;
            cout << "year : " << year << endl;
            cout << "is expired " << (isexpired() ? "yes" : "no") << endl << "____________________\n";
        }


    string getBrand()
    {
        return brand;
    }
    string setyear()
    {
        return brand;
    }
    string setmodel()
    {
        return brand;
    }

    void setbrand(string n)
    {
        brand = n;
    }
    void setyear(int n)
    {
        year = n;
    }
    void setmodel(string n)
    {
        model = n;
    }
};

class ElectricCar : public Car {
    private:
        int batteryCapacity;

    public:
        void    setBatteryCapacity(int b)
        {
            batteryCapacity = b;
        }
};

int main(void)
{
    Car car1(2000, "nissan", "qqqqq");
    Car car2(2005, "bmw", "jjjjjjjj");
    ElectricCar ecar ;
    


    car1.display_info();
    car2.display_info();

    cout << "++++++++++++++++++++++++++++\n";

    cout << car1.getBrand() << endl;
}







