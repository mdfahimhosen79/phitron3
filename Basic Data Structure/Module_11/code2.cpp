#include <bits/stdc++.h>
using namespace std;
void swapNum(int x,int y)
{
    int z = x;
    x=y;
    y =z;
}
int main()
{
    int value1 = 10;
    int vlaue2 = 20;
    cout<<value1<<" "<<vlaue2<<endl;

    swapNum(value1,vlaue2);
    cout<<value1<<" "<<vlaue2<<endl;
    return 0;
}