#include<iostream>
using namespace std;
class Student{
	protected:
	 string name;
	 int Roll;
	 public:
	   void getdata()
	  {
        cout<<"\nEnter tne Name of the Student:-";
		getline(cin,name);
		cout<<"\nEnter the Roll:-";
        cin>>Roll;
	  }
	  void putdata()
	  {
		cout<<"\n Name of the student is:-"<<name;
		cout<<"\nRoll :-"<<Roll<<endl;
	  }

};
class Test:public virtual  Student{
	protected:
	 int marks1,marks2;
	 public:
	  void getdata()
	  {
		cout<<"Enter the marks1:\n";
		cin>>marks1;
		cout<<"Enter the marks2\n";
		cin>>marks2;
	  }
	  void putdata(){
		cout<<"Marks1 is:-"<<marks1<<endl;
		cout<<"Marks2 is:-"<<marks2<<endl;
	  }
};
class Sports:public virtual Student{
	protected:
	 int score;
	 public:
	 void getdata()
	 {
		cout<<"Enter the Score:\n";
		cin>>score;
	 }
	  void putdata()
	  {
		cout<<"score is:-"<<score<<endl;
	  }

};
class Result:public Test,public Sports{
     protected:
	 int Total;
	 public:
	 void getdata()
    {
        Student::getdata();
        Test::getdata();
        Sports::getdata();
        Total = marks1 + marks2 + score;
    }
    void putdata()
    {
        Student::putdata();
        Test::putdata();
        Sports::putdata();
        cout << "Total Score : " << Total << endl;
    }
	 
};
int main()
{
	Result k;
	k.getdata();
	k.putdata();
	return(0);
}
