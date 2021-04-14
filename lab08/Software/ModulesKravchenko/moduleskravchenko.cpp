#include "moduleskravchenko.h"
#include <cmath>
double s_calculation(int x, int y, int z)
{

    double S;
    S = fabs(pow(abs(z-(2*x)), 1/2)- x*sin(pow(x, 2*z)*y));
    return S;

}
