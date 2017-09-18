#include<iostream>
#include<string>

using namespace std;

class Human{
private:
    int age;
    string name;
public:
    Human()
    {
        cout<<"Default constructor."<<endl;
        age=0;
        name="No name";
    }
    Human(string iname)
    {
        cout<<"Constructor with name as parameter."<<endl;
        age=0;
        name=iname;
    }
    Human(int iage)
    {
        cout<<"Constructor with age as parameter."<<endl;
        age=iage;
        name="No name";
    }
    Human(string iname,int iage)
    {
        cout<<"Constructor with name and age as parameter."<<endl;
        age=iage;
        name=iname;
    }
    void display()
    {
        cout<<"Age: "<<age<<endl<<"Name "<<name<<endl;
    }

};

int main()
{
    Human rana;
    rana.display();

    Human rashed("Rashed");
    rashed.display();

    Human rajesh(21);
    rajesh.display();

    Human rishad("Rishad",21);
    rishad.display();


    return 0;
}
