#include<iostream> 
#include<fstream>
#include<string> 

int main()
{
    std::ifstream inFile("play.txt"); 
    std::ofstream outFile("playwithlinenumbers.txt"); 
    
    if(!inFile)
        std::cerr << "Error opening file, please try again." << std::endl; 
    if(!outFile) 
        std::cerr << "Error writing to file, please try again." << std::endl; 
    
    std::string line{}; 
    int lineNumber{}; 
    
    while(std::getline(inFile, line)){
        if(line.size() != 0){
            lineNumber++; 
            outFile << lineNumber << "   " << line << std::endl; 
        }
        else{
            outFile << std::endl; 
        }
    }
    std::cout << "Finished adding line numbers to file." << std::endl; 
   
    inFile.close();
    outFile.close(); 
    
    return 0; 
}
