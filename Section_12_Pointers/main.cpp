/* -----------------------------------------------------------------------------
FILE:   Section_12_pointers.cpp
DESCRIPTION:  Program that takes two arrays and multiplys them together in order to make a third array 
COMPILER:   MinGW  C++ compiler
NOTES:  Program was meant to explore and use pointers to better understand them as well as using dynamic
 memory allocation. 
-----------------------------------------------------------------------------*/
#include<iostream> 

//Prototypes 
void array_print(const int *const array, const size_t array_size); 
int *apply_all(int *array_1, const size_t array_1_size, int *array_2, const size_t array_2_size);

using namespace std; 

/* -----------------------------------------------------------------------------
FUNCTION: main()
DESCRIPTION:  Function that calls upon other functions and displays their results
RETURNS:  0
NOTES:   N/A 
------------------------------------------------------------------------------- */
int main(){
    
    const size_t array_1_size {5}; 
    const size_t array_2_size {3}; 
    
    int array1 [] {1,2,3,4,5}; 
    int array2 [] {10,20,30}; 
    
    cout << "Array 1 is: "; 
    array_print(array1, array_1_size); 
    
    cout << "Array 2 is: "; 
    array_print(array2, array_2_size); 
    
    int *array3 = apply_all(array1, array_1_size, array2, array_2_size); 
    constexpr size_t array_3_size {array_1_size * array_2_size}; 
    
    cout << "Newly created array: "; 
    array_print(array3, array_3_size); 
    
    cout << endl; 
    
    delete [] array3; 
    return 0; 
}

/* -----------------------------------------------------------------------------
FUNCTION: *apply_all()
DESCRIPTION:  Function that takes the two arrays passed from main and multiplys them in order to create a 
 new array in the heap which will be returned and displayed to the user. 
RETURNS:  *int
NOTES:   N/A 
------------------------------------------------------------------------------- */
int *apply_all(int *array_1, const size_t array_1_size, int *array_2, const size_t array_2_size) {
   
    size_t new_array_size {array_1_size * array_2_size}; 
    int *array_new {nullptr}; 
    array_new = new int[new_array_size]; 
    
    int position {0}; 
    for(size_t i = 0; i < array_1_size; i++) {
        for(size_t j = 0; j < array_2_size; j++) {
            array_new[position] = array_1[i] * array_2[j]; 
            ++position; 
        }
    } 
    return array_new; 
}

/* -----------------------------------------------------------------------------
FUNCTION: array_print()
DESCRIPTION:  Function that prints array to user
RETURNS:  Nothing (void) 
NOTES:   N/A 
------------------------------------------------------------------------------- */
void array_print(const int *const array, const size_t array_size) {
    cout << " [ "; 
    for(size_t i = 0; i < array_size; i++){ 
        cout << array[i] << " "; 
    } 
    cout << "] "; 
cout << endl; 
}