#include <iostream>
#include <algorithm>
using namespace std;
int binarysearch(int p[], int x, int low, int high){
    int mid;
    if (low>high) return 0;
    else {
        mid = low/2 +high /2;
        if(x==p[mid]) return mid;
        else if (x>p[mid]) return binarysearch(p,x,mid+1,high);
        else return binarysearch(p, x, low, mid-1);
    }
}
void input(int p[], int n){
    for(int i =0; i<n; i++){
        cin>>p[i];
    }
}

int main (){
    int n; cin>>n;
    int p[n];
    int x; cin>>x;
    input(p, n);
    
    sort(p, p+n);for(int i =0; i<n; i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    cout<<binarysearch(p,x,0,n-1);
    return 0;

}