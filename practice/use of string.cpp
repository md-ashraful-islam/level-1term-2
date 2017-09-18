#include<iostream>
#include<string>

using namespace std;

int main()
{
    string first_name,last_name,full_name;
    first_name="Md";
    last_name="Ashraful";
    full_name=first_name+" "+last_name;
    cout<<full_name<<endl;
    cout<<first_name<<" "<<last_name<<endl;

    if(first_name=="Md")
        cout<<"Name matched"<<endl;
    else
        cout<<"Name not matched"<<endl;

    return 0;
}
