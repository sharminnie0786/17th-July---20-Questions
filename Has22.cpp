//
//  Has22.cpp
//  TextBookQuestions
//
//  Created by Sharmyn Kayani on 17/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int arr[7];
    srand(time(0));
    
    for (int i = 0; i < 7; i++) {
        arr[i] = rand() % 5;
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    for (int i = 0; i < 7; i++) {
        if (arr[i] == 2 && arr[i + 1] == 2){
            cout << "True" << endl;
        }
    }
}
