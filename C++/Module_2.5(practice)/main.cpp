#include <iostream>
#include "MinMaxFinder.h"
using namespace std;
int main()
{
    int a = 5, b = 10, c = 2;
    int mn, mx;

    findMinAndMax(a, b, c, mn, mx);

    cout << "Minimum: " << mn << ", Maximum: " << mx <<endl;

    return 0;
}
