#include <iostream>
using namespace std;
int PalindromicNum(int a, int b);
bool checkPalindromic(int x);
int main (){
    int n;cin>>n;
    while(n>0){
        int a,b;
        cin>>a>>b;
        cout<<PalindromicNum(a,b)<<endl;
        n--;
    };

}
bool checkPalindromic(int x)
{   int tmp=x;
    int rev=0;
    while(tmp>0){
        int n=tmp%10;
        rev=rev*10+n;
        tmp/=10;
    }
    if(rev==x) return true;
    return false;
}
int PalindromicNum(int a, int b)
{   
    int count =0;
    for(int i =a; i<=b; i++){
        if(checkPalindromic(i)) count++;
    }
    return count;
}