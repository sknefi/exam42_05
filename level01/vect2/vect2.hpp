#include <iostream>

class vect2
{
private:
    int     _x;
    int     _y;

public:
    vect2();
    vect2( int x, int y );
    vect2( vect2 const &src );
    ~vect2();

    vect2   &operator=( vect2 const &rhs );

    vect2   &operator+=( vect2 const &v2 );
    vect2   &operator-=( vect2 const &v2 );
    vect2   &operator*=( size_t const s );

    int     &operator[]( size_t idx );
    int     operator[]( size_t const idx ) const;

    vect2   &operator++(); // pre-inc
    vect2   &operator--(); 

    vect2   operator++(int); // post-inc
    vect2   operator--(int);

    bool    operator==( vect2 const &v2 ) const;
    bool    operator!=( vect2 const &v2 ) const;

    vect2   operator+( vect2 const &v2 ) const;
    vect2   operator-( vect2 const &v2 ) const;
    vect2   operator*( int s ) const;

    vect2   operator-();
    vect2   operator+();



    friend std::ostream &operator<<( std::ostream &os, vect2 const &v ) 
    {
        os << "{" << v._x << ", " << v._y << "}";
        return os;
    }

    friend vect2    operator*( int s, vect2 const &v2)
    {
        return vect2(s * v2._x, s * v2._y);
    }
};