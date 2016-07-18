//
//  PrintABC.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 18/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Logic question 34.
// I didn't know how else to print the following without using various for loops
//  A
//  B B
//  C C C
//  D D D D

#include <iostream>

using namespace std;
int main() {
    char arr[3] = {'A', 'B', 'C'};
    
    for (int i = 1; i < 2; i++) {
        for (int i = 0; i < 1; i++) {
            cout << "A" << " ";
        }
    }
    
    cout << endl;
    
    for (int i = 1; i < 2; i++) {
        for (int i = 0; i < 2; i++) {
            cout << "B" << " ";
        }
    }
    
    cout << endl;
    
    for (int i = 1; i < 2; i++) {
        for (int i = 0; i < 3; i++) {
            cout << "C" << " ";
        }
    }
    
    cout << endl;
    
    for (int i = 1; i < 2; i++) {
        for (int i = 0; i < 4; i++) {
            cout << "D" << " ";
        }
    }
    
    cout << endl;
}