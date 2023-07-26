#ifndef Car_H
#define Car_H
#include<string>
#include<iostream>
#include"C:\Users\DELL\Desktop\oop\factory_method\Vehicle.hpp"
using namespace std;

class Car:public Vehicle
{
    public:
    Car();
    void createVehicle();
};

#endif