#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int money,year;
        cin>>money>>year;
        if(money<1000)
        {
            money +=1000;
            year -=1;
            for(int i=0; i<year; i++)
            {
                money += money;
            }
        }else{
            for(int i=0; i<year; i++)
            {
                money += money;
            }
        }
        cout<<money<<endl;
    }
    return 0;
}