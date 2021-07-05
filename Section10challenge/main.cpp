/* -----------------------------------------------------------------------------
FILE: Section10Challenge.cpp
DESCRIPTION:  Program that takes a user's message and encrypts it for them and then decrypts it back to the 
 original message. 
COMPILER: MinGW  C++ compiler
NOTES:  N/A
  -----------------------------------------------------------------------------*/
#include<iostream> 
#include <string> 

using namespace std; 
/* -----------------------------------------------------------------------------
FUNCTION:  main()
DESCRIPTION: Contains the entire program in which the user's message can be encrypted. 
RETURNS:  0
NOTES:  N/A 
------------------------------------------------------------------------------- */ 
int main()
{
   string Alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ,'"};  //54 characters
   string Key {"dfjgklamn7o<\']v>b|Q[sipqLf9hejXVBSNAMOTASKA:12305';.,`"}; 
   
   cout << "Enter your secret message: "; 
   
   string User_Message; 
   getline(cin, User_Message); //Enables whole message to be read
   cout << endl; //Format purposes 
   
   cout << "Processing Encryption......" << endl << endl; 
   
   string Encrypted_Message{}; 
   
   /*Works by running through user's message and finding that character inside the Alphabet string 
    * it then checks to make sure that position contains a character within the alphabet, if it does then 
    * new_char is assigened the character == to the number position given by the find function in the alphabet
    * it then stores this into Encrypted_Message and repeats. The else case handles if the char is not found
    * within the alphabet and just adds that character into the string with no changes. 
    */ 
   for(char i : User_Message){
       size_t position = Alphabet.find(i);  
       if (position != string::npos) {
           char new_char { Key.at(position) }; 
           Encrypted_Message += new_char; 
       } 
       else { 
           Encrypted_Message += i; 
         }
       
    } 
      
    cout << "Encrypted Message: " << Encrypted_Message << endl << endl; 

    cout << "Decrypting Message....." << endl << endl; 
    
    string Decrypted_Message {}; 
    
    //Works same as previous for loop but in reverse 
    for(char i : Encrypted_Message) {
        size_t position = Key.find(i); 
        if(position != string::npos) {
            char new_char { Alphabet.at(position) }; 
            Decrypted_Message += new_char; 
        }
        else {
            Decrypted_Message += i; 
        }
    }
    
    cout << "Decrypted Message is: " << Decrypted_Message << endl << endl; 
    
    return 0; 
}
