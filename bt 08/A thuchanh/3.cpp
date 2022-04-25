#include <iostream>
using namespace std;
struct Point
{
    int x,y;
    Point(int _x, int _y){
        x=_x;
        y=_y;
    }
    void print(){
        cout<<x<<endl;
        cout<<y<<endl;
    }

};
Point mid_point(const Point p1, const Point p2){
    double x,y;
    Point midpoint(x,y);
    midpoint.x=(p1.x+p2.x)/2;
    midpoint.y=(p1.y+p2.y)/2;
    return midpoint;
}

int main ()
{
    Point p1(1,2);
    Point p2(2,6);
    Point midpoint= mid_point(p1,p2);
    midpoint.print();
    return 0;
}