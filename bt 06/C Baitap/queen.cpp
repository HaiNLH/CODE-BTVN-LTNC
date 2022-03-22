#include<iostream>
#include<math.h>
using namespace std;

int a[1000];

bool check(int x,int y){

    for(int i = 1; i < x ;i++)
        if(a[i] == y || abs(i-x) == abs(a[i] - y) )
            return false;
    return true;
}
 
void output(int n){
    char board[n+1][n+1];
      for(int i=1; i<=n; i++)
    {
        for(int j =1; j<=n; j++){
            board[i][j]='0';  
        }
    }
    for(int i =1; i<= n; i++){cout<<a[i]<<" ";}
    cout<<endl;
    for(int i =1; i<=n ;i++) board[a[i]][i]='1';
    for(int i =1; i<=n; i++){
        for(int j =1; j<=n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
 
void queen(int i,int n){
    for(int j = 1;j<=n;j++){
        if(check(i,j)){
            a[i] = j;
            if(i==n) output(n);
            queen(i+1,n);
        }
    }
}
 
int main(){
    int n; cin>>n; 
    
    queen(1,n);
    return 0;
}