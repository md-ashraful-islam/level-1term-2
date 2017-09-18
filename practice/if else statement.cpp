#include<iostream>

using namespace std;

int main()
{
    int age;

    cout<<"Enter your age: ";
    cin>>age;
    if(age>18)
        cout<<"You can give vote."<<endl;
    else
        cout<<"You can not give vote."<<endl;

    return 0;
}
