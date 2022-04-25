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
    int *a,*b;
    void print0(){
        cout<<&a<<endl;
        cout<<&b<<endl;
    }
};
void printff(Point &p){
    
}
int main ()
{   
    int a=2,b=5;
    Point p;
    p.x=a;
    p.y=b;
    p.print();
    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<"_______"<<endl;
    p.a=&a;
    p.b=&b;
    p.print0();
    return 0;
}
