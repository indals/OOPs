#include<iostream>
using namespace std;

class shape{
    public:
    void setWidth(int w){
        width = w;
    }
    void setHight(int h){
        height = h;
    }
    protected:
    int width;
    int height;
};
class Rectangle: public shape{
    public:
    int getArea(){
        return (width*height);
    }
};
int main(void)
{
    Rectangle obj;
    obj.setWidth(5);
    obj.setHight(10);

    cout<< "Total Area: " <<obj.getArea() <<endl;

    // return 0;
}
