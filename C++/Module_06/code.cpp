#include <bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age = 24;
    void hello()
    {
        cout<<"Rakib namespace";
    }
}
namespace Sakib
{
    int age2 = 30;
    void hello2()
    {
        cout<<"Sakib namespace";
    }
}
using namespace Rakib;
using namespace Sakib;
int main()
{
    cout<<age<<endl;
    cout<<age2<<endl;
    hello();
    return 0;
}