#include <iostream>
using namespace std;
struct Point
{
    int x,y;
    Point(){}
    Point(int p_x, int p_y)
    :x(p_x),y(p_y){}
    Point midpoint(const Point& other){
        Point midpoint;
        midpoint.x=(x+other.x)/2;
        midpoint.y=(y+other.y)/2;
        return midpoint;
    }

};
void print(Point p){
    cout<<p.x<<" "<<p.y;
}
int main ()
{
    Point p1(10 ,5);
    Point p2(2,4);
    Point midpoint;
    midpoint=p1.midpoint(p2);
    print(midpoint);
    return 0;
}