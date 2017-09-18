#include<iostream>

using namespace std;

bool check_adult(int age)
{
    if(age>=18)
        return 1;
    return 0;
}

int main()
{
    if(check_adult(15))
        cout<<"You are an adult."<<endl;
    else
        cout<<"You are a kid."<<endl;
    return 0;
}
