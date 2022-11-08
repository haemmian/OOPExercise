#include <iostream>
#include <oop.h>


class Warehouse{
    private:
        int capacity, cntCars;
    public:
        /**
         * @brief parks a car in the warehouse
         * @param car to park
         */
        // your method

        void parking(){

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
};

//**WAREHOUSE-FUNCTIONS**








////////////////////////////////////////////////////////////////////////

//**CAR-FUNCTIONS**
