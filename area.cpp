#include<iostream>
#include<math.h>
using namespace std;
class AREA
{

    public:
           void area(int,int);
           void area(int);
           void area(int,int,int );
           void display(int);
};
void AREA::area(int w,int h)
{
    int a;
    a=w*h;
    display(a);
}
void AREA::area(int r)
{
    int a;
    a=(22/7)*r*r;
    display(a);
}
void AREA::area(int x,int y,int z)
{
    int s,a;
    s=(x+y+z)/2;
    a=sqrt(s*(s-x)*(s-y)*(s-z));
    display(a);
}
void AREA::display(int a)
{
    cout<<"\n................................";
    cout<<"The value of area is:\n"<<a<<endl;
}
int main()
{
    AREA a;
    int n;
    int x,y,z;
    while (1)
    {
        cout<<"\nEnter 1 to callculat the area of reteangle\n";
        cout<<"\nEnter 2 to callculat the area of circle\n";
        cout<<"\nEnter 3 to callculat the area of scalene triangle\n";
        cout<<"\nEnter 0 to Exit\n";
        cout<<"\nEnter your choice\n";
        cin>>n;
        switch (n)
        {
        case 1 :cout<<"\nEnter the leght and width:\n";
                cin>>x>>y;
                a.area(x ,y);
            break;
         case 2 :cout<<"\nEnter the value of redius:\n";
                cin>>x;
                a.area(x);
            break;    
         case 3 :cout<<"\nEnter :\n";
                cin>>x>>y>>z;
                a.area(x ,y,z);
            break;
         case 0 :exit(0);
            break;    
        default:cout<<"Enter valied choice\n";
    
        }

    }
    
return(0);
}
