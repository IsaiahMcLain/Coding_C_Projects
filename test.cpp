#include "test.h" 

/*
Contains member functions of test class used in program
*/

Test::Test() 
    :data{0} {
        std::cout << "\tTest default called" << std::endl; 
}

Test::Test(int data) 
    :data{data} {
        std::cout << "\tTest Constructor Called: [" << data << "]" << std::endl;  
}

int Test::getData() const {
    return data; 
}

Test::~Test() {
    std::cout << "\tTest Destructor Called: [" << data << "]" << std::endl; 
}