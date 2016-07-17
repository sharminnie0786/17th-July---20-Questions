//
//  Print12345.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 18/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  //  Write a Program to print  the following output
//  1
//  12
//  123
//  1234
//  12345

#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i;j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}


