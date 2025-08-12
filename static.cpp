#include <iostream>

class Customer {
public:
    static int objectCount; // Declaration

    Customer() {
        objectCount++;
    }

    ~Customer() {
        objectCount--;
    }

    static int getObjectCount() {
        return objectCount;
    }
};

int Customer::objectCount = 0; // Definition and initialization

int main() {
    Customer c1;
    Customer c2;
    std::cout << "Number of customers: " << Customer::getObjectCount() << std::endl;

    {
        Customer c3;
        std::cout << "Number of customers: " << Customer::getObjectCount() << std::endl;
    } // c3 is destroyed here

    std::cout << "Number of customers: " << Customer::getObjectCount() << std::endl;
    return 0;
}