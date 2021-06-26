#include "moduleskravchenko.h"
#include <cmath>

double s_calculation(float x,float y,float z)
{

    double S;
    S = fabs(pow(abs(z-(2*x)), 1/2)- x*sin(pow(x, 2*z)*y));
    return S;

}




float income_eval(float x, float z, int y)
{
    if(x > 0 && x < 10348 && z > 0 && z < 30000 && y >= 0 && y <= 50)
    {
        if (y >= 3 && y < 5) x = x * 10 / 100;
        else if (y >= 5 && y < 7) x = x * 15 / 100;
        else if (y >= 7 && y < 15) x = x * 20 / 100;
        else if (y >= 15) x = x * 25 / 100;
        else x = 0;

        return z + x;
    }
    return -1;
}

float mid_temperature_celsius(float t_arr[6])
{
    float result;

    for(int i = 0; i < 6; i++)
        if(t_arr[i] >= -100 && t_arr[i] <= 100) result += t_arr[i];
        else return nan("");

    result /= 6;
    result = result*100 + 0.5;
    result = int(result);
    result /= 100;
    return result;
}

float mid_temperature_farengates(float t_arr[6])
{
    float result = 0;
    result = mid_temperature_celsius(t_arr) / 5 * 9 + 32;
    return result;
}

int bit_counter(int N)
{
    if(N < 0 || N > 10008000) return -1;
    else
    {
        bool D11 = (N>>11)&1? 1: 0;
        int count_bites = 0;
        while(N != 0)
        {
            if((N & 1) == D11) ++count_bites;
            N >>= 1;
        }
        return count_bites;
    }
}

