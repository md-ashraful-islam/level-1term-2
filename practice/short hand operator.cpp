#include<iostream>

using namespace std;

int main()
{
    char ch[20];
    cin>>ch;
    cout<<ch<<endl;
    int num1,num2;
    cout<<"Enter two number: ";
    cin>>num1>>num2;
    num1+=num2;
    cout<<num1<<endl;
    num1-=num2;
    cout<<num1<<endl;
    num1*=num2;
    cout<<num1<<endl;
    num1/=num2;
    cout<<num1<<endl;
    num1%=num2;
    cout<<num1<<endl;
    return 0;
}
