/* -----------------------------------------------------------------------------
FILE:   Movie.cpp
DESCRIPTION:  Instates the functions defined within the Movie.h file. 
COMPILER:   MinGW  C++ compiler
NOTES:  N/A
-----------------------------------------------------------------------------*/
#include "Movie.h" 
#include <iostream> 

 //Constructor 
    Movie::Movie(std::string movie_name, std::string movie_age_rating, int times_watched, int movie_rating) 
                    : movie_name(movie_name), movie_age_rating(movie_age_rating), times_watched(times_watched), 
                    movie_rating(movie_rating) { } 
                    
//Copy Constructor 
Movie::Movie(const Movie &source) 
        : Movie{source.movie_name, source.movie_age_rating, source.times_watched, source.movie_rating} 
        {} 
                    
//Destructor 
    Movie::~Movie() { }

/* -----------------------------------------------------------------------------
FUNCTION: Movie::display() const 
DESCRIPTION:  Function that outputs movie object information to the user.
RETURNS:  None (void) 
NOTES:   N/A 
------------------------------------------------------------------------------- */
void Movie::display() const 
{ 
    std::cout << "Title: " << movie_name << std::endl; 
    std::cout << "Age Rating: " << movie_age_rating<< std::endl; 
    std::cout << "Times Watched: " << times_watched << std::endl; 
    std::cout << "My Rating for the Movie: " << movie_rating << std::endl; 
    std::cout << std::endl; 
}
