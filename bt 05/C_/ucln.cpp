#include <iostream>
using namespace std;
int find(int a, int b){
    int x=1;
    for(int i =abs(a);i>0; i--){
        if(a%i==0&&b%i==0) {
            x=i;
            break;
        }
    }
    return x;
}

int main ()
{
    int a,b;
    cin>>a>>b;
    cout<<find(a,b);
    return 0;
}