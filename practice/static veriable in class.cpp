#include<iostream>

using namespace std;

class Human
{
public:
    static int  counter;
    Human()
    {
        counter++;
    }

    void show_total_Human()
    {
        cout<<"There are "<<counter<<" Human."<<endl;
    }
};

int Human:: counter=0;

int main()
{
    cout<<Human::counter<<endl;
    Human rishad,rana,raj;
    rishad.show_total_Human();


    return 0;

}
