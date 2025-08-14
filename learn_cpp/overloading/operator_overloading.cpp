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
        Rectangle operator ++(int);


        Rectangle();
        Rectangle(float w, float h);
        ~Rectangle();
};





Rectangle Rectangle::operator++(int)
{
    width++;
    hight++;
    Rectangle newob(width, hight);
    return newob;
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


    return 0;
}