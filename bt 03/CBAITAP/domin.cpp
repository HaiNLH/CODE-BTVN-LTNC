#include <iostream>
using namespace std;

int main ()
{
    int m,n; cin >> m >> n;
    char a[10][10];
    for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            cin>>a[i][j];
            
        }
    }
    int b[10][10];
    for(int i =0; i<m; i++){
        for(int j =0;j<n ;j++){
            b[i][j]=-1;
        }
    }
    for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            if(a[i][j]!='*') {
                int count =0;
                    for(int k=i-1; k<=i+1; k++){
                        for(int f=j-1; f<=j+1; f++){
                            if(k<0|| f<0) continue;
                            else if(a[k][f]=='*') count++;
                        }
                    }
                b[i][j]=count;
            }
        }
    }
    for(int i =0; i<m; i++){
        for(int j =0;j<n ;j++){
            if(b[i][j]==-1) cout<<"*"<<" ";
            else cout<<b[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
    


}