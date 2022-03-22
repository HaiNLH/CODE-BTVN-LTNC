#include <iostream>
using namespace std;

void func(int a[]){
    for(int i =0; i<5; i++){
        cout<<&a[i]<<" ";
    }
    cout<<endl;
}

int main ()
{
    int a[5];
    for(int i =0; i<5; i++){
        cout<<&a[i]<<" ";
    }
    cout<<endl;
    func(a);
    return 0;
}//=>>> có  thể thấy mảng chuyền tham chiếu vào hàm do các địa chỉ mảng ở hàm và main là như nhau