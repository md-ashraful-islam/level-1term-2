#include<iostream>
#include<string>

using namespace std;

class Human{
public:
    string name;
    void introduce()
    {
        cout<<"Hi I am "<<name<<"."<<endl;
    }

};

int main()
{
    Human rishad,*rana;
    rishad.name="Rishad";
    rishad.introduce();

    rana=new Human();
    rana->name="rana";
    rana->introduce();

    return 0;

}
