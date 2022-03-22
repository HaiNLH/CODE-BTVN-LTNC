#include <iostream>
using namespace std;

int main ()
{
    int n;cin>>n;
    int a[10000];
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    int b[10000];
    for(int i =0; i<n; i++){
        b[a[i]]++;
    }
    for(int i = 0; i<n ; i++){
        if(b[i]>=2) {cout<<"Yes"; break;}
        if(i==n-1 && b[i]<2) cout<<"No";
    }

}