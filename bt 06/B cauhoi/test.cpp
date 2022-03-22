#include <iostream>
using namespace std;

double H(int N) { 
   if (N == 1) return 1;
   return H(N-1) + 1.0/N; 
}
int main ()
{
    int n; cin>>n;
    cout<<H(n);
}