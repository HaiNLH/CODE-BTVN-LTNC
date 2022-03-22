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
    string str="";
    int n,k; cin>>n>>k;
    for(char i ='a'; i<'a'+n; i++){
        str+=i;
    }
    permutation(str, 0, k);

    return 0;
}