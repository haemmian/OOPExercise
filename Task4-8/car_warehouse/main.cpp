#include <iostream>
#include "car.h"
#include "warehouse.h"

using namespace std;

int main()
{

    //Initialization
    Warehouse warehouse(10);
    //Race_car race_car(10,6,60, 6, "blue", 200);   //Enter:    (Value , Capacity , power, number , colour, top speed)
    Car car(10,  6, 60, 123, "blue");                 //Enter:    (Value , Capacity , power, number , colour)
    Car car3(10, 6, 60, 444, "blue");
    Car car2(10, 6, 60, 337, "blue");
    Car car1(10, 6, 60, 244, "blue");



    //actions

    warehouse.parking(car);
    warehouse.parking(car1);
    warehouse.parking(car2);
    warehouse.parking(car3);

    //warehouse.leaving(20);    //Enter Index / Parkingslot-Number

    std::cout << "\nNumber of Cars in the Warehouse: " << warehouse.numbCars() << std::endl;
    //std::cout << "\nWarehouse's capacity: " << warehouse.Capacity() << std::endl;


    warehouse.return_Cars();







    return 0;
}
