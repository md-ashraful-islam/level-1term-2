#include<iostream>

using namespace std;


class stack{
    char *s;
    int top;
    int SIZE;
public:
    stack()
    {
        top=0;
        s=new char[10];
        SIZE=10;
        cout<<"Constructor calling."<<endl;
    }
    stack(int size)
    {
        top=0;
        SIZE=size;
        s=new char[size];
    }
    void push(char c)
    {
        if(top==SIZE)
        {
            cout<<"Stack full."<<endl;
        }
        s[top++]=c;
    }

    char pop()
    {
        if(top==0)
        {
            cout<<"Stack empty."<<endl;
        }
        return s[--top];
    }
    bool is_empty()
    {
        return top==0;
    }
    ~stack()
    {
        delete []s;
        cout<<"Destructor calling."<<endl;
    }

};


int main()
{
    stack *st;
    st=new stack;
    st->push('a');
    st->push('b');
    st->push('c');
    while(!st->is_empty())
        cout<<"Pop : "<<st->pop()<<endl;

    delete st;

    cout<<"Thanks everyone."<<endl;

    return 0;
}

