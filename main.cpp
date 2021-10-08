#include<vector>
#include<memory>
#include "test.h" 
/*
 Program is meant to experiment and get practice with smart pointers, this program creates a unique pointer
which points to a vector of shared pointers that contain test objects. The program then takes user's data input 
 and creates a list of Test objects which contain user's numbers and outputs it to screen using the heap without
ever using new or delete. 
 */

//Prototypes
//std::unique_ptr<std::vector<std::shared_ptr<Test>>> make(); old style 
auto make(); 
void fill(std::vector<std::shared_ptr<Test>> &list, int num);
void display(const std::vector<std::shared_ptr<Test>> &list); 

//Function creates the unique pointer which points to the vector of shared_pointer test objects, must
//have () at end to call the constructor for the vector, did have giant return type but auto takes care 
//of this for us and makes the code much neater, look at prototypes to see old style
//NOTE: due to auto being used, although prototype exists, function must exist above any other function
//otherwise the compiler won't know what type auto is supposed to be
auto make() {
     return  std::make_unique<std::vector<std::shared_ptr<Test>>>(); 
}

//Runs main program
int main()
{
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> list; //Doesn't point anywhere yet
    list = make(); //Makes unique_ptr point to vector
    
    std::cout << "How many numbers do you want to enter into your list?" << std::endl; 
    int num{}; 
    std::cin >> num; 
    
    fill(*list, num); 
    display(*list); 
    
    return 0; 
}

//Fills the vector of Test objects with user's desired numbers
void fill(std::vector<std::shared_ptr<Test>> &list, int num) {
    int userInput{}; 
    //Takes users number and adds it to vector after initilizing object
    for(int i = 1; i <= num; i++) {
        std::cout << "Please enter number: " << i << std::endl; 
        std::cin >> userInput;
        
        //Good but not as efficent
        // std::shared_ptr<Test> ptr = std::make_shared<Test>(userInput); //Creates shared_ptr obj. initilizes to user input
       //list.push_back(ptr); //adds to vector
       
       //More efficent by using move semantics 
       list.push_back(std::make_shared<Test> (userInput)); 
    }
}

//
void display(const std::vector<std::shared_ptr<Test>> &list) {
    std::cout << std::endl; 
    std::cout << "------------------------------------------------------------" << std::endl; 
    std::cout << "User's list of numbers: " << std:: endl; 
    
    //For loop that dereferences vector and outputs to screen 
    for(const auto &i: list) {
        std::cout << "User number: " << i->getData() << std::endl; //Calls getData member method 
    }
}