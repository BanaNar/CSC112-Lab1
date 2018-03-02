/* 
 *  @file    labThree.cpp
 *  @author  Tony Xu (xuj16)
 *  @date    2/4/2018  
 *  @version 6.0 
 *  
 *  This is a little program that find the maximum
 *  and the second largest number in a random array.
 *
 */
 
#include <iostream>
using  namespace std;

#define MIN_VAL   1
#define MAX_VAL 300

int main() {

    int N = 20;
    unsigned int rSeed;
    int arrMax = 0;
    int secondLargest = 0;
    int arrA[N];

    cout << "Enter seed: ";
    cin  >> rSeed;

    srand(rSeed);
 
 
    for(int i = 0; i < N; i++){
       arrA[i] = rand() % (MAX_VAL - MIN_VAL + 1) + MIN_VAL;
       cout << arrA[i] << " ";
       
       if(i == 0){
          arrMax = arrA[i];
          secondLargest = -1;
          } else if(arrA[i] > arrMax){
               int tmp = arrMax;
               arrMax = arrA[i];
               secondLargest = tmp;
          }
            if((arrA[i] < arrMax) && (arrA[i] > secondLargest)){
               secondLargest = arrA[i];
            }
          
       }

    cout << endl;
    cout << "max: " << arrMax << endl;
    cout << "2nd: " << secondLargest << endl;


    return 0;
}