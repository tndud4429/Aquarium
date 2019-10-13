//  1560308
//  Soo Young Shin
//  butterflyfish.h
//  Project2


#ifndef BUTTERFLYFISH_H
#define BUTTERFLYFISH_H

#include "fish.h"
#include <string>

class Butterflyfish :public Fish {
public:
    Butterflyfish(int capacity, std::string name);
    Butterflyfish(const Butterflyfish &other);
    Butterflyfish &operator=(const Butterflyfish &other); // Assignment Operator
    virtual ~Butterflyfish(); // Destructor
    // Overridden Functions
    virtual void remember(char c);
    virtual void printMemory() const;
private:
    // TODO: declare any private member variables/functions here
    int b_capacity;
    char *b_extendedMemory;
    int *b_countMemory;
    int getExtendedAmount() const;
};

#endif /*BUTTERFLYFISH_H*/


