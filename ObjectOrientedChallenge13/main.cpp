/* -----------------------------------------------------------------------------
FILE:   Section_13_ObjectOrientedChallenge.cpp
DESCRIPTION:  Program that works with classes and objects to instate a vector which holds a movie reviews list
COMPILER:   MinGW  C++ compiler
NOTES:  Program was meant to practice and work with OOP. 
-----------------------------------------------------------------------------*/
#include "Movies.h"
#include <iostream> 

using std::cout; 
using std::endl; 

//Prototypes 
void add_movie(Movies& List_of_Movies, std::string movie_name, std::string age_rating, int times_watched, int movie_rating); 
void add_times_watched(Movies &List_of_Movies, std::string movie_name); 


/* -----------------------------------------------------------------------------
FUNCTION: main()
DESCRIPTION:  Creates new objects within the vector and edits some of the objects within the vector. Meant to test the objects
functionality. 
RETURNS:  0
NOTES:   N/A 
------------------------------------------------------------------------------- */
int main()
{
    cout << "Welcome to the Movies list" << endl; 
    
    Movies my_movies_list;
    
    my_movies_list.display();
    
    add_movie(my_movies_list, "Pirates of The Carribean", "PG-13", 10, 10);                 
    add_movie(my_movies_list,"Star Wars", "PG", 13, 9);             
    add_movie(my_movies_list,"Chicken Little", "PG", 3, 8);           
     
    my_movies_list.display();   
    
    add_movie(my_movies_list,"Chicken Little", "PG", 3, 8);            
    add_movie(my_movies_list,"War of the Worlds", "PG-13", 2, 6);              
 
    my_movies_list.display();    
    
    add_times_watched(my_movies_list, "Chicken Little");                    
    add_times_watched(my_movies_list, "Star Wars");             
    
    my_movies_list.display();    
    
   add_times_watched(my_movies_list, "The Lorax");         
   
    return 0; 
}

/* -----------------------------------------------------------------------------
FUNCTION: add_movie
DESCRIPTION:  Calls upon add_movie function defined within the movies.cpp file, contains if else logic in the main.cpp file 
 so user can know if their movie was added or not. 
RETURNS:  None (void) 
NOTES:   N/A 
------------------------------------------------------------------------------- */
void add_movie(Movies &List_of_Movies, std::string movie_name, std::string age_rating, int times_watched, int movie_rating)
{
    if(List_of_Movies.add_movie(movie_name, age_rating, times_watched, movie_rating)) 
    { 
        cout << movie_name << " was added" << endl;
    }
    else
    {
        cout << movie_name << " is already in the list" << endl; 
    }
}

/* -----------------------------------------------------------------------------
FUNCTION: add_times_watched
DESCRIPTION:  Function that call add_times_watched function defined within movies.cpp file, this function in main.cpp
contains if/else logic which tells user that their movie has been incremented by 1 or that the movie is not within the vector.
RETURNS:  None (void) 
NOTES:   N/A 
------------------------------------------------------------------------------- */
void add_times_watched(Movies& List_of_Movies, std::string movie_name) 
{ 
    if(List_of_Movies.add_times_watched(movie_name)) 
    { 
        cout << movie_name << " has been watched 1 additional time\n"; 
    }
    else 
    { 
        cout << movie_name << " was not found within the list and cannot be incremented\n"; 
    } 
}
