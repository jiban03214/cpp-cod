#include<iostream>
#include<fstream>
using namespace std;
class File{
	char ch;
	public:
	     void create_file(string fn);
	     void display_file(string fn);
	     string update_file(string fn);

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
		cin.get();
		while((ch=cin.get())!='\n')
		{
			my_file<<ch;
		}
		my_file.close();
		cout<<":*:File create successfully:*:";

	}
}
string File::update_file(string fn)
{
    string nf;
    cout<<"\nEnter the Name of the New File\n";
    cin>>nf;
    ofstream my_file;
    my_file.open(nf);
    ifstream my_file1;
    my_file1.open(fn);
    if(my_file.fail()!=0||my_file.fail()!=0)
    {
        cout<<"Error\n";
        return fn;

    }
    else
    {
        my_file1.get(ch);
        while(my_file1)
        {
            if(ch==' ')
            {

                my_file<<ch;
                while(ch==' ')
                {
                    my_file1.get(ch);
                }
                my_file<<char(toupper(ch));
                my_file1.get(ch);
            }
            else{
                my_file<<ch;
                my_file1.get(ch);
            }
        }
    }
    cout<<":*:New File create successfully:*:\n";
    my_file1.close();
    my_file.close();
    return nf;

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
        my_file.get(ch);
		while(my_file.eof()==0)
		{
			cout<<ch;
			my_file.get(ch);
		}

	}
	my_file.close();
}
int main()
{
	string f_name;
	File fl;
	cout<<"Enter the filename:\n";
	cin>>f_name;
	fl.create_file(f_name);
	fl.display_file(f_name);
	f_name=fl.update_file(f_name);
	fl.display_file(f_name);
	return 0;
}
