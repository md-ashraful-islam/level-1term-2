#include<iostream>
#include<string>

using namespace std;

class Human
{
    int *age;
    string *name;
public:
    Human();
    Human(string input_name,int input_age);
    void display();
    ~Human();
};

Human:: Human()
{
    age=new int;
    name=new string;
}

Human:: Human(string input_name,int input_age)
{
    age=new int;
    name=new string;
    *age=input_age;
    *name=input_name;
}

void Human:: display()
{
    cout<<"Hi this is "<<*name<<".I am "<<*age<<" years old";
}

Human:: ~Human()
{
    delete age;
    delete name;
}

int main()
{
    Human *ptr;
    ptr=new Human("Rishad",21);
    ptr->display();
    delete ptr;

    return 0;
}
