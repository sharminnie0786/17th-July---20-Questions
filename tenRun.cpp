//
//  tenRun.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 17/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  For each multiple of 10 in the given array, change all the values following it to be that multiple of 10, until encountering another multiple of 10. So {2, 10, 3, 4, 20, 5} yields {2, 10, 10, 10, 20, 20}.

//  tenRun([2, 10, 3, 4, 20, 5]) → [2, 10, 10, 10, 20, 20]
//  tenRun([10, 1, 20, 2]) → [10, 10, 20, 20]
//  PROBLEM:
//  I have made it so that it goes through and when it detects a numver divisible by 10 it makes the entire array that number and if it encounters another number divisible by 10 then it breaks out. How would I make it so  that it doesn't iterate the whole loop just till the end?

#include <iostream>
using namespace std;

void tenRun(int arr[10],int size){
    for (int i =0,multiple = 3; i < size ; i++) {
        if (arr[i] % 10 == 0) {
            multiple = arr[i];
        }
        if (multiple != 3) {
            arr[i] = multiple;
        }
    }
    cout << "Now displaying the contents of the array after processing : " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[10];
    srand(time(0));
    int number = 0;
    int number1 = 0;
    
    for(int i = 0; i < 10; i++) {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 10 == 0) {
            number = arr[i];
            for(int j = 0; j < 10; j++) {
                if(arr[j] % 10 != 0) {
                    arr[j] = number;
                } else if (arr[j] % 10 == 10) {
                    break;
                }
            }
        }
    }
    
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
}
