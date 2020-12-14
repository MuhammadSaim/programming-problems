/**
 * @file problem_02_a.cpp
 * @author Muhammad Saim (muhammadsaim494@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-14
 * 
 * @copyright Copyright (c) 2020
 * 
 * Input a number from user, calculate and print the factorial of that number
 * using for loop
 * 
 */

#include <iostream>


using namespace std;


int main(){

    // declaring variables
    int val, factorial;

    // getting input from the user
    cout << "Enter a value: ";
    cin >> val;


    factorial = 1;


    for (int i = 1; i <= val; i++){
        factorial *= i;
    }
    
    // outputing the values
    cout << "Factorial is = "<< factorial;


    return 0;
}