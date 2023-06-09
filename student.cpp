#include <iostream>
#include <cstring>
using namespace std;
class student
{
protected:
    int roll;
    string name;

public:
    void getdata()
    {
        cout << "Enter the name \t";
        getline(cin, name);
        cout << "Enter the roll \t";
        cin >> roll;
    }
    void putdata()
    {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
    }
};
class test : virtual public student
{
protected:
    int marks1, marks2;

public:
    void getdata()
    {
        cout << "Enter the marks of 1st subject \t";
        cin >> marks1;
        cout << "Enter the marks of 2nd subject \t";
        cin >> marks2;
    }
    void putdata()
    {
        cout << "Marks of 1st subject : " << marks1 << endl;
        cout << "Marks of 1st subject : " << marks1 << endl;
    }
};
class sports : virtual public student
{
protected:
    int score;

public:
    void getdata()
    {
        cout << "Enter the score \t";
        cin >> score;
    }
    void putdata()
    {
        cout << "Sports Score : " << score << endl;
    }
};
class result : public test, public sports
{
protected:
    int total;

public:
    void getdata()
    {
        student::getdata();
        test::getdata();
        sports::getdata();
        total = marks1 + marks2 + score;
    }
    void putdata()
    {
        student::putdata();
        test::putdata();
        sports::putdata();
        cout << "Total Score : " << total << endl;
    }
};
int main()
{
    result r;
    r.getdata();
    r.putdata();
    return 0;
}