#include<iostream>
#include<string>

using namespace std;

class Person{
public:
    int age;
    string name;
    void set_name(string input_name)
    {
        name=input_name;
    }
    void set_age(int input_age)
    {
        age=input_age;
    }
};

class Student : public Person{
/*for inheritance we have to use a : and access specifier then class name*/

public:
    int id;
    void set_id(int input_id)
    {
        id=input_id;
    }
    void introduce()
    {
        cout<<"Hi I am "<<name<<endl;
        cout<<"I am "<<age<<" years old."<<endl;
        cout<<"My student id is "<<id<<endl;
    }
};


int main()
{
    Student rana;
    rana.set_name("Rana");
    rana.set_age(22);
    rana.set_id(100000);
    rana.introduce();

    return 0;
}
