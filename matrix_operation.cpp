#include<iostream>
using namespace std;
class MATRIX
{
     int r,c;
     int m[10][10];
     public:
     void getdata();
     void mat_display();
     void mat_add(MATRIX,MATRIX);
     void mat_sub(MATRIX,MATRIX);
     void mat_mul(MATRIX,MATRIX);

};
void MATRIX::getdata()
{
	cout<<"Enter the order of the Matrix:\n";
	cin>>r>>c;
	
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        	cout<<"Enter the data "<<"m[i][j]";
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
		cout<<"can'n Multiply";
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
	add.mat_add(s,r);
	add.mat_display();
	cout<<"Subtraction of two martix\n";
	sub.mat_sub(s,r);
	sub.mat_display();
	cout<<"Multiply of two martix\n";
	mul.mat_mul(s,r);
	mul.mat_display();
	return(0);
}
 
