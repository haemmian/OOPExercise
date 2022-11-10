#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include "car.h"


#include <iostream>



class Warehouse
{
private:
    int capacity, index, cnt_Car = 0, Car_Number; //index refers to parking slot

    int value_car, capacity_car, power_car, number_car[10];

public:
    Warehouse(int cp)
    {
        capacity = cp;

        //std::cout<<  "Warehouse\nCapacity: " << capacity << std::endl;
    }
    void parking(Car car);
    void leaving(int index_out);
    int numbCars();
    int Capacity();
    int sort_number();
    void return_Cars();

};


#endif // WAREHOUSE_H
