#include <iostream>

class Fixed
{
    private:
        int fpn;
        static const int fractional = 8;
    public:
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed& ob);
        ~Fixed();
        Fixed &operator= (const Fixed& ob);
        Fixed operator++ ();
        Fixed operator++ (int);





        float toFloat( void ) const;
        int   toInt( void ) const;
        
};

std::ostream& operator<<(std::ostream& os, const Fixed& ob); 