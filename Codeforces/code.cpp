#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b; 
    cout<<"Enter Your first Number: ";
    cin>>a;
    cout<<endl<<"Enter Your second Number: "<<endl;
    cin>>b;
    int c = a;
    a = b;
    b = c;
    cout<<"1st Number: "<<a<<endl;
    cout<<"2nd Number: "<<b;
    return 0;
}