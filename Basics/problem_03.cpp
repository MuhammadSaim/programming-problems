/**
 * @file problem_three.cpp
 * @author Muhammad Saim (muhammadsaim494@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-13
 * 
 * @copyright Copyright (c) 2020
 * 
 * Write a program in C++ to check whether a number is prime or not
 * 
 */

#include <iostream>


using namespace std;


int main(){

    // decalring variables
    int number, i;
    bool isPrime = true;


    // geting number input from user
    cout << "Enter a number: ";
    cin >> number;

    // init variable i
    i = 2;

    // looping thorugh the value to check it prime or not
    while(i <= number / 2){
        if(number % i == 0){
            isPrime = false;
            break;
        }
        i++;
    }

    // checking the number is prime or not and outputing the results
    if(isPrime){
        cout << number << " is a prime number";
    }else{
        cout << number << " is not a prime number";
    }

    return 0;
}