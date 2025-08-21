#include <iostream>

class Fixed 
{
    private:
        int fpn;
        static const int fractional;
    public:
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed& ob);
        ~Fixed();
        Fixed &operator=(const Fixed& ob);
        

        // member fonction 
        float toFloat( void ) const;
        int   toInt( void ) const;
};