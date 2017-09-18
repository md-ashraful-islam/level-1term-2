#include<iostream>

using namespace std;

void display(const int *start,const int *end)
{
    for(int i=0;(start+i)!=end;i++)
    {
        cout<<*((start+i))<<endl;
    }
}

//struct student{
//    char sex;
//    int clas;
//    int rollno;
//};

int main()
{
//    student me={'m',13,250};
//    student *meptr;
//    meptr=&me;
//    meptr->clas=12;
//    cout<<meptr->sex<<endl<<me.clas<<endl<<meptr->rollno<<endl;
    int a[10]={45,54,65,47,57,23,47,45,49,54};
    display(a,a+10);
    return 0;
}
