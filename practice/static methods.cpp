#include<iostream>

using namespace std;

class Human
{
public:
    static int counter;
    Human()
    {
        counter++;
    }
    static void Humancount()
    {
        cout<<"There are "<<counter<<" Human in this program."<<endl;
    }
};

int Human::counter =0;

int main()
{
    cout<<Human:: counter<<endl;

    Human rishad,rana;
    Human::Humancount();

    return 0;
}
