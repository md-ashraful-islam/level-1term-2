#include<iostream>
#include<string>

using namespace std;

class Human{
private:
    string *name;
    int *age;

public:
    Human(string iname,int iage)
    {
        name=new string;
        age= new int;
        *name=iname;
        *age=iage;
        cout<<"Constructor  called."<<endl;
    }

    ~Human()
    {
        delete name;
        delete age;
        cout<<"Destructor called."<<endl;
    }

    void display()
    {
        cout<<"Hi I am "<<*name<<" and I am "<<*age<<" years old."<<endl;
    }

};


int main()
{
    Human *rana;
    rana=new Human("Rana",21);
    rana->display();
    delete rana;

    return 0;
}
