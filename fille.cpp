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
	if(my_file.fail()!=0)
	{
	cout<<"File not created";
	}
	else
	{
		cout<<"Enter the Data\n";
		ch=cin.get();
		while(ch)
		{
			my_file<<ch;
			ch=cin.get();
			if(ch=='\n')
                break;
		}
		my_file.close();
		cout<<"File create successfully";

	}
}
void File::display_file(string fn)
{
	ifstream my_file;
	my_file.open(fn);
	if(my_file.fail()!=0)
	{
		cout<<"No file found"<<endl;
	}
	else
	{
        cout<<endl;
		while(my_file.eof()==0)
		{
			my_file.get(ch);
			cout<<ch;
		}

	}
	my_file.close();
}
int main()
{
	string f_name;
	File fl;
	cout<<"Enter the filename:";
	cin>>f_name;
	fl.create_file(f_name);
	fl.display_file(f_name);

}
