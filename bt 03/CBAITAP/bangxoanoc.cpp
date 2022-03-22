#include <iostream>
using namespace std;
int main () 
{
    int x,y; cin>>x>>y;

    int maxx=x;
    int maxy=y;
    int minx=0;
    int miny =0;
    int k =1;
    int i =minx;
    int j =miny;
    int a[100][100];
    while(k<=x*y){
        for(j+=miny;j<maxy;j++){

            a[i][j]=k++; //first row of the matrix
            
        }maxy--;
        j-=1;
        for(i=i+1;i<maxx;i++){

            a[i][j]=k++; //last column of the matrix
        }maxx--;
        i-=1;
        if(k==x*y) break;
        for(j=maxy-1;j>=miny;j--){
          
            a[i][j]=k++; //loop to the beginning of last row
            
        }miny++;
        j+=1;
        for(i=maxx-1;i>minx;i--){
           
            a[i][j]=k++;
            
        }minx++;
        i+=1;
        
    }
    for(int c=0;c<x;c++){
        for(int d=0; d<y; d++){
            cout<<a[c][d]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
    

}