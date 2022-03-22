#include <iostream>
using namespace std;
void test(int a, int b){
    cout<<"a= "<<a<<" at "<<&a<<endl;
    cout<<"b= "<<b<<" at "<<&b<<endl;
}
void real(int &x,int &y){
    cout<<"x= "<<x<<" at "<<&x<<endl;
    cout<<"y= "<<y<<" at "<<&y<<endl;
}
int main (){
    int a,b;
    cin>>a>>b;
    test(a,b);
    real(a,b);
    cout<<"a= "<<a<<" at "<<&a<<endl;
    cout<<"b= "<<b<<" at "<<&b<<endl;
}