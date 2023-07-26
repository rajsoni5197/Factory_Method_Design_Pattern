#include"C:\Users\DELL\Desktop\oop\factory_method\Factory.hpp"

Factory::Factory(){}
Vehicle* Factory::createVehicle(string str)
{
    if(str == "car")
    {
        return new Car;
    }
    else if(str == "bike")
    {
        return new Bike;
    }
    else return nullptr;
}