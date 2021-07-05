/* -----------------------------------------------------------------------------
FILE:              Section_7.cpp
DESCRIPTION:     Program that was used to learn how vectors and their functions worked 
COMPILER:          MinGW  C++ compiler
NOTES:             N/A
 -------------------------------------------------------------------------------*/

#include<iostream> 
#include<vector> 

using namespace std; 

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:      Main function that runs the program. 
RETURNS:           0
NOTES:             N/A 
------------------------------------------------------------------------------- */
int main()
{
    vector<int> vector_1; 
    vector<int> vector_2; 
    
    vector_1.push_back(10); 
    vector_1.push_back(20); 
    
    cout << "Vector_1" << endl; 
    cout << vector_1.at(0) << endl; 
    cout << vector_1.at(1) << endl;
    cout << vector_1.size() << endl << endl; 
    
    vector_2.push_back(100); 
    vector_2.push_back(200); 
    
    cout << "Vector_2" << endl; 
    cout << vector_2.at(0) << endl; 
    cout << vector_2.at(1) << endl; 
    cout << vector_2.size() << endl << endl; 
    
    vector<vector <int>> vector_2d; 
    
    vector_2d.push_back(vector_1); 
    vector_2d.push_back(vector_2); 
    
    cout << "2D Vector" << endl; 
    cout << vector_2d.at(0).at(0) << endl; 
    cout << vector_2d.at(1).at(0) << endl; 
    cout << vector_2d.at(1).at(1) << endl; 
    cout << vector_2d.at(0).at(1) << endl; 
    cout << vector_2d.size() << endl << endl; 
    
    vector_1.at(0) = 1000; 
    
    
    cout << "2D Vector Changed" << endl; 
    cout << vector_2d.at(0).at(0) << endl; 
    cout << vector_2d.at(1).at(0) << endl; 
    cout << vector_2d.at(1).at(1) << endl; 
    cout << vector_2d.at(0).at(1) << endl; 
    cout << vector_2d.size() << endl << endl; 
    
    cout << "Vector_1 Changed" << endl; 
    cout << vector_1.at(0) << endl; 
    cout << vector_1.at(1) << endl << endl;
    
    return 0; 
}
