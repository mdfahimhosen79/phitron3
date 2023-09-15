#include <iostream>
using namespace std;

class result
{
public:
    void gpa();
    void position();
};

void result::gpa()
{
    float a, b, c, d, e;
    a = 3.25, b = 3.50, c = 3.75, d = 3.5, e = 3.75;
    float cgpa = (a * 2 + b * 3 + c * 2 + d * 3 + e * 3) / (2 + 3 + 2 + 3 + 3);
    cout << cgpa<<endl;
}

void result::position()
{
    cout<< "Your position is 5th";
    
}

int main()
{
    result r;
    r.gpa();
    r.position();
    return 0;
}
