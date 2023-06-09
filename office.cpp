#include<iostream>
using namespace std;
 class Office 
 {
 	protected:
 	 int basic,hra,a=0;
 	public:
 	     void getdata();
 	     void putdata();
 	 
 	 
 };
 void Office::getdata()
 {
 	bool k;
 	cout<<"\nEnter the basic of employee:\n ";
 	cin>>basic;
 	cout<<"\nEnter the HRA of employee:\n";
 	cin>>hra;
 	cout<<"if the employye is manager then ente'1' :\n";
 	cin>>k;
 	if(k==true)
 	{
 		cout<<"\nEnter  aditional allowence:\n";
 		cin>>a;
 	}
 	
 }
 void Office::putdata()
 {
 	cout<<"\nThe basic of the employee is:\n ";
 	cout<<basic;
 	cout<<"\nThe HRA of the employee is:\n ";
 	cout<<hra;
 	cout<<"\nThe additional allowence of the employee is:\n ";
 	cout<<a;
 }
 class kolkata:public Office
 {
 	public:
 	  float k;
 	  void getdatak()
 	  {
 	  cout<<"\nEnter the city allowence:\n";
 	  cin>>k;
 	  }
 	  void putdatak()
 	  {
 	  	cout<<"\nThe city allowence is:\n"<<k;
 	  	cout<<"\nTotal Salary of the employe:\n"<<basic+hra+a+k<<endl;
 	  	
 	  }
 };
 class delhi:public Office
 {
 	public:
 	  float d;
 	  void getdata_d()
 	  {
 	  cout<<"\nEnter the city allowence:\n";
 	  cin>>d;
 	  }
 	  void putdata_d()
 	  {
 	  	cout<<"\nThe city allowence is:\n"<<d;
 	  	cout<<"\nTotal Salary of the employe:\n"<<basic+hra+a+d<<endl;
 	  	
 	  }
 };
 class dargeeling:public Office
 {
 	public:
 	  float l;
 	  void getdata_l()
 	  {
 	  cout<<"\nEnter the city allowence:\n";
 	  cin>>l;
 	  }
 	  void putdata_l()
 	  {
 	  	cout<<"\nThe city allowence is:\n"<<l;
 	  	cout<<"\nTotal Salary of the employe:\n"<<basic+hra+a+l<<endl;
 	  	
 	  }
 };
 int main()
 {
 	kolkata a;
 	delhi m;
 	dargeeling n;
 	cout<<"Enter the emplloye information who work in kolkata:\n";
 	a.getdata();
 	a.getdatak();
 	cout<<"Enter the emplloye information who work in delhi:\n";
 	m.getdata();
 	m.getdata_d();
 	cout<<"Enter the emplloye information who work in dargeeling:\n";
 	n.getdata();
 	n.getdata_l();
 	cout<<" Emplloye information who work in kolkata:\n";
 	a.putdata();
 	a.putdatak();
 	cout<<"Emplloye information who work in dlehi:\n";
 	m.putdata();
 	m.putdata_d();
 	cout<<"Emplloye information who work in dargeeling:\n";
 	n.putdata();
 	n.putdata_l();
 	return 0;
 }
 	

