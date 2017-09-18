#include<iostream>

using namespace std;

class Human{
private:
    int age;
    int getage()
    {
        return age-2;
    }

public:
    void setage(int value)
    {
        age =value;
    }
    void displayage()
    {
        cout<<getage()<<endl;
    }
};

int main()
{
    Human rana;
    rana.setage(20);
    rana.displayage();

    return 0;
}
