/**
 * @file problem_two.cpp
 * @author Muhammad Saim (muhammadsaim494@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-13
 * 
 * @copyright Copyright (c) 2020
 * 
 * Input a number from user, calculate and print the factorial of that number
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

    // calculating the factorial
    while(val >= 1){
        factorial *= val;
        val--;
    } 


    // outputing the values
    cout << "Factorial is = "<< factorial;


    return 0;
}