#include <iostream>
using namespace std;

class ImplementAbstraction
{
private:
    int a;
    int b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void dispaly()
    {
        cout << "value of a: " << a << " value of b: " << b << endl;
    }
};

int main()
{
    ImplementAbstraction obj;
    obj.set(10, 50);
    obj.dispaly();

    return 0;
}