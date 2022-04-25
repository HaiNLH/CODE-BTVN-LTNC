#include <iostream>
using namespace std;
#define MAX 100
int a[MAX], m[MAX], n, k;
void nhap(){
    cin>>n>>k;
    for(int i =1; i<=n; i++)
    m[i]=true;
}
void xuat(){
    for(int i =1; i<=k; i++){
        cout<<a[i];
    }
    cout<<endl;
}

void duyet(int index){
    int j;
    for(j=1; j<=n;j++)
    {
        if(m[j]){
            a[index]=j;
            m[j]=false;
            if(index==k) xuat();
            else 
                duyet(index+1);
            m[j]=true; 
        }
    }
}

int main (){
    nhap();
    duyet(1);
}

