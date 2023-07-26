#ifndef Bike_H
#define Bike_H

#include<iostream>
#include"C:\Users\DELL\Desktop\oop\factory_method\Vehicle.hpp"
using namespace std;

class Bike:public Vehicle
{
    public:
    Bike();
    void createVehicle();
};

#endif