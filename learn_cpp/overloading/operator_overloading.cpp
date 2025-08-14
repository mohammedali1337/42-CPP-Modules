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
        Rectangle   add(Rectangle ob);
};

Rectangle

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
    string s1 = "mohammed";
    string s2 = "ali";
    cout << s1[0] + s2[0] << endl;

}