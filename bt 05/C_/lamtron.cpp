#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    double x; cin>>x;
    int y;
    y=x;
    if(x-y>=0.5) cout<<ceil(x);
    else cout<<floor(x);
    return 0;
    //c2 ko dung math.h
    // int n=x;
    // if(x-y>=0.5) cout<<n+1;
    // else cout<<n;

}

