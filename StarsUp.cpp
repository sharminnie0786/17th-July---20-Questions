//
//  StarsUp.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 18/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Write a Program to print  the following output
//  *
//  **
//  ***
//  ****
//  *****

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

