#include<iostream> 
#include"song.h"
#include<list>
#include<limits> 
#include<ios>
#include<algorithm>

//Prototypes 
void menu(); 
void playCurrentSong(const Song &song);
void displayPlaylist(const std::list<Song> &playlist, const Song &currentSong);

int main()
{
    std::list<Song> playlist {
        {"Humble", "Kendrick Lamar", 5},
        {"Monster", "Eminem", 5},
        {"I Need A Doctor", "Dr. Dre", 5},
        {"Igor", "Tyler the Creator", 5},
        {"Play It Again", "Luke Bryan", 5} 
    };
    
    std::list<Song>::iterator currentSong = playlist.begin(); 
    
    std::string tempName;
    std::string tempArtist;
    int tempRating{}; 
    
    char userChoice; 
    bool programRunning = true; 
    while(programRunning) {
        menu(); 
        std::cin >> userChoice; 
        if(std::isalpha(userChoice)){
            char choice = std::toupper(userChoice);
            switch(choice){
                case 'F': 
                    currentSong = playlist.begin(); 
                    playCurrentSong(*currentSong);
                    break;
                case 'N':
                    std::cout << "Playing Next Song" << std::endl; 
                    ++currentSong;
                    
                    if(currentSong == playlist.end()){
                        currentSong = playlist.begin(); 
                        std::cout << "Wrapping around to front" << std::endl; 
                    }
                    playCurrentSong(*currentSong);
                    break;
                case 'P':
                     std::cout << "Playing Previous Song" << std::endl; 
                     if(currentSong == playlist.begin()){
                        currentSong = playlist.end();
                        std::cout << "Wrapping around to back" << std::endl;
                    }
                    --currentSong;
                    playCurrentSong(*currentSong);
                    break; 
                case 'A':
                    std::cin.clear(); 
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Please enter song name: " << std::endl; 
                    std::getline(std::cin, tempName);
                    std::cout << "Please enter artist name: " << std::endl; 
                    std::getline(std::cin, tempArtist);
                    std::cout << "Please enter rating: " << std::endl; 
                    std::cin >> tempRating; 
                    playlist.insert(currentSong, Song(tempName, tempArtist, tempRating)); 
                    --currentSong;
                    playCurrentSong(*currentSong); 
                    break;
                case 'L': 
                    displayPlaylist(playlist, *currentSong);
                    break;
                case 'Q': 
                    programRunning = false; 
                    break; 
                default: 
                    std::cout << "Please enter a correct menu choice." << std::endl; 
                    break; 
            }
        }
        else{
            std::cin.clear();
            //More advanced version of cleaning buffer, removes infinite amount until newline char
            //instead of user set amount of chars. 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please enter a correct menu choice." << std::endl; 
        }
    }
    return 0; 
}

void menu() {
    std::cout << "\nF - Play First Song" << std::endl; 
    std::cout << "N - Play Next Song" << std::endl; 
    std::cout << "P - Play Previous Song" << std::endl; 
    std::cout << "A - Add a New Song to Playlist (Current Location)" << std::endl; 
    std::cout << "L - List Current Playlist" << std::endl; 
    std::cout << "Q - To Quit Program" << std::endl; 
    std::cout << "----------------------------------------------------------------------------------" << std::endl;
    std::cout << "Enter Selection: " << std::endl; 
}

void playCurrentSong(const Song &song) {
    std::cout << "Currently Playing: "; 
    std:: cout << song << std::endl; 
}

void displayPlaylist(const std::list<Song> &playlist, const Song &currentSong){
    for(const auto i: playlist){
        std::cout << i << std::endl; 
    }
    std::cout << "---------------------------------------------------------------------------------" << std::endl;
    std::cout << "Currently Playing: " << currentSong << std::endl; 
}
