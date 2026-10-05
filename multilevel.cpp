//Program to implement Multilevel Inheritance

#include<iostream>
using namespace std;

class Vehicle
{
public:
void showVehicle()
{
cout<<"This is a Vehicle"<<endl;
}
};

class Car : public Vehicle
{
public:
void showCar()
{
cout<<"This Vehicle is a Car\n"<<endl;
}
};

class SportsCar : public Car
{
public:
void showSportsCar()
{
cout<<"This Car is a Sports Car\n"<<endl;
}
};

int main()
{
SportsCar obj;

obj.showVehicle();
obj.showCar();
obj.showSportsCar();

return 0;
}



