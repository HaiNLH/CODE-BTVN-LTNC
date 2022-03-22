#include <iostream>
using namespace std;
int a[10000];

int test(int n )
{
    a[n-1]=n;
    if(n==1) return 1;
    else return test(n-1)+1/n;

}


int main ()
{
    int n; cin>>n;
    cout<<test(n)<<endl;
    for(int i =0 ; i<n; i++){
        cout<<a[i]<<" ";
    }

}