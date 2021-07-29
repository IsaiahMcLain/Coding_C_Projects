/* -----------------------------------------------------------------------------
FILE: Movie.h
DESCRIPTION: Header file which creates the function definition and attributes of the Movie class. Includes user's rating of 
the movie, times watched, movie's rating (G, PG, PG-13, etc), and the name of the movie.   
COMPILER:   MinGW  C++ compiler
NOTES:  N/A
-----------------------------------------------------------------------------*/
#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string> 

class Movie
{
private: 
   //Attributes 
    std::string movie_name;
    std::string movie_age_rating; 
    int times_watched {1}; 
    int movie_rating; 
    
public:
    //Methods 
   
    //Constructor 
    Movie(std::string movie_name, std::string movie_age_rating, int times_watched, int movie_rating); 
    
    //Copy Construtor 
    Movie(const Movie &source); 

    //Getter and Setter methods 
    void set_name(std::string movie_name) {this->movie_name = movie_name; }
    std::string get_name() const {return movie_name; } 

    void set_age_rating(std::string movie_age_rating) {this -> movie_age_rating = movie_age_rating; } 
    std::string get_age_rating() const {return movie_age_rating; }
 
    void set_twatched(int times_watched) {this -> times_watched = times_watched; } 
    int get_twatched() const {return times_watched; }
   
    void set_get_rating(int movie_rating) {this -> movie_rating = movie_rating; }
    int get_rating() const {return movie_rating; } 
     
    
    //Simple increment function for times watched 
    void twatched_increment() {++times_watched; } 
    
    //Simple display function 
    void display() const; 
    
    //Destructor 
    ~Movie(); 
};

#endif //_MOVIE_H_