#include<iostream> 
#include <fstream> 
#include <iomanip>
#include <vector>
#include <algorithm>


//Prototypes 
void header(); 
double checker(std::string studentAnswer, std::string testKey, double numberCorrect); 
double averager(std::vector<double> studentScores);

int main()
{
    std::ifstream inFile;
    inFile.open("testresults.txt");
    
    std::string testKey; 
    std::string studentAnswer;
    std::string studentName; 
    double numberCorrect{};
    std::vector<double> studentScores; 
    
    
    if(inFile.is_open()){
        header(); 
        inFile >> testKey;
        std::transform(testKey.begin(), testKey.end(), testKey.begin(), ::tolower);
        while(inFile  >> studentName >> studentAnswer){
            //Uses stl library function to make all entries lowercase 
            std::transform(studentAnswer.begin(), studentAnswer.end(), studentAnswer.begin(), ::tolower);
            numberCorrect = checker(studentAnswer, testKey, numberCorrect);  
            studentScores.push_back(numberCorrect);
            std::cout << std::left << std::setw(10) << studentName << std::setw(20) << std::setfill(' ') << std::right << " " <<  numberCorrect << std::endl; 
        }
        inFile.close();
        double average = averager(studentScores);
        std::cout << std::setw(50) << std::setfill('-') << "-" << std::endl; 
        std::cout << "Average student score: " << average << std::endl; 
    }
    else {
        std::cerr << "Could not open file, please run program again" << std::endl; 
        return 1;
    }
    
    return 0; 
}

void header(){
    std::cout << std::setw(25) << std::setfill('-') << "Results" << std::setw(25) << std::setfill('-') << "-" << std::endl;
    std::cout << std::setw(25) << std::setfill(' ') << std::left << "Name" << std::setw(25) << "Grade" << std::endl;
    std::cout << std::setw(50) << std::setfill('-') << "-" << std::endl; 
    std::cout << std::setfill(' ');
}

double checker(std::string studentAnswer, std::string testKey, double numberCorrect){
    if(testKey == studentAnswer){
        return testKey.size();
    }
    else{
        numberCorrect = 0;
        for(size_t i = 0; i < testKey.size(); i++){
            if(studentAnswer[i] == testKey[i]){
                numberCorrect++;
            }
        }
        return numberCorrect; 
    }
}

double averager(std::vector<double> studentScores){
    double average{};
    for(size_t i = 0; i < studentScores.size(); i++){
        average += studentScores.at(i); 
    }
    average = average / studentScores.size(); 
    return average; 
}

