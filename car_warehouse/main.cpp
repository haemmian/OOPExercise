#include <QCoreApplication>
#include <iostream>
using namespace std;


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
    
/**
 * @brief parks a car in the warehouse
 * @param car to park
 */
// your method
    void parking(){

          cout<< "Car entered the building\n";
    };
    
/**
 * @brief gets the parked car at index
 * @param index of the parked car
 * @return the car at specified index
 */
// your method
    void leaving(int Index){
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
        void amountCars(int Cars){
            cntCars = Cars;
        }
    
/**
 * @brief gets the warehouse's capacity
 * @param warehouse's capacity
 */
// your method
    void Warehouse_capacity(int x){
        capacity = x;
        cout<<"\nCapacity of Warehouse: " << capacity <<endl;
    }
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
