//init
#ifndef OOP_H
#include <iostream>
#define OOP_H
using namespace std;


class Warehouse{
    private:
        int capacity, cntCars;
    public:
        void parking();
        void leaving(int index);
        void amountCars(int Cars);
        void Warehouse_capacity(int x);
};

class car{
    private:
        int capacity    = 10;
        int top_Speed   = 40;
        int value       = 13;
    public:
};
#endif // OOP_H
