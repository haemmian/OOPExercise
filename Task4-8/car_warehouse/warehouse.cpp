#include "warehouse.h"

/**
 * @brief parks a car in the warehouse
 * @param car to park
 */
// your method
void Warehouse::parking(int idxIN){
    index = idxIN;
    cnt_Car++;
    std::cout << "\ncar is parked!" << std::endl;
}
/**
 * @brief gets the parked car at index
 * @param index of the parked car
 * @return the car at specified index
 */
// your method

void Warehouse::leaving(int idxOUT){

    if(cnt_Car>=1){                                     //in case there are no cars in the building
        if(idxOUT == 123){
          std::cout<<"\nYou are able to use the car!\n";
        }
        else{
            std::cout<<"Wrong Index!\n";
            }
    }
    cnt_Car--;
}

/**
 * @brief gets the number of cars in the warehouse
 * @return number of cars in the warehouse
 */
// your method
int Warehouse::numbCars(){
   return cnt_Car;
}

/**
 * @brief gets the warehouse's capacity
 * @return warehouse's capacity
 */
// your method

int Warehouse::Capacity(){
    return capacity;
}







