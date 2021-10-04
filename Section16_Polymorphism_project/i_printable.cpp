#include "i_printable.h" 

//Needs to be defined as calling member methods on objects to print is confusing and defeats purpose of 
//being able to just cout objects. This takes an object of whatever other class called it and calls the print function
//within I_Printable class to output to the ostream whatever that object contains. Enables us to just use << 
std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os); 
    return os; 
}