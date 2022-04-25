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
        cout<<"("<<x<<",";
        cout<<y<<")"<<endl;
    }
};
int main ()
{
    Point p(2,5);
    p.print();
    return 0;
}
