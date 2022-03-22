#include <iostream>
#include <math.h>
#include <ctime>
 
using namespace std;
int main (){
    int n; cin>>n;
    int a[n];
    srand(time(0));
    int count=0;
    while(count<n){
        int x=rand();
        if(x>=0&&x<=49) a[count++]=x; 
    }
    int res=0;
    for(int i =0; i<n-2; i++){
        for(int j =i+1; j<n-1; j++){
            for(int k=i+2; k<n; k++){
                if((a[i]+a[j]+a[k])%25==0) {
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                    res++;
                }
            }
        
        }
    }
    if(res==0) cout<<"DONT HAVE ANY!!! TRY AGAIN";
    return 0;
}