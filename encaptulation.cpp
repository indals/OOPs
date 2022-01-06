#include <iostream>
using namespace std;

class Encapsulation
{
private:
    int x;

public:
    void set(int a)
    {
        x = a;
    }

    int get()
    {
        return x;
    }
};

int main()
{
    Encapsulation obj;
    obj.set(10);
    int result = obj.get();
    cout << "Result: " << result << endl;

    return 0;
}