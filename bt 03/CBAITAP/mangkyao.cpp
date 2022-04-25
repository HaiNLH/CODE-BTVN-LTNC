#include <iostream>
using namespace std;
int main (){
    int n; cin>>n;
    int i =0, j=n/2,y,z;
    int a[n][n];
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++) a[i][j]=0;
    }
    a[0][j]=1;
    for(int k=2; k<=n*n; k++)
    {
        y=i;
        z=j;
        i=i-1;
        j=(j+1)%n;
        if(i<0) i=i+n;
        if(a[i][j]!=0)
        {
            i=(y+1)%n;
            j=z;
        }
        a[i][j]=k;
    }
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}