#include <iostream>
using namespace std;
struct Point{
    int x,y;Point(){};

    Point(int _x, int _y)
    :x(_x),y(_y){}
    

};    
void print(Point p)
{
     cout<<&p.x<<" "<<&p.y<<endl;
}
void ref(Point& p){
        cout<<&p.x<<" "<<&p.y;
    }
int main ()
{
    Point p(5, 10);
    print(p);
    ref(p);
    return 0;
}