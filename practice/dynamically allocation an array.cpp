#include<iostream>

using namespace std;

int main()
{
    int *pointer ,amount;
    cout<<"Enter the amount: ";
    cin>>amount;

    pointer=new int[amount];

    for(int i=0;i<amount;i++)
    {
        cout<<"Please enter "<<i+1<<"th element: ";
        cin>>*(pointer +i);
    }
    for(int i=0;i<amount;i++)
    {
        cout<<i+1<<"th element is "<<*(pointer +i)<<endl;
    }

    delete []pointer;
    return 0;
}
