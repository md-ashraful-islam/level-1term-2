#include<iostream>

using namespace std;

void print_average(int a,int b=50,int c=10)
{
    cout<<"average of "<<a<<","<<b<<" and "<<c<<" is ";
    cout<<(a+b+c)/3.0<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
//when we don't pass a value it will take default value which is declared
//in function name.for this we have to use right most parameter.
    print_average(a,b);

    return 0;
}
