#include<iostream>
using namespace std;
const int size= 5;
class stack
{
    int top=-1;
    int sta[size];
    public:
     void push(int n);
     void pop();
     void display();

};
void stack::push(int n)
{
    if(top>=size-1)
    {
        cout<<"The stack is full\n";
    }
    else
    {
        top=top+1;
        sta[top]=n;
    }
}
void stack::pop()
{
    if(top<0)
    {
        cout<<"The stack is Empty\n";

    }
    else
    {
        sta[top];
        top=top-1;
        cout<<"The value stack is\n"<<sta[top];
    }

    
}
void stack::display()
{
    int i;
    if(top>=0)
    {
        for(i=top;i>=0;i--)
        {
            cout<<"\nThe stack element are\n"<<sta[i];
        }
    }
    else
    {
        cout<<"The stack is Empty";

    }

}
int main()
{
    stack p;
    int n,k;
    while (1)
    { 
        cout<<"click '1'to pous the value in stack\n";
        cout<<"click '2'to pop the value in stack\n";
        cout<<"click '3'to display the value in stack\n";
        cout<<"click '4'to  exit\n";
        cout<<"Enter your choice\n";
        cin>>k;
        switch (k)
        {
        case 1:
             cout<<"Ente the stack element\n";
             cin>>n;
             p.push(n);
            break;
        case 2:
             p.pop();
            break; 
        case 3:
             p.display();
             break;   
        case 4: 
             exit(0);
        default:
        cout<<"Enter the valied choice\n";
        
        }
    
    }
    return(0);
}
