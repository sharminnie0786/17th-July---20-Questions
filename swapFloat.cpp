//
//  swapFloat.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 17/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Write a function named "swap_floats" that takes two floating point arguments and interchanges the values that are stored in those arguments. The function should return no value. To take an example, if the following code fragment is executed
//float x = 5.8, y = 0.9;
//swap_floats (x, y);
//cout << x << " " << y << endl;
//then the output will be 0.9 5.8
//PROBLEM
//How to return two values?

#include <iostream>
using namespace std;

void swap_floats(float a, float b) {
    float temp;
    temp = a;
    a = b;
    b = temp;
    //5.8 and 0.9 entered reversed to give a = 0.9
    cout << "The value of a and b is: " << a << " " << b << endl;
}

int main() {
    swap_floats(0.9, 5.8);
}
