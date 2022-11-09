#ifndef CAR_H
#define CAR_H
#include <iostream>

class Car{

private:
int value, capacity, power, number;
std::string colour;
public:
//Contructor-Function
    Car(int vl, int cp,int pw, int numb, std::string clr){
        value       = vl;
        capacity    = cp;
        power       = pw;
        number      = numb;
        colour      = clr;

        /*std::cout << "Car informations:\nValue: " << value << "\nCapacity: " << capacity << "\nPower: " << power << "\nnumber: " << number <<
                     "\ncolour: " << clr << std::endl;*/
    }
};


#endif // CAR_H

