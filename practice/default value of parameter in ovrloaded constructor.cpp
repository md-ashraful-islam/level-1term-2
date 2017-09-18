#include<iostream>
#include<string>

using namespace std;

class Human{
private:
    int age;
    string name;
public:
    Human(string iname="No name",int iage=0)
    {
        cout<<"Constructor with default value"<<endl;
        age=iage;
        name=iname;
    }
    Human(int iage=0,string iname="No name")
    {
        cout<<"Constructor with default value"<<endl;
        age=iage;
        name=iname;
    }
    void display()
    {
        cout<<"Age: "<<age<<endl<<"Name: "<<name<<endl;
    }

};

int main()
{
    Human rana(24);
    rana.display();



    return 0;
}

