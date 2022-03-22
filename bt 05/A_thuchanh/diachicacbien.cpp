#include <iostream>
using namespace std;
int main (){
    int a[3];
    char b[3];
    for(int i =0; i<3; i++){
        cout<<&a[i]<< " ";
    }
    cout<<endl;
    for(int i =0; i<3; i++){
        cout<<(void*)&b[i]<< " ";
    }
}
//địa chỉ của các biến 6 kí tự đầu thì giống nhau 2 kí tự cuối khác nhau để có thể phân biệt, địa chỉ có dạng số tăng dần (2 số cuối )
