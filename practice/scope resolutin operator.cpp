#include<iostream>
#include<string>

using namespace std;

class Human{
public:
    string name="(No name)";
    void introduce();

};

void Human :: introduce()
{
    cout<<"Hi I am "<<Human :: name<<endl;
}

int main()
{
    Human rana;
    rana.name="Rana";
    rana.introduce();

    return 0;
}
