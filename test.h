#ifndef _TEST_H_
#define _TEST_H_
#include<iostream>
/*
 * Creates test class which is used in main to store user's data entries in a vector
 */
 
class Test {
    int data; 
public:
    //Constructor
    Test(); 
    //Destructor
    Test(int data); 
    //Getter
    int getData() const; 
    //Destructor
    ~Test(); 
}; 

#endif //_TEST_H_