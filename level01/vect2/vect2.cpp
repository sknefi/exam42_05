//14:40

#include "vect2.hpp"

vect2::vect2() :
    _x(0),
    _y(0)
{
}

vect2::vect2( int x, int y ) :
    _x(x),
    _y(y)
{
}

vect2::vect2( vect2 const &src ) :
    _x(src._x),
    _y(src._y)
{
}

vect2::~vect2()
{
}

vect2   &vect2::operator=( vect2 const &rhs )
{
    _x = rhs._x;
    _y = rhs._y;
    return *this;
}

vect2   &vect2::operator+=( vect2 const &v2 )
{
    _x += v2._x;
    _y += v2._y;
    return *this;
}

vect2   &vect2::operator-=( vect2 const &v2 )
{
    _x -= v2._x;
    _y -= v2._y;
    return *this;
}

vect2   &vect2::operator*=( size_t const s )
{
    _x *= s;
    _y *= s;
    return *this;
}

vect2   vect2::operator*( int s ) const
{
    return vect2(_x *s, _y * s);
}

int   &vect2::operator[]( size_t idx )
{
    return idx == 0 ? _x : _y;
}

int    vect2::operator[]( size_t const idx ) const
{
    return idx == 0 ? _x : _y;
}

// pre-inc
vect2   &vect2::operator++()
{
    ++_x;
    ++_y;
    return *this;
} 

vect2   &vect2::operator--()
{
    --_x;
    --_y;
    return *this;
} 

// post-inc
vect2   vect2::operator++(int)
{
    return vect2(_x++, _y++);
}

vect2   vect2::operator--(int)
{
    return vect2(_x--, _y--);
}

bool    vect2::operator==( vect2 const &v2 ) const
{
    return _x == v2._x && _y == v2._y;
}

bool    vect2::operator!=( vect2 const &v2 ) const
{
    return !vect2::operator==(v2);
}

vect2   vect2::operator+( vect2 const &v2 ) const
{
    return vect2(_x + v2._x, _y + v2._y);
}

vect2   vect2::operator-( vect2 const &v2 ) const
{
    return vect2(_x - v2._x, _y - v2._y);
}

vect2   vect2::operator-()
{
    return vect2(-_x, -_y);
}

vect2   vect2::operator+()
{
    return vect2(+_x, +_y);
}

