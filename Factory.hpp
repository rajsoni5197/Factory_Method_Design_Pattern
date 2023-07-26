#ifndef Factory_H
#define Factory_H

#include<iostream>
#include<string>
#include"C:\Users\DELL\Desktop\oop\factory_method\Bike.hpp"
#include"C:\Users\DELL\Desktop\oop\factory_method\Car.hpp"
using namespace std;

class Factory
{
    private:
        Factory();
    public:
        static Vehicle* createVehicle(string str);
};

#endif