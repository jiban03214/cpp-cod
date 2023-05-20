#include<iostream>
using namespace std;
class MATRIX
{
     int r,c;
     int m[10][10];
     public:
        void getdata();
        void mat_display();
    friend MATRIX mat_add(MATRIX,MATRIX);
    friend MATRIX mat_sub(MATRIX,MATRIX);
    friend MATRIX mat_mul(MATRIX,MATRIX);

};
void MATRIX::getdata()
{
    cout<<"Enter the order of the matrix:";
    cin>>r>>c;
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Ente the matrix element"<<"m[i][j]:";
            cin>>m[i][j];
        }
    }
}
void MATRIX::mat_display()
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<m[i][j] <<" ";
        }
        cout<<"\n";
    }
}
MATRIX mat_add(MATRIX a,MATRIX b) 
{
     int i,j;
     MATRIX k;
    k.r=a.r;
     k.c=a.c;
    for(i=0;i<k.r;i++)
    {
        for(j=0;j<k.c;j++)
        {
            k.m[i][j]=a.m[i][j]+b.m[i][j];
        }
    }
return(k);
}
MATRIX mat_sub(MATRIX a,MATRIX b) 
{
     int i,j;
     MATRIX k;
    k.r=a.r;
     k.c=a.c;
    for(i=0;i<k.r;i++)
    {
        for(j=0;j<k.c;j++)
        {
            k.m[i][j]=a.m[i][j]-b.m[i][j];
        }
    }
return(k);
}
MATRIX mat_mul(MATRIX a,MATRIX b)
{
    int i,j,k;
    MATRIX tem;
    if(a.c!=b.r)
    {
        cout<<"can't multiplay matirx\n";
    }
    else
    {
        tem.r=a.r;
         tem.c=a.c;
         for(i=0;i<tem.r;i++)
         {
             for(j=0;j<tem.c;j++)
             {
                tem.m[i][j]=0;
                for(k=0;k<a.c;k++)
                {
                    tem.m[i][j]+=a.m[i][k]*b.m[k][j];
                }

             }

         }
    }
    return(tem);   

}

int main()
{
MATRIX s,r,add,sub,mul;
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
add=mat_add(s,r);
add.mat_display();
cout<<"Subtraction of two martix\n";
sub=mat_sub(s,r);
sub.mat_display();
cout<<"Multiplay of two martix\n";
mul=mat_mul(s,r);
mul.mat_display();
return(0);
}