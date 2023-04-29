#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class single
{
    string s;
    public:
    void getdat(void)
    {
    cout<<"Enter the string::\n";
    getline(cin,s);
    cout<<"The string is::\n"<<s<<endl;
    }
    void blank(void)
    {
            int i=0; 
            while(s[i]!='\0')
            {
                if(s[i]!=' ')
                {
                    cout<<s[i];
                    i++;
                }
                else
                {
                    cout<<" ";
                    while(s[i]==' ')
                    {
                        i++;
                    }
                }
            }
    }

};
int main()
{   
    // sort(s.begin(),s.end());
    // cout<<s<<endl;
    // cout<<s.length()<<endl;
   single n;
   n.getdat();
   n.blank();
    return(0);
}