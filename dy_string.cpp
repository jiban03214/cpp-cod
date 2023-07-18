#include<iostream>
#include<cstring>
using namespace std;
class String
{
    char*name;
    int length;
public:
    String()
    {
        length=0;
        name=new char[length+1];
    }
    String(char*s,int l)
    {
        length=l;
        name=new char[length+1];
        strcpy(name,s);
    }

    void putdata()
    {
        cout<<"The name is:-"<<name<<" "<<endl;
    }
    String operator+=(String);
    bool operator==(String);
};
 String String::operator+=(String s1)
 {
     length=length+s1.length;
     strcat(name,s1.name);
     return *this;

 }
  bool String::operator==(String s1)
 {
     bool cmp;
     strcmp(name,s1.name);
     return cmp;
 }

int main()
{
  char*name1;
  int l;
  bool m;
  cout<<"Enter the length:"<<endl;
  cin>>l;
  name1=new char[l+1];
  cout<<"Enter First name:-";
  cin>>name1;
  String s1(name1,l);
  s1.putdata();
  cout<<"Enter the length:"<<endl;
  cin>>l;
  name1=new char[l+1];
  cout<<"Enter last name:-";
  cin>>name1;
  String s2(name1,l);
   s2.putdata();
   m=s1==s2;
   if(m==0)
   {
       cout<<"Two string are same"<<endl;
   }
   else
   {
       cout<<"Two string are Different"<<endl;
   }
   String s3;
   s3=s1+=s2;
   s3.putdata();

    return 0;
}
