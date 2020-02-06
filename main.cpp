#include <iostream>
#include "frac.h"
using namespace std;

int main()
{
    frac f1;
    frac f2;
    cin >> f1 >> f2;
    frac f3 = f1*f2;
    cout <<"The result = "<<f3.fraction();
    return 0;
}
