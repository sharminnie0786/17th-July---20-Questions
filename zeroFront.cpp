//
//  zeroFront.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 17/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Return an array that contains the exact same numbers as the given array, but rearranged so that all the zeros are grouped at the start of the array. The order of the non-zero numbers does not matter. So {1, 0, 0, 1} becomes {0 ,0, 1, 1}. You may modify and return the given array or make a new array.

//  zeroFront([1, 0, 0, 1]) → [0, 0, 1, 1]
//  PROBLEM:
//  I have it so that it counts all the zeros and places them at the front, how would I make it so that it replaces the number at  the first couple of indexes with the zeros?

#include <iostream>
using namespace std;

int main() {
        int arr[10];
        srand(time(0));
        int count = 0;
    
        for(int i = 0; i < 10; i++) {
            arr[i] = rand() % 4;
            cout << arr[i] << " ";
        }
        
        cout << endl;
    
    for (int i = 0; i < 10; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }
    
    for (int i = 0; i < count; i++) {
       arr[i] = 0;
    }
    
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
}
