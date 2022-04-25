#include <iostream>
using namespace std;
struct String
{
    int n;
    char *str;
    String (){}
    String(int _n){
        n=_n;
        str=new int [n];
    }
    String (const char* input){
        str=input;
    }
    ~String()
    {
        delete []str;
    }
    void print()
    {
        for(int i =0; i<n; i++)
        {
            cout<<*(str+i);
        }
    }
    void append(const char* p)
    {
        char *app= new int[n*n];

    }

};
int main ()
{

}
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct String{
	int n;
	const char* mychar ;
	String(const char* word)
	{
		mychar = new char[100];
		mychar = word;
		n = sizeof(mychar) / sizeof(mychar[0]);
	}
	void append(const char* word)
	{
		char *s = new char[strlen(word)+strlen(mychar)+1];
        strcpy(s,mychar);
        strcat(s,word);
		n = sizeof(s) / sizeof(s[0]);
		cout << s;
	}
};
void print(String &hello)
{
	cout << hello.mychar << " " << hello.n << endl;
}
void Destructor(String &hello)
{
	delete[] (hello.mychar);
}
int main()
{
	String hello("Hello");
	String hi("hi");
	hello.append(hi.mychar);
	
	Destructor(hello);
}