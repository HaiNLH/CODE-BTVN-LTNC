#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main ()
{
    int n; cin>>n;
    srand(time(0));
    int count =0;
    while(count==0){
        int x=rand();
        if(x<n) {
            cout<<x;
            count++;
            break;
        }
    }
    return 0;
    
}