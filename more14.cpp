//
//  more14.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 17/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Given an array of ints, return true if the number of 1's is greater than the number of 4's

//more14([1, 4, 1]) → true
//more14([1, 4, 1, 4]) → false

/* Question
 Before I had initialised and declared count and count1 on the same line as 
 int count, count1 = 0. In doing this the output I wanted came out wrong, it  returned true
 even if there were more 4's than 1. AS soon as I declared and initialised the two 
 variables seperately I started getting the right answer. Why is this?
 */

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    srand(time(0));
    int count = 0;
    int count1 = 0;
    
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 5;
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    for (int i = 0; i < 10; i++) {
        if (arr[i] == 1) {
            count++;
        } else if (arr[i] == 4) {
            count1++;
        }
    }

    
    if (count > count1) {
        cout << "True" << endl;
    } else if (count1 > count) {
        cout << "False" << endl;
    } else if (count == count1) {
        cout << "Same Amount"  << endl;
    }
    
    
}
