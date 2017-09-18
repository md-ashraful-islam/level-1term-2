#include<iostream>
#include<string>

using namespace std;

class Student{
    int roll;
    float CGPA;
    string name;

public:
    Student()
    {
        cout<<"Constructor calling."<<endl;
    }
    Student(int input_roll,float input_CGPA,string input_name)
    {
        roll=input_roll;
        CGPA=input_CGPA;
        name=input_name;
        cout<<"Constructor calling."<<endl;
    }
    void set_roll(int input_roll)
    {
        roll=input_roll;
    }

    void set_CGPA(float input_CGPA)
    {
        CGPA=input_CGPA;
    }

    void set_name(string input_name)
    {
        name=input_name;
    }

    int get_roll()
    {
        return roll;
    }

    float get_CGPA()
    {
        return CGPA;
    }

    string get_name()
    {
        return name;
    }

    ~Student()
    {
        cout<<"Destructor calling."<<endl;
    }

};

int main()
{
    Student s1;

    s1.set_roll(10);
    s1.set_CGPA(3.44);
    s1.set_name("Anil");

    cout<<"NAME: "<<s1.get_name()<<endl;
    cout<<"ROLL: "<<s1.get_roll()<<endl;
    cout<<"CGPA: "<<s1.get_CGPA()<<endl;

    Student s2(11,3.75,"Akash");

    cout<<"NAME: "<<s2.get_name()<<endl;
    cout<<"ROLL: "<<s2.get_roll()<<endl;
    cout<<"CGPA: "<<s2.get_CGPA()<<endl;

    return 0;
}
