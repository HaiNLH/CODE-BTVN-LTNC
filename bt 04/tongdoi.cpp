#include <iostream>
using namespace std;
int main ()
{
    int n; cin>>n;
    int a[10000];
    for(int i =0; i<n; i++) cin>>a[i];
    for(int i =0; i<=n-2; i++)
    {
        for(int j =i+1; j<=n-1; j++){
            if(a[i]+a[j]==0) cout<<a[i]<<" "<<a[j]<<endl;
        }
        
    }
    return 0;
}
// cach voi y tuong do phuc tapj duoc giam
// sap xep lai mang roi tim kiem = binary search