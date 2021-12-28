#include<iostream> 
#include<fstream>
#include<string>
#include<algorithm>

int main()
{
    std::ifstream inFile("play.txt");
    std::string userWord{};
    std::string poemWord{};
    int wordCount{};
    
    if(!inFile){
        std::cerr << "Couldn't open file" << std::endl; 
    }
    
    std::cout << "Please enter a word you would like to find in Romeo and Juliet" << std::endl; 
    std::cin >> userWord; 
    
    std::transform(userWord.begin(), userWord.end(), userWord.begin(), ::tolower);
    while(inFile >> poemWord){
        std::transform(poemWord.begin(), poemWord.end(), poemWord.begin(), ::tolower);
        if(poemWord == userWord){
            ++wordCount;
        }
    }
    
    std::cout << userWord << " was found a total of: " << wordCount << " times." << std::endl;
    std::cout << "Inside the poem, Romeo and Juliet." << std::endl; 
    
    return 0; 
}
