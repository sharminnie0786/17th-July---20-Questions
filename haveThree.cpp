//
//  haveThree.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 17/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Given an array of ints, return true if the value 3 appears in the array exactly 3 times, and no 3's are next to each other.

//  haveThree([3, 1, 3, 1, 3]) → true
//  haveThree([3, 1, 3, 3]) → false

#include <iostream>
using namespace std;

bool getValue(int arr[],int size){
    bool value = true;
    int count = 0;
    for(int i = 0; i < size ; i++){
        if(arr[i] == 3){
            count++;
            if(i+1 < size && arr[i+1] == 3){
                value = false;
            }
        }
    }
    if(value == false || count != 3){
        return false;
    }
    else{
        return true;
    }
}

int main() {
    int arr[10] = {1, 1, 3, 3, 1, 3, 3, 3, 1, 1};
//    srand(time(0));
    int count = 0;
    bool value = false;
    
    for (int i = 0; i < 10; i++) {
//        arr[i] = rand() % 4;
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    for (int i = 0; i < 10; i++) {
        if (arr[i] == 3 && arr[i + 1] == 3 && arr[i + 2] == 3){
            value = true;
            break;
        }
    }
    
    if (value == true) {
        cout << "True" << endl;
    } else if (value == false) {
        cout << "False" << endl;
    }
}
