#include<iostream>
#include<string>
using namespace std;

class String
{
	string a;
	public:
		String(){}
	    String(string s)
	    {
	    	a=s;
	    }
	    void display();
	    String operator+=(String);
};
void String::display()
{
	cout<<"\nThe string is:\n"<<a<<endl;
	
}
String String::operator+=(String k)
{
	String tem;
	tem.a=a+" "+k.a;
	return(tem);
}
int main()
{
    string l,a;
    cout<<"Ente the first string:\n";
	getline(cin,l);
    String T1(l);
    T1.display();
    cout<<"Ente the first string:\n";
	getline(cin,l);
	String T2(l);
	T2.display();
	String add;
	add=T1+=T2;
	T1.display();
	add.display();
	return(0);
}
