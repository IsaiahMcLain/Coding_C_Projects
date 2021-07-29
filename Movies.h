/* -----------------------------------------------------------------------------
FILE:  Movies.h
DESCRIPTION:  Header file which creates the vector object of movie called List_of_Movies which holds the user's movie objects. 
COMPILER:   MinGW  C++ compiler
NOTES:  N/A
-----------------------------------------------------------------------------*/
#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector> 
#include <string> 
#include "Movie.h" 

class Movies 
{
private: 
    //Attributes
    std::vector<Movie> List_of_Movies; 
 
public: 
    //Methods 
    bool add_movie(std::string movie_name, std::string movie_age_rating, int times_watched, int movie_rating); 
    bool add_times_watched(std::string movie_name); 
    void display() const; 
    
    //Constructor 
    Movies(); 
    
    //Destructor
    ~Movies(); 
};


#endif //_MOVIES_H_