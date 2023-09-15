#include "MinMaxFinder.h"

void findMinAndMax(int a, int b, int c, int& mn, int& mx)
{
    if (a >= b && a >= c)
    {
        mx = a;
    }
    else if (b >= a && b >= c)
    {
        mx = b;
    }
    else
    {
        mx = c;
    }

    if (a <= b && a <= c)
    {
        mn = a;
    }
    else if (b <= a && b <= c)
    {
        mn = b;
    }
    else
    {
        mn = c;
    }
}
