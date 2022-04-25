#include <iostream>
using namespace std;
struct Point{
    int x,y;
    Point(int _x, int _y)
    :x(_x),y(_y){}
    Point(){}

    Point* print(){
        cout<<x<<" "<<y;
    }
};
int main ()
{
    Point p(5, 10);
    p.print();
    return 0;
}