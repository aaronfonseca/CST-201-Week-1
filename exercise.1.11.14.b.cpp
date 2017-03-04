/*
* Created by Aaron Fonseca
*
* Exercise 1.11.14.b
*
* Using only pointers (no array indexing), write a 
* function to remove all odd numbers from an ordered 
* array. The array should remain ordered. Would it be 
* easier to write this function if the array were unordered?
*/

#include <iostream>
#include <sstream>

using namespace std;

    int numbers[] = {5, 7, 9, 3, 2, 4, 21, 10, 11};   // create numbers array
    int size = sizeof(numbers)/sizeof(numbers[0]);    // find size of array
    string origArray = "";      // create string
    string newArray = "";       // create string
    int *p;
    
    string originalArray(){
        p = numbers;
        for(int i = 0; i < size; i++){
            ostringstream ss;       // create output string stream
            ss << *p;
            origArray = origArray + ss.str() + " "; // convert to string
            p++;                            
        }
        return origArray;
    }

    string removeOdd(){
        p = numbers;
        for(int i = 0; i < size; i++){
            if(*p % 2 == 0){
                ostringstream ss;    // create output string stream
                ss << *p;            
                newArray = newArray + ss.str() + " "; // convert to string
                                    
            }   
            p++;    // Increment pointer
        }
        return newArray;
    }

    int main()
    {
        cout << "Original Array " <<  originalArray() << endl; 
        cout << "Odd numbers removed " << removeOdd() << endl; 
    }

