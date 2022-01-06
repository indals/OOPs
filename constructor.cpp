#include<iostream>
using namespace std;

class construct
{
    public:
    int a;
    int b;
    construct()
    {
        a = 5;
        b = 7;
    }
};
int main(void)
{
    construct obj;
    cout<<obj.a<<" "<<obj.b<<endl;
}