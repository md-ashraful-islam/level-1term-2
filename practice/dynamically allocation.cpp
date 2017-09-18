#include<iostream>

using namespace std;

int main()
{
    int *pointer;

    pointer = new int;

    cout<<"The address pointed by the pointer is "<<pointer<<endl;
    *pointer = 37;
    cout<<"Value "<<*pointer;

    delete pointer;
    return 0;
}
