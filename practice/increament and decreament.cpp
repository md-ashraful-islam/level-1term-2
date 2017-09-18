
#include<iostream>

using namespace std;

int main()
{
    int a=10;

    cout<<"Increament postfix: "<<endl;
    cout<<a++<<endl;
    cout<< a<<endl;
    a=10;
    cout<<"Increament prefix: "<<endl;
    cout<<++a<<endl;
    cout<< a<<endl;


    a=10;
    cout<<"Decrament postfix: "<<endl;
    cout<<a--<<endl;
    cout<< a<<endl;
    a=10;
    cout<<"Decrament prefix: "<<endl;
    cout<<--a<<endl;
    cout<< a<<endl;
    return 0;
}
