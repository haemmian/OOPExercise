#include "warehouse.h"

/**
 * @brief parks a car in the warehouse
 * @param car to park
 */
// your method
void Warehouse::parking(int idxIN)
{
    index = idxIN;
    std::cout << "\ncar is parked!" << std::endl;
}
/**
 * @brief gets the parked car at index
 * @param index of the parked car
 * @return the car at specified index
 */
// your method
void Warehouse::leaving(int idxOUT){
    if(idxOUT == 123){
      std::cout<<"You are able to use the car!\n";
    }
    else{
        std::cout<<"Wrong Index!\n";
        }
}
