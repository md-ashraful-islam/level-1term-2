#include<iostream>

using namespace std;

int main()
{
    int *ptr;
    ptr=new int[5];
    if(ptr!=NULL)
    {
        *(ptr+3)=10;
        cout<<*(ptr+3)<<endl;

        delete []ptr;
        *(ptr+3)=11;
        cout<<*(ptr+3);
    }
    else
    {
        cout<<"Dynamically memory allocation failed.";
        return 0;
    }
    return 0;
}
