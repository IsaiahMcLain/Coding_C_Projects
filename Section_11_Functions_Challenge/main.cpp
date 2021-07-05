/* -----------------------------------------------------------------------------
FILE:  Section_11_Functions_Challenge.cpp
DESCRIPTION:  A rehash of a previous prject however functions were added to this prgram to make it 
 more modular and to practie function calls and declarations. 
COMPILER:  MinGW  C++ compiler
NOTES:  Let's the user create a vector and do calculations with the vector they made. 
  -----------------------------------------------------------------------------*/
#include<iostream> 
#include<vector> 
#include<string> 
#include<algorithm> //Used for algorithim in smallest and largest numbers function 
#include<iomanip> 


using namespace std; 

//Function Protypes 
void display_menu(); 
char letter_converter(char &user_choice); 
void menu_option_chooser(char user_choice); 
void display_largest(vector<int> &users_numbers); 
void display_smallest(vector<int> &users_numbers);
void display_mean(vector<int> &users_numbers); 
void add_number_to_list(vector<int> &users_numbers); 
void print_numbers(vector<int> &users_numbers); 

/* -----------------------------------------------------------------------------
FUNCTION:  main()
DESCRIPTION:  Main function that calls upon the menu 
RETURNS:  0
NOTES:  N/A 
------------------------------------------------------------------------------- */ 
int main()
{
        display_menu(); 
        return 0; 
}

/* -----------------------------------------------------------------------------
FUNCTION:  display_menu()
DESCRIPTION:  Function that displays the menu to the user and is the center hub for the program
RETURNS:  Nothing (void)
NOTES:  N/A 
------------------------------------------------------------------------------- */ 
void display_menu(){
     char user_choice {}; 
     bool stop_program = true; 
     
     while(stop_program) {
        cout << "Welcome to the List creator program" << endl; 
        cout << "This program lets you create a numerical list" << endl; 
        cout << "and execute analysis on your list based on choice." << endl;  
        cout << "--------------------------------------------------------------------" << endl; 
        cout << "Please choose an option from below, your list starts out empty." << endl; 
        cout << "P: Print Numbers " << endl;
        cout << "A: Add a Number to the List " << endl; 
        cout << "M: Display the Mean of the Numbers " << endl;
        cout << "S: Display the Smallest Number " << endl; 
        cout << "L: Display the Largest Number " << endl; 
        cout << "Q: Quit the Program " << endl; 
    
        cin >> user_choice; 
        user_choice = letter_converter(user_choice); 
        
        if(user_choice == 'q'){
            cout << "Thank you for using this program... Goodbye!!" << endl; 
            stop_program = false; 
        }
        else{    
        menu_option_chooser(user_choice); 
        } 
    }
}

/* -----------------------------------------------------------------------------
FUNCTION:  main()
DESCRIPTION: Small function that edits user's input so they don't have to worry about casesensitivity 
RETURNS: character
NOTES:  N/A 
------------------------------------------------------------------------------- */ 
char letter_converter(char &user_choice) {
        char letter_storage = tolower(user_choice);
        return letter_storage; 
}

/* -----------------------------------------------------------------------------
FUNCTION:  menu_option_chooser()
DESCRIPTION:  Funtion that runs the if logic to determine what function to call based on user's choice 
RETURNS:  Nothing (void)
NOTES:  N/A 
------------------------------------------------------------------------------- */  
void menu_option_chooser(char user_choice) {
    static vector<int> users_numbers {};  //holds user's numbers everytime it's called 
    
    if(user_choice == 'p') 
         print_numbers(users_numbers); 
     if(user_choice == 'a') 
         add_number_to_list(users_numbers); 
     if(user_choice == 'm') 
         display_mean(users_numbers); 
     if(user_choice == 's')
         display_smallest(users_numbers);
     if(user_choice == 'l')
         display_largest(users_numbers); 
     
}

/* -----------------------------------------------------------------------------
FUNCTION:  print_numbers()
DESCRIPTION:  Prints vector to user
RETURNS:  Nothing (void) 
NOTES:  N/A 
------------------------------------------------------------------------------- */ 
void print_numbers(vector<int> &users_numbers) { 
    if(users_numbers.empty()) {
        cout << "There are no numbers present in your vector, please try again..." << endl; 
    }
    else{
        cout << "[ ";  
        for(auto i : users_numbers){ 
            cout << i << " ";  
        }
        cout << "]"; 
        cout << endl; 
    }
} 

/* -----------------------------------------------------------------------------
FUNCTION: add_number_to_list()
DESCRIPTION:  Adds number to vector that user put in
RETURNS:  Nothing(void)
NOTES:  N/A 
------------------------------------------------------------------------------- */ 
void add_number_to_list(vector<int> &users_numbers){
    int user_number_added {}; 
    cout << "Please add an integer to the list: ";
    cin >> user_number_added; 
    users_numbers.push_back(user_number_added);
    cout << endl; 
}

/* -----------------------------------------------------------------------------
FUNCTION:  display_mean()
DESCRIPTION:  Function that calculates and shows mean to user
RETURNS:  Nothing (void)
NOTES:  N/A 
------------------------------------------------------------------------------- */ 
void display_mean(vector<int> &users_numbers){
    if(users_numbers.empty()) {
        cout << "There are no numbers present in your vector, please try again..." << endl; 
    }
    else{
        double mean {}; 
        cout << "Calculating mean..." << endl; 
        for(auto i : users_numbers){
              mean = mean + i; 
      }
      mean = mean / users_numbers.size(); 
     
      cout << "Your mean is: " << setprecision(2) << mean << endl << endl; 
    }
}

/* -----------------------------------------------------------------------------
FUNCTION:  display_smallest()
DESCRIPTION:  Function that calculates and shows smallest value to user in the vector 
RETURNS:  Nothing (void)
NOTES:  N/A 
------------------------------------------------------------------------------- */ 
void display_smallest(vector<int> &users_numbers){
    if(users_numbers.empty()) {
        cout << "There are no numbers present in your vector, please try again..." << endl; 
    }
    else{
    cout << "The smallest element in your list of numbers is: "; 
    //Algorithim that runs through vector to find smallest element  
    cout << *min_element(users_numbers.begin(), users_numbers.end()) << endl << endl; 
    }
}

/* -----------------------------------------------------------------------------
FUNCTION:  display_largest()
DESCRIPTION:  Function that calculates and shows largest value to user in the vector 
RETURNS:  Nothing (void)
NOTES:  N/A 
------------------------------------------------------------------------------- */  
void display_largest(vector<int> &users_numbers){
    if(users_numbers.empty()) {
        cout << "There are no numbers present in your vector, please try again..." << endl; 
    }
    else{
    cout << "The largest element in your list of numbers is: "; 
    //Algorithim that runs through array and finds largest element and displays it 
    cout << *max_element(users_numbers.begin(), users_numbers.end()) << endl << endl; 
    }
}

