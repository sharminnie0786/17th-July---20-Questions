//
//  quadratic.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 17/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Write a function quadratic (int a, int b, int c, double x), which calculates the value of the quadratic:
//  ax^2 + bx + c

#include <iostream>
using namespace std;

void quadratic(int a, int b, int c) {
//    int multiple = 0;
//    int multiple1, multiple2;
//    multiple1 = 0;
//    multiple2 = 0;
//    int number[10];
//    int number1[10];
//    bool sumvalue, diffvalue;
    double x = 0;
    
    //First multiplied by the last number
//    multiple = c * a;
    
    //First multiple found
//    for (int i = 1; i < 11; i++) {
//        if (multiple % number[i] == 0) {
//            multiple1 = number[i];
//        }
//    }sa
    //Second multiple found
//    for (int i = 1; i < 11; i++) {
//        if (multiple % number1[i] == 0) {
//            if (number1[i] == multiple1) {
//                continue;
//            } else if (number1[i] != 0) {
//                multiple2 = number1[i];
//                break;
//            }
//        }
//    }
//    
//    int sum = multiple1 + multiple2;
    //As the for loop will take the smaller value and
    //the second loop will use the larger value
//    int difference = multiple2 - multiple1;
//    
//    if (sum == b) {
//        sumvalue = true;
//    } else if (difference == b) {
//        diffvalue = true;
//    }
    
// -------------------------------------------------------------------
//  Once I read the question properly I then realised there is an easier way to find the values
    
    int inside, y;
    double sqrt;
    inside = (b * b) - (4 * a * c);
    sqrt = pow(inside, 0.5);
    y = (-b) + sqrt;
    x = y / (2 * a * c);
    cout << "First value of quadratic is: " << x << endl;
    
    inside = (b * b) - (4 * a * c);
    sqrt = pow(inside, 0.5);
    y = (-b) - sqrt;
    x = y / (2 * a * c);
    cout << "First value of quadratic is: " << x << endl;
}

int main() {
    quadratic(5, 6, 1);
}