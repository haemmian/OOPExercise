#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include <iostream>

class Warehouse{
private:
    int capacity, index;
public:
    Warehouse(int cp){
        capacity = cp;

        //std::cout<<  "Warehouse\nCapacity: " << capacity << std::endl;
    }
    void parking(int idxIN);
    void leaving(int idxOUT);
};


#endif // WAREHOUSE_H
