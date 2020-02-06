#include "frac.h"
#include <bits/stdc++.h>
#include <iostream>
using namespace std ;

frac::frac(){}
///_____________________________________
frac::frac(int a,int b)
{
    numerator   = a/gcd(a,b);
    denominator = b/gcd(a,b);
}
///_____________________________________
string frac::fraction()
{
    string s1 = intToString(numerator);
    string s2 = intToString(denominator);
    return s1+"/"+s2;
}
///_____________________________________
frac frac:: operator+(frac num)
{
    numerator   = num.numerator*denominator+num.denominator*numerator;
    denominator = num.denominator*denominator;
    return *this;
}
///_____________________________________
frac frac:: operator-(frac num)
{
    numerator   = num.numerator*denominator-num.denominator*numerator;
    denominator = num.denominator*denominator;
    return *this;
}
///_____________________________________
frac frac:: operator*(frac num)
{
    numerator   = num.numerator*numerator;
    denominator = num.denominator*denominator;
    return *this;
}
///_____________________________________
frac frac:: operator/(frac num)
{
    numerator   = num.denominator*numerator;
    denominator = num.numerator*denominator;
    return *this;
}
///_____________________________________
istream& operator>> (istream&input, frac&f)
{
    cout << "Enter fraction : \n";
    input >> f.numerator >> f.denominator;
    return input;
}
///_____________________________________
ostream& operator<< (ostream&output, const frac&f)
{
    output << f.numerator << f.denominator;
    return output;
}
