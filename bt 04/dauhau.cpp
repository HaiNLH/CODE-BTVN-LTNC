#include <iostream>
using namespace std;
int main ()
{
    int n; cin>>n;
    int x[64];
    int y[64];
    for(int i =0; i<n; i++){
        cin>>x[i]>>y[i];
    }
    int count=0;
    for(int i =0; i<n-1; i++){
        for(int j =i+1;j<n; j++){
            if(x[i]-y[i]==x[j]-y[j]) count++;
            else if(x[i]==x[j]||y[i]==y[j]) count++;
        }
    }
    if(count>0) cout<<"yes";
    else cout<<"no";
    return 0;
}