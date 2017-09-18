/*static variable must be into the public specifier..it's a class scope
variable that means for a class this variable is fixed.
We can not initialize it inside our class.
We have to use scope resolution operator to initialize a static variable.*/

#include<iostream>
#include<string>

using namespace std;

class Human
{
    int age;
    string name;
public:
    static int counter;
    void display();
    Human();
    Human(string input_name,int input_age);

};

int Human::counter=0;
void Human::display()
{
    cout<<"Hi I am "<<name<<" and I am "<<age <<"years old."<<endl;
}

Human :: Human()
{
    counter++;
}

Human :: Human(string input_name,int input_age)
{
    name=input_name;
    age=input_age;
    counter++;
}

int main()
{
    cout<<"Human count: "<<Human::counter<<endl;;
    Human rishad("Rishad",21);
    Human rana("Rana",22);
    cout<<"Human count: "<<Human::counter<<endl;;

    return 0;
}
