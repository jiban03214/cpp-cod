#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class File{
	string con,cap;
	public:
	     void create_file(string fn,string fn2);
	     void display(string fn,string fn2);

};
void File::create_file(string fn,string fn2)
{
	ofstream count,capt;
	count.open(fn);
	capt.open(fn2);
	if(count.fail()!=0||capt.fail()!=0)
	{
	cout<<"File not created";
	}
	else
	{ 
		int n,temp;
		cout<<"Enter the number of the country you want to enter:\n";
		cin>>n;
		cin.get();
		temp=n;
		while(temp)
		{
		    cout<<"Enter the Country Name:\n";
		 	getline(cin,con);
		 	count<<con;
		 	count<<endl;
		 	temp--;
		}
		temp=n;
		while(temp)
		{
			cout<<"Enter the Capital Name:\n";
		 	getline(cin,cap);
		 	capt<<cap;
		 	capt<<endl;
		 	temp--;
		}
		count.close();
		capt.close();
		cout<<"::File create successfully::";

	}
}
void File::display(string fn,string fn2)
{
	ifstream count,capt;
	count.open(fn);
	capt.open(fn2);
	if(count.fail()!=0||capt.fail()!=0)
	{
	cout<<"File not created";
	}
	else
	{
		getline(count,con);
		getline(capt,cap);
		while(capt && count)
		{
			cout<<"\n The Capital "<<con<<" is "<<cap;
			getline(count,con);
			getline(capt,cap);
		}
		if(con.length()==0||cap.length()==0)
		{
			cout<<"\n Find some Error";
		}
		cout<<"\n";
		count.close();
		capt.close();
	}
}
int main()
{
	string f_name,f_name2;
	File fl;
	fl.create_file("country.txt","capital.txt");
	fl.display("country.txt","capital.txt");
	return 0;
}
