#include<iostream>

using namespace std;

//if we use inline before a function it work's like a macro and compiler
//just substitute the function where we call it.it is more faster way.

inline void display_sum(int x,int y)
{
    cout<<x<<" + "<<y<<" = "<<x+y<<endl;
}

int main()
{
    int a,b;

    cout<<"Enter two number: ";
    cin>>a>>b;

    display_sum(a,b);
    return 0;
}
