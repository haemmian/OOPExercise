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

    return 0;
}
