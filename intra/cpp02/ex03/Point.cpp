#include <Point.hpp>


Point::Point(): x(0), y(0)
{
}

Point::Point(const float n1, const float n2): x(n1) , y(n2)
{
}

Point::Point(const Point &ob): x(ob.x), y(ob.y)
{
}

Point::~Point()
{
}

Point& Point::operator=(const Point &ob)
{
    return (*this);
}


Fixed Point::getX( void ) const
{
    return x;
}

Fixed Point::getY( void ) const
{
    return y;
}