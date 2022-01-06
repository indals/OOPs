#include<iostream>
using namespace std;

class Base{
    public:
    void display()
    {
        cout<<"This is base class"<<endl;
    }
};
class Derived: public Base{
    public:
    void display()
    {
        cout<<"This is derived class"<<endl;
    }
};
int main(void)
{
    Derived obj;
    obj.display();
}