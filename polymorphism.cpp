#include<iostream>
using namespace std;

int add(int a, int b)
{
    return (a + b);
}
double add(double a, double b)
{
    return (a + b);
}
int add(int a, int b, int c)
{
    return(a+b+c);
}
int main(void)
{

    cout<<"Sum1: "<<add(4,10) <<endl;
    cout<<"Sum2: "<<add(4.2,10.3) <<endl;
    cout<<"Sum3: "<<add(10,20,30) <<endl;
}