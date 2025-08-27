#include "Point.hpp"

float area(Point const &a, Point const &b, Point const &c)
{
    float ax, bx, cx;
    float ay, by, cy;
    ax = a.getX().toFloat();
    ay = a.getY().toFloat();
    bx = b.getX().toFloat();
    by = b.getY().toFloat();
    cx = c.getX().toFloat();
    cy = c.getY().toFloat();
    float result = (ax * (by - cy) + bx * (cy - ay) + cx * (ay - by)) / 2.0;
    if (result < 0)
        result = -result;
    return result;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float areaABC = area(a, b, c);
    float area1 = area(point, a, b);
    float area2 = area(point, b, c);
    float area3 = area(point, c, a);

    float total = area1 + area2 + area3;
    float original = areaABC;

    if (original - total < 1e-6 && area1 > 0 && area2 > 0 && area3 > 0)
        return true;
    return false;
}