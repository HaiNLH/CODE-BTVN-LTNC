#include <iostream>
using namespace std;
int  count_even(int *p, int n){
    int count =0;
    for(int i =0; i<n; i++){
        if(!(p[i]&1)) count++;
    }
    return count;
}
int main (){
    int n; cin>>n;
    int *p= new int[n];
    for(int i =0; i<n; i++){
        cin>>*(p+i);
    }
    cout<<count_even(p,n);
    return 0;
}