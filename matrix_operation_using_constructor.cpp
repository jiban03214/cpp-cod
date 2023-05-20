#include<iostream>
using namespace std;
class MATRIX
{
     int r,c;
     int m[10][10];
     public:
     MATRIX(void){}
     MATRIX(int r,int c,int m[10][10]);
     void mat_display();
     void mat_add(MATRIX,MATRIX);
     void mat_sub(MATRIX,MATRIX);
     void mat_mul(MATRIX,MATRIX);

};
MATRIX::MATRIX(int x,int y, int t[10][10])//Constructor Defination
{
    int i,j;
    r=x;
    c=y;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         m[i][j]=t[i][j];  
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
void MATRIX::mat_add(MATRIX a,MATRIX b) 
{
     int i,j;
     r=a.r;
     c=a.c;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            m[i][j]=a.m[i][j]+b.m[i][j];
        }
    }


}
void MATRIX::mat_sub(MATRIX a,MATRIX b) 
{
     int i,j;
    r=a.r;
    c=a.c;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            m[i][j]=a.m[i][j]-b.m[i][j];
        }
    }


}
void MATRIX::mat_mul(MATRIX a,MATRIX b)
{
    int i,j,k;
    if(a.c!=b.r)
    {
        cout<<"can't multiplay matirx\n";
    }
    else
    {
         r=a.r;
         c=a.c;
         for(i=0;i<r;i++)
         {
             for(j=0;j<c;j++)
             {
                m[i][j]=0;
                for(k=0;k<a.c;k++)
                {
                    m[i][j]+=a.m[i][k]*b.m[k][j];
                }

             }

         }
    }
       

}
int main()
{
    int r,c,i,j,m[10][10];
    MATRIX add,sub,mul;
    cout<<"Input the value\n";
    cout<<"Ente the firest martix\n";
    cout<<"Enter the order of the matrix:";
        cin>>r>>c;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cout<<"Ente the matrix element"<<"m["<<i<<"]["<<j<<"]:";
                cin>>m[i][j];
            }
        }
    MATRIX s(r,c,m);        //Constructor call
    cout<<"Ente the 2nd martix\n";
    cout<<"Enter the order of the matrix:";
        cin>>r>>c;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cout<<"Ente the matrix element"<<"m["<<i<<"]["<<j<<"]:";
                cin>>m[i][j];
            }
        }
    MATRIX k(r,c,m);      //Constructor call
    cout<<"display the first martix\n";
    s.mat_display();
    cout<<"display the 2nd martrix\n";
    k.mat_display();
    cout<<"Sum of two matrix\n";
    add.mat_add(s,k);
    add.mat_display();
    cout<<"Subtraction of two martix\n";
    sub.mat_sub(s,k);
    sub.mat_display();
    cout<<"Multiplay of two martix\n";
    mul.mat_mul(s,k);
    mul.mat_display();
    return(0);
}
 