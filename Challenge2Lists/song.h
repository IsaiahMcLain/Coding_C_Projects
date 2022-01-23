#ifndef SONG_H_
#define SONG_H_
#include<iostream>
#include<string>
#include<iomanip>

class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song& obj); 
private:
    std::string songName;
    std::string artist; 
    int rating; 
public:
    Song(); 
    Song(std::string songName, std::string artist, int rating); 
    
    std::string getSongName() const { return songName; } 
    std::string getArtist() const { return artist; } 
    int getRating() const { return rating; } 
    
    bool operator<(const Song &rhs) const {
        return this->songName < rhs.songName;
    } 
    
    bool operator==(const Song &rhs) const{
        return this->songName == rhs.songName;
    }
    
};

#endif //SONG_H_
