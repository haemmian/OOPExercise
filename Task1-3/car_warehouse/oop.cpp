#include <iostream>
#include <oop.h>


//**WAREHOUSE-FUNCTIONS**

/**
 * @brief parks a car in the warehouse
 * @param car to park
 */
// your method

    void Warehouse::parking(){

          cout<< "Car entered the building\n";
    }
/**
 * @brief gets the parked car at index
 * @param index of the parked car
 * @return the car at specified index
 */
// your method
    void Warehouse::leaving(int Index){
        if(Index == 123){
          cout<<"You are able to use the car!\n";
        }
        else{
            cout<<"Wrong Index!\n";
        }
      }
/**
 * @brief gets the number of cars in the warehouse
 * @param number of cars in the warehouse
 */
// your method

    void Warehouse::amountCars(int Cars){
        cntCars = Cars;
    }


/**
 * @brief gets the warehouse's capacity
 * @param warehouse's capacity
 */
// your method
    void Warehouse::Warehouse_capacity(int x){
        capacity = x;
        cout<<"\nCapacity of Warehouse: " << capacity <<endl;
    }

////////////////////////////////////////////////////////////////////////

//**CAR-FUNCTIONS**
