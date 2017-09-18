//we use constructor to initialize value of a class.

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
        age=0;
        name="No name";
        cout<<"Constructor is called automatically when declaring an object."<<endl;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
    }

};
//we can also use scope resolution in constructor.

int main()
{
    Human rana;
    rana.display();

    return 0;
}
