#include<iostream>
#include<string>
#include"C:\Users\DELL\Desktop\oop\factory_method\Factory.hpp"
using namespace std;

int main()
{
    string vehicleType;
    cin>>vehicleType;

    Vehicle* newVehicle = Factory::createVehicle(vehicleType);
    newVehicle->createVehicle();
    return 0;


}