#include "str_h.h" 
#include<iostream> 
#include<cstring> 

//Overloaded ostream operator, enables objects to be output through cout 
//Returns an ostream object and requires & in order to chain objects to be output through 
//the ostream operator. Takes an osteam object and string_obj object as parameters
std::ostream &operator<<(std::ostream &out, const string_obj &rhs) {
    out << rhs.str; 
    return out; 
}

//Essentailly the same as the ostream operator overload except with the extraction operator
//Requires more effort as memory needs to be allocated on the heap in order to store the 
//user's input into a character array. 
std::istream &operator>>(std::istream &in, string_obj &rhs) {
     char *temp = new char [100000]; 
     in >>temp; 
     rhs = string_obj{temp}; 
     delete [] temp; 
     return in; 
}

//No args constructor, creates a string object on the heap and adds a null terminator  
string_obj::string_obj()
    :str(nullptr) {
        str = new char [1]; 
        *str = '\0'; 
}

//Single argument constructor, creates a string object that's nulled and then adds a null terminator
string_obj::string_obj(const char *temp_s) 
    :str(nullptr) {
        if(temp_s == nullptr) {   //str must be empty otherwise it's copied
            str = new char [1]; 
            *str = '\0'; 
        }
        else {
            str = new char [strlen(temp_s) +1];
            std::strcpy(str, temp_s); 
        }
}

//Copy construtor 
string_obj::string_obj(const string_obj &source_str)
    :str {nullptr} {
        str = new char [strlen(source_str.str) + 1]; 
        std::strcpy(str, source_str.str); 
}

//Move constructor 
string_obj:: string_obj(string_obj &&source_str)
    :str {source_str.str} {
        source_str.str = nullptr; 
}

//Destructor
string_obj::~string_obj() {
    delete [] str; 
}

//Overloaded assignment operator, if the object being assigned is the same then it just returns
//the dereferenced object, otherwise it deletes the information within the heap location
//of the lhs str object and creates a new lhs object that is the length of the rhs object
//being assigned with room for null terminator.
string_obj &string_obj::operator=(const string_obj &rhs){
    if(this == &rhs) {
        return *this; 
    }
    else {
        delete [] str; 
        str = new char[strlen(rhs.str) + 1]; 
        strcpy(str,rhs.str); 
        return *this; 
    }
} 

//Same as the function aboe however this is the move assignment instead of copy assignment, therefore 
//all it needs to do is delete the information in the lhs heap location and replace it with the rhs and then
//null the rhs object to prevent a memory leak. 
string_obj &string_obj::operator=(string_obj &&rhs) {
    if (this == &rhs) {
        return *this; 
    }
    else {
        delete [] str; 
        str = rhs.str; 
        rhs.str = nullptr; 
        return *this; 
    }
}

//Tests to see if the two strings are the same
bool operator==(const string_obj &lhs, const string_obj &rhs){
    if(std::strcmp(lhs.str, rhs.str) == 0) 
        return true; 
    else 
        return false; 
}

//Tests to see if the string on the left is greater than the one on the right
bool operator<(const string_obj &lhs, const string_obj &rhs) {
    if(lhs.str < rhs.str) 
        return true; 
    else 
        return false; 
}

//Same as previous function but now it's less than
bool operator>(const string_obj &lhs, const string_obj &rhs) {
    if(lhs.str > rhs.str) 
        return true; 
    else 
        return false; 
}

//Not equal test
bool operator!=(const string_obj &lhs, const string_obj &rhs) {
    if(std::strcmp(lhs.str, rhs.str) != 0) 
        return true; 
    else 
        return false; 
}

//Concatenates two string objects, creates a new pointer on the heap with space to contain both objects and
//a null terminator. Copues the lhs string to the temporary pointer and then concatenates the rhs to it. It 
//then stores the new string in a new obj and deletes the temp pointer. 
string_obj operator+(const string_obj &lhs, const string_obj &rhs) {
    char *temp = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1]; 
    std::strcpy(temp, lhs.str); 
    std::strcat(temp, rhs.str); 
    string_obj concat {temp}; 
    delete [] temp; 
    return concat; 
}

//Makes string object all lowercase, does so by stepping through a temporary pointer and using the tolower
//function to lower every character in the array. 
string_obj operator-(const string_obj &obj) {
    char *temp = new char [std::strlen(obj.str) + 1]; 
    std::strcpy(temp, obj.str); 
    for(size_t i = 0; i < std::strlen(temp); i++) {
        temp[i] = std::tolower(temp[i]);
    }
    string_obj lower {temp};
    delete [] temp; 
    return lower; 
}

//Repeats the string that is being multiplied. Does so by creating a temp object and then running through
//a loop that goes until it is less than or equal to the rhs int. Returns combined temp variable
 string_obj operator*(const string_obj &lhs, int rhs) {
    string_obj temp;
    for(int i = 1; i<=rhs; i++) {
        temp = temp + lhs.str; 
    }
    return temp; 
 } 
 /*char *temp = new char[std::strlen(str) * rhs + 1]; 
     std::strcpy(temp,""); 
     for(size_t i = 0; i < rhs; i++){
         std::strcat(temp, str);
     }
     string_obj multiplied {temp}; 
     delete [] temp;
     return multiplied */
 
 //Pre-increment overloaded function, runs through length of the string and uses toupper function 
 //to make entire string object uppercase
  string_obj &operator++(string_obj &obj) {
      for(size_t i = 0; i < std::strlen(obj.str); i++) {
          obj.str[i] = std::toupper(obj.str[i]);
      }
      return obj; 
}

//Post-increment, does same thing as previous pre-increment however it calls upon the preincrement so
//that it can make all the characters uppercase. Assigns dereferenced lhs object to temp object which is
//used. 
string_obj operator++(string_obj &obj, int){
    string_obj temp {obj.str}; 
    ++obj; 
    return temp; 
}

