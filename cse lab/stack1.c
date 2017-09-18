#include<stdio.h>

#define SIZE 10

char s[SIZE];
int top;

void initialization()
{
    top=0;
}

void push(char ch)
{
    if(top==SIZE)
    {
        printf("Memory full");
        return ;
    }
    s[top++]=ch;
}

char pop()
{
    if(top==0)
    {
        printf("There is no character.");
        return ;
    }
    return s[--top];
}

int is_empty()
{
    return top==0;
}

int main()
{
    initialization();
    push('A');
    push('h');
    push('D');
    push('p');

    while(!is_empty())
    {
        printf("Pop : %c\n",pop());
    }

    return 0;

}
