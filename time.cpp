#include<iostream>
using namespace std;

class Time
{
	int h,m,s;
	public:
	Time ()
	{
		h=0;
		m=0;
		s=0;
	}
	Time(int x,int y,int z)
	{
		h=x;
		m=y;
		s=z;
	}
	 void display(void);
	 Time operator+(Time);
};
void Time::display()
{
	cout<<"\n The Time is:";
	if(h<10)
	{
		cout<<"0";
	}
	cout<<h<<":";
	if(m<10)
	{
		cout<<"0";
	}
	cout<<m<<":";
	if(s<10)
	{
		cout<<"0";
	}
	cout<<s<<endl;
	
}
Time Time::operator+(Time t)
{
	Time k;
	k.h=h+t.h;
	k.m=m+t.m;
	k.s=s+t.s;
	
	if(k.s>59)
	{
		k.m=m+(k.s/60);
		k.s=k.s%60;
	}
	if(k.m>59)
	{
		k.h=h+(k.m/60);
		k.m=k.m%60;
	}
	return(k);
	
}
int main()
{
	int h,m ,s;
	Time add;
	cout<<"Enter the Time1:";
	cin>>h>>m>>s;
	Time t1(h,m,s);
	t1.display();
	cout<<"Enter the Time2";
	cin>>h>>m>>s;
	Time t2(h,m,s);
	t2.display();
	add=t1+t2;
	add.display();
	
}
