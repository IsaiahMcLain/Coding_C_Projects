/* -----------------------------------------------------------------------------
FILE:    Section9Challenge.cpp
DESCRIPTION:  Program that lets a user create a vector of numbers and then let's the user
 do calculations with the vector they made. 
COMPILER: MinGW  C++ compiler
NOTES: N/A
 -----------------------------------------------------------------------------*/
#include<iostream> 
#include<vector> 

using namespace std; 

/* -----------------------------------------------------------------------------
FUNCTION: main()
DESCRIPTION:  Main function that does all the calculations and shows the user output. 
RETURNS:   0
NOTES:  Lets the user do calculations to their vector such as what is the largest or smallest integer in their
 vector as well as what is the mean of their vector. Can also display what is in the vector to user. 
------------------------------------------------------------------------------- */
int main()
{
    bool Quit_Program = false; 
    char Users_choice{}; 
    vector<int> List {}; //Vector that holds user's numbers
    int add_number{}; //Lets user add number to vector
    double mean{}; //Stores mean for vector
    
   
    //Displays menu to user with do while loop 
   do {
        cout << endl;  
        cout << "Welcome to the integer testing program." << endl; 
        cout << "We test many numbers that you enter." << endl; 
        cout << "Please choose from the menu below." << endl; 
        cout << "---------------------------------------------------------------" << endl; 
        cout << "P : Print Numbers" << endl; 
        cout << "A : Add Numbers" << endl; 
        cout << "M : Display Mean of Numbers" << endl; 
        cout << "S : Display the Smallest Number" << endl; 
        cout << "L : Display the Largest Number" << endl; 
        cout << "Q : Quit the Program" << endl; 
        cout << "---------------------------------------------------------------" << endl;
        cout << "Please enter your choice : "; 
        //input taken 
        cin >> Users_choice; 
        cout << endl; 
        
        switch(Users_choice) {
            case 'p' : 
            case 'P' : 
                if(List.size() == 0){ 
                    cout << "[] - The list is empty..." << endl;
                } 
                else {
                    cout << " [ ";
                    for(size_t i  : List) 
                        cout << i << " "; 
                    cout << "] " << endl; 
                }
                break; 
            case 'a' :
            case 'A' : 
                cout << "Add a number to your list" << endl; 
                cin >> add_number;
                List.push_back(add_number); 
                cout << add_number << " was added to your list." << endl; 
                break; 
            case 'm' :
            case 'M' :
                if(List.size() == 0) {
                    cout << "There is nothing in this List to calculate" << endl; 
                }
                else {
                    for(size_t i : List) 
                        mean += i; 
                    mean = mean / List.size(); 
                    cout << "The mean of your list is : " << mean << endl; 
                }
                break; 
            case 's' :
            case 'S' :
                if(List.size() == 0) {
                    cout << "There is nothing in this List to calculate" << endl; 
                }
                else {
                    int place_holder{List.at(0)}; 
                    for(size_t i : List) {
                        if(i <= place_holder)
                            place_holder = i; 
                    }
                    cout << "The smallest number in the list is : " << place_holder << endl; 
                }
                break; 
             case 'l' :
             case 'L' :
                if(List.size() == 0) {
                    cout << "There is nothing in this List to calculate" << endl; 
                }
                else {
                    int place_holder{List.at(0)}; 
                    for(size_t i : List) {
                        if(i >= place_holder)
                            place_holder = i; 
                    }
                    cout << "The largest number in the list is : " << place_holder << endl; 
                }
                break; 
            case 'q' :
            case 'Q' :
                cout << "Thank you for using this program. Goodbye!" << endl; 
                Quit_Program = true; 
                break; 
            default : 
                cout << "That is not a valid input, please try again" << endl; 
                break; 
        }
   }
    while (Quit_Program != true); //When user presses q program ends
      
    return 0; 

   }