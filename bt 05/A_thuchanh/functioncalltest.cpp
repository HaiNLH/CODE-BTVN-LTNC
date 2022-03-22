#include <iostream>
using namespace std;
int factorial(int x){
    if(x==1){
        return x;
    }
    
    else return(x*factorial(x-1));
    cout<<"x= "<<x<<" at " <<&x<<endl;
}
int main (){
    int n; cin >> n;
    cout<<factorial(n);
}