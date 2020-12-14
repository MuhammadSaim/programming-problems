/**
 * @file problem_04_a.cpp
 * @author Muhammad Saim (muhammadsaim494@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-14
 * 
 * @copyright Copyright (c) 2020
 * 
 * Write a program in C++ to find prime number within a range.
 * Example:
 * Input number for starting range: 1
 * Input number for ending range: 100
 * The prime numbers between 1 and 100 are:
 * 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
 * The total number of prime numbers between 1 to 100 is: 25
 * 
 * using for loop
 * 
 */

#include <iostream>

using namespace std;


int main(){

    // declaring variables
    int start, end, i, j;
    bool isPrime;

    // getting user inputs
    cout << "Enter start number: ";
    cin >> start;
    cout << "Enter end number: ";
    cin >> end;


    for (i = start; i <= end; i++){
        
        isPrime = true;

        if(i == 0 || i == 1){
            isPrime = false;
        }

        for (j=2; j <= (i/2); j++){
           if(i % j == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime)
            cout << i << " ";
        
    }
    


    return 0;
}