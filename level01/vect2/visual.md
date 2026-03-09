```c++
operator=(rhs)   -> (*this) = rhs

operator++()     -> ++(*this)
operator--()     -> --(*this)

operator++(int)  -> (*this)++
operator--(int)  -> (*this)--

operator+=(v2)   -> (*this) += v2
operator-=(v2)   -> (*this) -= v2
operator*=(s)    -> (*this) *= s

operator-(v2)    -> (*this) - v2
operator+(v2)    -> (*this) + v2
operator*(s)     -> (*this) * s

operator+()      -> +(*this)
operator-()      -> -(*this)

operator[](idx)        -> (*this)[idx]
operator[](idx) const  -> (*this)[idx]

operator==(v2)   -> (*this) == v2
operator!=(v2)   -> (*this) != v2
```
