#include <iostream>
using namespace std;
void ptr(int a[]){
    cout<<sizeof(a);
}
int main (){
    int a[100];
    cout<<sizeof(a)<<endl;
    ptr(a);
    return 0;
}