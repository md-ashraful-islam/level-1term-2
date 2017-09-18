#include<iostream>
#include<string>

using namespace std;

class Human{
public:
    Human()
    {
        cout<<"Constructor called."<<endl;
    }
    ~Human();
//    {
//        cout<<"Destructor called."<<endl;
//    }

};

Human :: ~Human()
{
    cout<<"Destructor called"<<endl;
}

int main()
{
    Human *rishad;
    rishad=new Human();
    delete rishad;

    return 0;
}
