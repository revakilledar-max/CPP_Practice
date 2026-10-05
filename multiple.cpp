//Program to implement Multiple Inheritance

#include<iostream>
using namespace std;

class Vehicle {
public:
Vehicle() { cout<<"This is a Vehicle\n"; }
};

class ThreeWheeler{
public:
ThreeWheeler() { cout<<"This is a 3 Wheeler\n"; }
};

class Auto: public Vehicle, public ThreeWheeler  {
public:
Auto() { cout<<"This 3 Wheeler Vehicle is an Auto\n"; }
};

int main()
{
Auto obj;

return 0;
}
