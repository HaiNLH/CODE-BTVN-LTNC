#include <iostream>
#include <chrono>
using namespace std;

// long F(int n)
// {
//     if(n==0) return 0;
//     if(n==1) return 1;
//     return F(n-1) +F(n-2);
// }  

// int main ()
// {
//     int n; cin>>n;
   
//     int x=F(n);


//     cout<<x;
//     return 0;
// }
// có thể dễ dàng thấy khi dùng đệ quy thì với những số lớn một xíu là time chắc chắn exceeded vì thế nên dùng cách khác, tuy nhiên vẫn có một số bài toán dùng đệ quy giải thì rất hay!!!
 long long Fibonacci(int n )
{
    long long f0=0;
    long long f1=1;
    long long fn=1;
    int i ;
    if(n<0)
    {
        return -1;
    }else{
        for(i =2; i<n; i++)
        {
            f0=f1;
            f1=fn;
            fn=f0+f1;
        }
    }
    return fn;
}
 int main ()
 {
     int n; cin>>n;
     cout<<Fibonacci(n);
     return 0;
 }
 // =>>> thời gian chạy chương trình khi dùng vòng lặp nhanh hơn rất nhiều!!!!