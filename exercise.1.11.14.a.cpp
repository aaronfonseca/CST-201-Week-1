/*
* Created by Aaron Fonseca
*
* Exercise 1.11.14.a
*
* Using only pointers (no array indexing), write a 
* function to add all numbers in an integer array.
*/

#include <iostream>

using namespace std;

    int numbers[] = {5, 7, 9, 3, 2, 4};   // create numbers array
    int size = sizeof(numbers)/sizeof(numbers[0]); // find size of array
    int total = 0; 
    int *p;

    int allNumbers(){
        p = numbers;
        for(int i = 0; i < size; i++){
            total = total + *p;     // Add pointer to total
            p++;                    // Increment pointer
        }
        return total;
    }

    int main()
    {
        cout << "The sum of all numbers in the array is " << allNumbers() << endl; 
    }

