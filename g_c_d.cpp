//
//  g_c_d.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 17/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Write a function named "g_c_d" that takes two positive integer arguments and returns as its value the
//  greatest common divisor of those two integers. If the function is passed an argument that is not positive (i.e.,greater than zero), then the function should return the value 0 as a sentinel value to indicate that an error
//  occurred. Thus, for example,
//  cout << g_c_d(40,50) << endl; // will print 10
//  cout << g_c_d(256,625) << endl; // will print 1
//  cout << g_c_d(42,6) << endl; // will print 6

#include <iostream>
using namespace std;

int g_c_d(int n, int m) {
    int divisible = 0;
    
    if (n < 0 || m < 0) {
        return 0;
    }
    
    //First Number
    for (int i = 1; i < 1000; i++) {
        if (n % i == 0 && i > divisible) {
            if (m % i == 0 && i > divisible) {
                divisible = i;
                
            }
        }
    }

    return divisible;
}

int main() {
    cout << "The divisor is: " << g_c_d(42, 6) << endl;
}
