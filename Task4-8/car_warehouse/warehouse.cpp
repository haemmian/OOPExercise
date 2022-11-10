#include "warehouse.h"
#include "bits/stdc++.h"

/**
 * @brief parks a car in the warehouse
 * @param car to park
 */
// your method
void Warehouse::parking(Car car)
{
    index = cnt_Car;

    Car_Number          = car.GetNumber();
    number_car[cnt_Car] = car.GetNumber();

    cnt_Car++;


    //std::cout << "\ncar N." << Car_Number << " is parked!" << std::endl;
}


/**
 * @brief gets the parked car at index
 * @param index of the parked car
 * @return the car at specified index
 */
// your method

void Warehouse::leaving(int Index_OUT)
{

    if(cnt_Car>=1)
    {                                     //in case there are no cars in the building
        std::cout<<"\nYou are able to use the car at parking slot N." << Index_OUT << "!\n";

        cnt_Car--;
    }
}

/**
 * @brief gets the number of cars in the warehouse
 * @return number of cars in the warehouse
 */
// your method
int Warehouse::numbCars()
{
    return cnt_Car;
}

/**
 * @brief gets the warehouse's capacity
 * @return warehouse's capacity
 */
// your method

int Warehouse::Capacity()
{
    return capacity;
}

int Warehouse::sort_number()
{
    int n = sizeof(number_car) / sizeof(number_car[0]);

    std::sort(number_car, number_car + n);                  //Sort function

    return n;

}
void Warehouse::return_Cars()
{
    int n = sort_number();

    std::cout << "\ncarnumber in the warehouse: ";

    for (int i = 0; i < n; ++i)
        if(number_car[i] >=1)
        {
            std::cout << number_car[i] << " ";
        }
}
