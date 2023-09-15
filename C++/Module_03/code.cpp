#include <bits/stdc++.h>
using namespace std;

class Cadd
{
   public:
   int one;
   Cadd(int n)
   {
        cout<<"A constructore is called"<<endl;
        one = n;
   } 
   Cadd()
   {
        cout<<"A default constructor is called"<<endl;
   }
   ~Cadd()
   {
        cout<<"Destructing: "<<one<<endl;
   }
   int add()
   {
        return(one+one);
   }
};

int main()
{       
    Cadd obj(4);
    Cadd obj2;
    cout<<"The value: "<<obj.one<<endl;
    cout<<"Enter a number ";
    cin>>obj2.one;
    cout<<obj2.add()<<endl;
                               
    return 0;
}
