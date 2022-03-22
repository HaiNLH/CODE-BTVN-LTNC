#include <iostream>
using namespace std;
int main (){
    int n; cin >> n;
    double a[10000][2];
    for(int i =0; i<n; i++){
        for(int j=0; j<2; j++){
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(int i =0; i<n; i++){
        if(a[i][0]>a[i][1]) sum++;
        else sum--;
    }
    if(sum >=0) cout<<"YES";
    else if(sum<0) cout<<"NO";
    return 0;
}