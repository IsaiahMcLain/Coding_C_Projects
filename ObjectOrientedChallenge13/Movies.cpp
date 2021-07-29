/* -----------------------------------------------------------------------------
FILE:   Movies.cpp
DESCRIPTION:  Program that instates the functions defined within Movies.h
COMPILER:   MinGW  C++ compiler
NOTES:  N/A
-----------------------------------------------------------------------------*/
#include "Movies.h" 
#include <iostream> 

//Movies Constructor 
Movies::Movies() 
{
} 

//Movies Destructor 
Movies::~Movies() 
{
}

/* -----------------------------------------------------------------------------
FUNCTION: Movies::add_movie 
DESCRIPTION:  Function that searches the vector to insure that the movie being added does not already exist, if it doesn't 
 then the function calls upon the constructor to create a new object of Movie within the List_of_Movies vector. 
RETURNS: True/False 
NOTES:   N/A 
------------------------------------------------------------------------------- */
bool Movies::add_movie(std::string movie_name, std::string movie_age_rating, int times_watched, int movie_rating) 
{
    for(const Movie &movie : List_of_Movies) 
    {
        if(movie.get_name() == movie_name) 
        {
            return false; 
        }
    }
    Movie temp {movie_name, movie_age_rating, times_watched, movie_rating}; 
    List_of_Movies.push_back(temp);
    return true; 
}

/* -----------------------------------------------------------------------------
FUNCTION: Movies::add_times_watched 
DESCRIPTION:  This function checks to make sure the movie wanting to be incremented exists within the vector, if it does then
the movie is incremented in it's times watched by 1, if not then the function returns false. 
RETURNS:  True/False 
NOTES:   N/A 
------------------------------------------------------------------------------- */
bool Movies::add_times_watched(std::string movie_name) 
{ 
   for (Movie &movie : List_of_Movies) 
   {
       if(movie.get_name() == movie_name) 
       {
           movie.twatched_increment(); 
           return true; 
       }
   }
   return false; 
}

/* -----------------------------------------------------------------------------
FUNCTION: Movies::display() const 
DESCRIPTION:  Function that runs through the vector and calls upon the display() function within Movie.cpp in order to
display the movie object information to the user. This function also determines that if no movies exist in the vector then it 
must tell the user that. 
RETURNS:  None (void) 
NOTES:   N/A 
------------------------------------------------------------------------------- */
void Movies::display() const 
{ 
   if(List_of_Movies.size() == 0) 
   { 
       std::cout << "Sorry you have not watched any movies yet..." << std::endl; 
   } 
   else 
   {
       std::cout << "---------------------------------------------------------------" << std::endl; 
       for(const auto &movie : List_of_Movies) 
       {
           movie.display(); 
       }
       std::cout << "---------------------------------------------------------------" << std::endl; 
   }
} 


