#include <iostream>
#include "car.h"
#include "warehouse.h"
using namespace std;

int main()
{
    //Initialization
    Warehouse Wh(10);
    Car car(10,6,60);



    //actions
    Wh.parking(123);    //Enter Index
    Wh.leaving(123);    //Enter Index



    std::cout << "\nNumber of Cars in the Warehouse: " << Wh.numbCars() << std::endl;
    std::cout << "\nWarehouse's capacity: " << Wh.Capacity() << std::endl;

    return 0;
}
