//Program to implement Hybrid Inheritance

#include<iostream>
using namespace std;

class Person {
public:
Person() {
cout<<"Person's Constructor called"<<endl;
}
};

class Faculty: public Person {
public:
Faculty() {
cout<<"Faculty's Constructor called"<<endl;
}
};

class Student: public Person {
public:
Student() {
cout<<"Student's Constructor called"<<endl;
}
};

class TA: public Faculty, public Student {
public:
TA() {
cout<<"TA's Constructor called"<<endl;
}
};

int main()
{
TA obj;
return 0;
}



