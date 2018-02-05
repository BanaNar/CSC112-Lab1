/*
 *  @file    labTwo.cpp
 *  @author  Tony Xu (xuj10)
 *  @date    2/4/2018
 *  @version 7.0
 *
 *  This is a little program that read non-negative data integers
 *  into an array and find the max, min, and mean of these numbers.
 *  The program will stop reading when a negative value is entered.
 *
 */

#include <iostream>
using namespace std;

int main() {

    int max_int, min_int; // Use to calculate max and min
    int total_int = 0, mean_int = 0; // Use to calculate mean
    int num_int = 0;

    int list_int[10];
    int counter = 0;

    for(int i = 0; i < 10; i++){ // Input all the entered numbers into array

        int enter_int = 0;
        cin >> enter_int;
        if (enter_int < 0){
            break;
            }
        else if (enter_int >= 0) {
            list_int[i] = enter_int;
            counter++;
            }
    }


    for(int i = counter - 1; i >= 0; i--){ // Print the array backwards
        cout << list_int[i] << endl;
    }

    for(int i = 0; i < counter; i++){ // Calculate the max and min
        if(i == 0){
            max_int = list_int[0];
            min_int = list_int[0];
        }else{
            if(list_int[i] > max_int){
                max_int = list_int[i];
            }
            if(list_int[i] < min_int){
                min_int = list_int[i];
            }
        }
    }

    for(int i = 0; i < counter; i++){ // Calculate the mean without adding the outliners
        if(list_int[i] == min_int){ // Do not add min to total
            total_int += 0;
        }
        else if((list_int[i] > min_int)&&(list_int[i] <= max_int)){ // Add any input larger than min
            total_int = total_int + list_int[i];
            num_int++;
        }
    }

    cout << "Max: " << max_int << endl;
    cout << "Min: " << min_int << endl;

    if (num_int == 0){
        cout << "Mean: Undefined." << endl;
    }else{
        mean_int = total_int / num_int;
        cout << "Mean: " << mean_int << endl;
    }

    return 0;


}
