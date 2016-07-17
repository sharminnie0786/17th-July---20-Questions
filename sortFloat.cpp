//
//  sortFloat.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 17/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Write a function named "sort3" that takes three floating point arguments, call them "x" , "y" , and "z"
//, and modifies their values, if necessary, in such a way as to make true the following inequalities: x  y  z .
//The function should return no value. To take an example, if the following code fragment is executed

#include <iostream>
using namespace std;

void sortFloat(float a, float b, float c) {
    float arr[3] = {a,b,c};
    float temp = 0.0;
    //Remmeber two loops and then sort like reverse
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (arr[j] > arr[i]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
}

int main() {
    sortFloat(3.2, 5.8, 0.9);
}
