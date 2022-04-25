#include <iostream>
#include <cstring>
using namespace std;


char *concat(const char* a, const char* b)
{   const int n= sizeof(a)+sizeof(b);
    char *res=new char[n];
    strcat(res, a);
    strcat(res,b);
    return res;
}
int main ()
{   
    char a[]="Hello";
    char b[]="World";
    
    char *x= new char [sizeof(a)+sizeof(b)];
    x=concat(a,b);
    cout<<x;
    return 0;
}