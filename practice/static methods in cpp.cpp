/*static method is a method that is class scope .
in a static method we can only use static variable.
*/

#include<iostream>

using namespace std;

class Human
{
public:
    static int counter;
    Human();
    static void display_counter();
};

Human:: Human()
{
    counter++;
}
int Human:: counter=0;
void Human::display_counter()
{
    cout<<"There are "<<counter<<" human in this program."<<endl;
}

int main()
{
    cout<<"Human count: "<<Human:: counter<<endl;
    Human rana,rishad;
    Human::display_counter();
    return 0;
}





