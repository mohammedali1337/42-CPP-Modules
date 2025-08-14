#include <iostream>

using namespace std;

class Rectangle
{
    private:
        float width;
        float hight;
    public:
        float   GetHight();
        void    SetHight(float hight);
        float   Getwidht();
        void    Setwidth(float hight);


        // Prefix increment ++var
        Rectangle operator ++();


        // Postfix increment var++
        Rectangle operator ++(int);


        Rectangle operator +(Rectangle r);


        Rectangle();
        Rectangle(float w, float h);
        ~Rectangle();
};




// Postfix increment var++
Rectangle Rectangle::operator++(int)
{
    width++;
    hight++;
    Rectangle newob(width, hight);
    return newob;
}


//perfix increment ++var
Rectangle Rectangle::operator++()
{
    width++;
    hight++;
    Rectangle nob(width, hight);
    return nob;
}


Rectangle Rectangle::operator+(Rectangle r)
{
    Rectangle newr;
    newr.Setwidth(width + r.Getwidht());
    newr.SetHight(hight + r.GetHight());
    return newr;
}




Rectangle::Rectangle()
{

}

Rectangle::Rectangle(float w, float h)
{
    this->width = w;
    this->hight = h;
}

Rectangle::~Rectangle(){}

float   Rectangle::GetHight()
{
    return (hight);
}
void    Rectangle::SetHight(float hight)
{
    this->hight = hight;
}
float   Rectangle::Getwidht()
{
    return width;
}
void    Rectangle::Setwidth(float width)
{
    this->width = width;
}

int main(void)
{
    Rectangle ob1(5, 6), ob2(4, 5);

    Rectangle ob3 = ob1++;
    cout << ob3.Getwidht() << endl << ob3.GetHight();

    ob3 = ++ob2;
    cout <<endl<< ob3.Getwidht() << endl << ob3.GetHight();


    Rectangle ob4 = ob1 + ob2;
    cout << "width for ob4 = " << ob4.Getwidht() << endl << "hight for ob4 = " << ob4.GetHight() << endl;


    return 0;
}