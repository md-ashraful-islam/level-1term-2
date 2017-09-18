#include<iostream>
#include<string>

using namespace std;

class Human{
private:
    int age;
    string name;
public:
    static int counter;
    Human();
    Human(string input_name,int input_age);

    friend void display_all(Human a);
};

int Human::counter=0;

Human:: Human()
{
    counter++;
}
Human::Human(string input_name,int input_age)
{
    age=input_age;
    name=input_name;
    counter++;
}


void display_all(Human a)
{
    cout<<"Hi I am "<<a.name<<" and I am "<<a.age<<" years old."<<endl;
}

int main()
{
    cout<<Human::counter<<endl;
    Human rana("RANA",22);
    Human rishad;
    cout<<Human::counter<<endl;
    display_all(rana);

    return 0;
}
