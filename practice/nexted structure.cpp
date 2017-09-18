#include<iostream>
#include<string>

using namespace std;

struct address{
    int house_no;
    string street_name;
};

struct student_type{
    int rollno;
    string name;
    address addr;
};

int main()
{
    student_type student;
    student.rollno=4545;
    student.name="Rifat";
    student.addr.house_no=10;
    student.addr.street_name="Tin matha";

    cout<<student.name<<endl;
    cout<<student.rollno<<endl;
    cout<<student.addr.house_no<<endl;
    cout<<student.addr.street_name<<endl;

}



