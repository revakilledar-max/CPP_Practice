#include<iostream>
using namespace std;
cl                                                                                                                                                                                                                                                                                                                                                                           ass student{
private: int roll_no;
         string name;
         float marks;
public:void input()
{ 
cout<<"Enter the roll_no:\n";
cin>>roll_no;
cout<<"Enter the name:\n";
cin>>name;
cout<<"Enter the marks:\n";
cin>>marks;
}
void display()
{
cout<<"\nRoll no of students"<<roll_no;
cout<<"\nName of student"<<name;
cout<<"\nMarks of student"<<marks;
}
};
int main()
{
student S;
S.input();
S.display();
return 0;
}

