/**
 * @file problem_01_a.cpp
 * @author Muhammad Saim (muhammadsaim494@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-14
 * 
 * @copyright Copyright (c) 2020
 * 
 * Input a range from user, start and end, then print the sum of all the numbers between them.
 * usinf For Loop
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
    for(int i = start; i <= end; i++){
        sum += i;
    }


    // outputing the value
    cout << "Sum of range from " << start << " to " << end << " is = " << sum;

    return 0;
}