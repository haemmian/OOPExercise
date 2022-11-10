#ifndef CAR_H
#define CAR_H
#include <iostream>

class Car{

private:
    int value, capacity, power, number;
    std::string colour;
public:
    //Contructor-Function
    Car(int value, int capacity,int power, int number, std::string color)
    {
        this->value               = value;
        this->capacity            = capacity;
        this->power               = power;
        this->number              = number;
        this->colour              = color;

        //std::cout << "Car informations:\nValue: $" << value << "\nCapacity: " << capacity << "\nPower: " << power << "\nNumber: " << number <<
        //             "\nColour: " << clr << std::endl;
    }

    int GetNumber();
};

class Race_car:public Car
{

private:
    int top_speed;
public:
    Race_car(int value, int capacity,int power, int number, std::string color, int top_speed): Car(value, capacity, power, number, color)
    {

        this->top_speed = top_speed;

        //std::cout << "Top speed: " << top_speed << "km/h" << std::endl;
    }
};
#endif // CAR_H
