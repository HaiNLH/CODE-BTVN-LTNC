#include <iostream>
using namespace std;
struct Point
{
    int x,y;
    Point(){};
    void print(){
        cout<<&x<<endl;
        cout<<&y<<endl;
    }

};

int main ()
{   
    int a=2,b=5;
    Point p;
    p.x=a;
    p.y=b;
    p.print();
    cout<<&a<<endl;
    cout<<&b<<endl;

    return 0;
}
