#include<iostream>
#include<string>

using namespace std;

void display(string name);
void display();

int main()
{
    display();
    display("ASHRAFUL");

    return 0;
}

void display()
{
    cout<<"hi"<<endl;
}

void display(string name)
{
    cout<<"hi "<<name<<endl;
}
