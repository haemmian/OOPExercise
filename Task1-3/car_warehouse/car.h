#ifndef CAR_H
#define CAR_H
#include <iostream>

class Car{

private:
int value, capacity, top_speed;
public:
//Contructor-Function
    Car(int vl, int cp,int tps){
        value = vl;
        capacity = cp;
        top_speed = tps;

        //std::cout << "Car\nValue: " << value << "\nCapacity: " << capacity << "\nTopSpeed: " << top_speed << std::endl;
    }
};


#endif // CAR_H
