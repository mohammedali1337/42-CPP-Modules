#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(const float n1, const float n2);
        Point(const Point &ob);
        ~Point();

        Point& operator= (const Point &ob);

        Fixed const &getX( void ) const;
        Fixed const &getY( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif