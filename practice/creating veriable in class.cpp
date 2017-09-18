#include<iostream>
#include<string>

using namespace std;

class Human{
public:
    string name;
    void introduce()
    {
        cout<<"Hi I am "<<name<<endl;
    }
};

int main()
{
    Human rishad;
    rishad.name="Rishad";
    rishad.introduce();

    return 0;
}
