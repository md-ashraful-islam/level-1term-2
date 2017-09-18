#include<iostream>

using namespace std;

int main()
{
    int a,*ip;
    bool b=1,*bp;
    cout<<"Enter a number: ";
    cin>>a;
    ip=&a;
    bp=&b;

    cout<<"size of int is "<<sizeof(a)<< " byte"<<endl;
    cout<<"size of bool is "<<sizeof(b)<< " byte"<<endl;

    cout<<"\n\n\n";
    cout<<a<<"-->"<<ip<<endl;
    cout<<b<<"-->"<<bp<<endl;

    cout<<"\n\n\n";

    cout<<*ip<<"-->"<<ip<<endl;
    cout<<*bp<<"-->"<<bp<<endl;

    cout<<"\n\n\n";

    cout<<ip<<"-->"<<&ip<<endl;
    cout<<bp<<"-->"<<&bp<<endl;

    return 0;
}
