//
//  multiPrint.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 17/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Write a function multiPrint(char c, int n) that prints n copies of a character c.

#include <iostream>
using namespace std;

void multiPrint(char, int);

void multiPrint(char c, int n) {
    for (int i = 0; i < n; i++) {
        cout << c << " ";
    }
    cout << endl;
    
}

int main() {
    multiPrint('O', 9);
}
