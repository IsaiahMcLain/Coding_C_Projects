#include "song.h" 

Song::Song(){
    songName = "unknown";
    artist = "unkown"; 
    rating = 1; 
}

Song::Song(std::string songName, std::string artist, int rating) 
    : songName{songName}, artist{artist}, rating{rating} {
        
    }

std::ostream &operator<<(std::ostream &os, const Song &obj){
    os << std::setw(20) << std::left << obj.songName 
    << std::setw(20) << std::left << obj.artist 
    << std::setw(20) << std::left << obj.rating; 
    return os; 
}