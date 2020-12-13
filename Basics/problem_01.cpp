/**
 * @file problem_one.cpp
 * @author Muhammad Saim (muhammadsaim494@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-12
 * 
 * @copyright Copyright (c) 2020
 * 
 * Input a range from user, start and end, then print the sum of all the numbers between them.
 * 
 */
#include <iostream>

using namespace std;


int main(){

    // declaring variables
    int start, end, sum;

    // inputing start and end values
    cout << "Enter start value: ";
    cin >> start;
    cout << "Enter end value: ";
    cin >> end;

    // initailize sum to zero 
    sum = 0;


    // loop through the values to find the sum
    while(start <= end){
        sum += start;
        start++;
    }

    // outputing the value
    cout << "Sum of range from " << start << " to " << end << " is = " << sum;

    return 0;
}