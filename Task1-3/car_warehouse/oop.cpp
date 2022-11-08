#include <iostream>
#include <oop.h>


<<<<<<< HEAD:Task1-3/car_warehouse/oop.cpp
//**WAREHOUSE-FUNCTIONS**

=======
class car{
    private:
        int capacity    = 10;
        int top_Speed   = 40;
        int value       = 13;
    public:
};

class Warehouse{
    private:
        int capacity, cntCars;
    public:
    
>>>>>>> fc5937db905af3116750faa24f7ae9e85898a766:car_warehouse/main.cpp
/**
 * @brief parks a car in the warehouse
 * @param car to park
 */
// your method
<<<<<<< HEAD:Task1-3/car_warehouse/oop.cpp

    void Warehouse::parking(){

          cout<< "Car entered the building\n";
    }
=======
    void parking(){

          cout<< "Car entered the building\n";
    };
    
>>>>>>> fc5937db905af3116750faa24f7ae9e85898a766:car_warehouse/main.cpp
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
<<<<<<< HEAD:Task1-3/car_warehouse/oop.cpp

    void Warehouse::amountCars(int Cars){
        cntCars = Cars;
    }


=======
        void amountCars(int Cars){
            cntCars = Cars;
        }
    
>>>>>>> fc5937db905af3116750faa24f7ae9e85898a766:car_warehouse/main.cpp
/**
 * @brief gets the warehouse's capacity
 * @param warehouse's capacity
 */
// your method
    void Warehouse::Warehouse_capacity(int x){
        capacity = x;
        cout<<"\nCapacity of Warehouse: " << capacity <<endl;
    }
<<<<<<< HEAD:Task1-3/car_warehouse/oop.cpp

////////////////////////////////////////////////////////////////////////

//**CAR-FUNCTIONS**
=======
};

int main(){

    Warehouse Wh;

    //Amount of cars in the Warehouse
    Wh.amountCars(9);

    //capacity warehouse
    Wh.Warehouse_capacity(10);

    //entering or leaving Warehouse

    //t.parking();
    Wh.leaving(123);



    return 0;
}
>>>>>>> fc5937db905af3116750faa24f7ae9e85898a766:car_warehouse/main.cpp
