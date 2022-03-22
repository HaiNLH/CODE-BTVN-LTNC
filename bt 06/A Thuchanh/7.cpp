//permutation
#include <iostream>
using namespace std;

void permutation(string s, int i , int n)
{
    if(i==n-1)
    {
        cout<<s<<endl;
    }
    for(int j =i; j<n; j++)
    {
        swap(s[i],s[j]);
        permutation(s, i+1, n);
        swap(s[i],s[j]);
    }
}

int main ()
{
    string str;
    cin>>str;
    permutation(str, 0, str.length());
    return 0;
}