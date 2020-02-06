#ifndef FRAC_H
#define FRAC_H
#include <bits/stdc++.h>
#include <iostream>

using namespace std ;


class frac
{
private:
      int numerator, denominator;
      int gcd(int a, int b)
       {
        while (a != b)
        {
            if (a > b)
                a -= b;
            else
                b -= a;
        }
        return a;
       }
///__________________________________________

std::string intToString(int num)
{
    std::string numAsStr;

    while (num)
    {
        char toInsert = (num % 10) + 48;
        numAsStr.insert(0, 1, toInsert);

        num /= 10;
    }

    return numAsStr;
}
    public:
        frac();
        frac(int,int);
        string fraction();
        frac operator+(frac);
        frac operator-(frac);
        frac operator*(frac);
        frac operator/(frac);
        friend istream& operator>> (istream&, frac&);
        friend ostream& operator<< (ostream&, const frac&);




};

#endif // FRAC_H
