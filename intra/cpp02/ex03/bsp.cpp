#include "Point.hpp"

Fixed area(Point const &a, Point const &b, Point const &c)
{
    Fixed result = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / Fixed(2);
    if (result < 0)
        result = result * Fixed(-1);
    return result;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed areaABC = area(a, b, c);
    Fixed area1 = area(point, a, b);
    Fixed area2 = area(point, b, c);
    Fixed area3 = area(point, c, a);


    if (areaABC == area1 + area2 + area3 && area1 > 0 && area2 > 0 && area3 > 0)
        return true;
    return false;
}