#include<iostream>
using namespace std;
class MATRIX
{
     int r,c;
     int m[3][3];
     public:
     void getdata();
     void mat_display();
     void mat_add(MATRIX,MATRIX);
     void mat_sub(MATRIX,MATRIX);

};
void MATRIX::getdata()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>m[i][j];
        }
    }
}
void MATRIX::mat_display()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<m[i][j] <<" ";
        }
        cout<<"\n";
    }
}
void MATRIX::mat_add(MATRIX a,MATRIX b) 
{
     int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m[i][j]=a.m[i][j]+b.m[i][j];
        }
    }


}
void MATRIX::mat_sub(MATRIX a,MATRIX b) 
{
     int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m[i][j]=a.m[i][j]-b.m[i][j];
        }
    }


}
int main()
{
MATRIX s,r,add,sub;
cout<<"Input the value\n";
cout<<"Ente the firest martix\n";
s.getdata();
cout<<"Enter the 2nd martix\n";
r.getdata();
cout<<"display the first martix\n";
s.mat_display();
cout<<"display the 2nd martrix\n";
r.mat_display();
cout<<"Sum of two matrix\n";
add.mat_add(s,r);
add.mat_display();
cout<<"Subtraction of two martix\n";
sub.mat_sub(s,r);
sub.mat_display();
return(0);
}
 