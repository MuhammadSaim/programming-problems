/**
 * @file problem_05_a.cpp
 * @author Muhammad Saim (muhammadsaim494@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-14
 * 
 * @copyright Copyright (c) 2020
 * 
 * Write a program in C++ to find the sum of digits of a given number.
 * 
 * Example:
 * Sample Output:
 * Input a number: 1234
 * The sum of digits of 1234 is: 10
 * 
 */

#include <iostream>

using namespace std;

int main(){

    // declaring variables
    int number, sum, remaining;

    // geting input from the user
    cout << "Enter a 4 digit number: ";
    cin >> number;


    // init variable
    sum = 0;

    // calculating
    for(;number != 0;){
        remaining = number % 10;
        sum += remaining;
        number /= 10;
    }


    // outputing the results
    cout << "The Sum of 4 digit number is " << sum;

    return 0;
}