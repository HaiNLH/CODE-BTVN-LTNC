#include <iostream>
using namespace std;
bool prime(int x)
{
    if(x<=1) return false;
    for(int i =2; i<x; i++)
    {
        if(x%i==0) return false;
    }
    return true;


}
int main ()
{
    int n;
     cin>>n;
     for(int i =2; i<=n; i++){
         if(prime(i)) cout<<i<<" ";
     }
}