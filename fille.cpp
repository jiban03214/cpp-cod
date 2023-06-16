#include<iostream>
#include<fstream>
using namespace std;
class File{
	char ch;
	public:
	     void create_file(string fn);
	     void display_file(string fn);
	     void update_file(string fn,string fn2){}
};
void File::create_file(string fn)
{
	ofstream my_file;
	my_file.open(fn);
	string k;
	if(my_file.fail()!=0)
	{
	cout<<"File not created";
	}
	else
	{
		cout<<"Enter the Data";
		ch=cin.get();
		while(ch!='\n')
		{
			my_file<<ch;
		}
		my_file.close();
		cout<<"File create saccessfully";
		
	}
}
void File::display_file(string fn)
{
	ifstream my_file;
	my_file.open(fn);
	string x;
	if(my_file.fail()!=0)
	{
		cout<<"No file found";
	}
	else
	{
		while(1)
		{
			my_file >> ch;
			if (my_file.eof())
				break;

			cout << ch;
		}

	}
	my_file.close();
}
int main()
{
	string f_name;
	File fl;
	cout<<"Ente the filename:";
	cin>>f_name;
	fl.create_file(f_name);
	fl.display_file(f_name);
	return(0);
}
