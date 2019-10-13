//  1560308
//  Soo Young Shin
//  yellowtail.h
//  Project2


#ifndef YELLOWTAIL_H
#define YELLOWTAIL_H

#include "fish.h"
#include <string>

class Yellowtang :public Fish {
public:
    Yellowtang(int capacity, std::string name); // Constructor
    Yellowtang(const Yellowtang &other); // Copy Constructor
    Yellowtang &operator=(const Yellowtang &other); // Assignment Operator
    // Overridden functions
    virtual void remember(char c);
    virtual void printMemory() const;
    virtual void forget();
private:
    // TODO: declare any private member variables/functions here
    int y_bubble;
    const char* memory;
};

#endif /* YELLOWTAIL_H */

