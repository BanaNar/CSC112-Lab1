/* 
 *  @file    labOne.cpp
 *  @author  Tony Xu (xuj16)
 *  @date    2/3/2018  
 *  @version 6.0 
 *  
 *  This is a little program that determine the max, min, 
 *  and sample mean of the data integers inputted by users,
 *  and print the max, min, and mean.
 *
 */

#include <iostream>
using namespace std;

int main() {
    int num_ints, in_int; //Use num_ints to record how many integers, and in_int for each integer entered.
    int max_int, min_int, total_int = 0, mean_int; // Use them to calculate the max, min, and mean.
    
    cout << "Enter number of integers: " << endl;
    cin >> num_ints;
    cout << endl;

    for (int i=1; i<=num_ints; ++i) {
        cout << "Enter integer # " << i << endl;
        cin >> in_int;
        cout << endl;
        
        total_int = total_int + in_int;
        
        if(i == 1){ // Set initial values for max and min using the first integer entered
           
         max_int = in_int;
         min_int = in_int;
          
         }
         else{ // Compare the rest integers entered and sort the max and min
            
            if (in_int >= max_int) {
               max_int = in_int;
            }
            if (in_int <= min_int) {
               min_int = in_int;
            }
            
         }
    }

   mean_int = total_int / num_ints; // Calculate the mean

    cout << "Max: " << max_int;
    cout << " Min: " << min_int;
    cout << " Mean: " << mean_int;

    return 0;
}