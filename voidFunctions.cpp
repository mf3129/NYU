//
//  main.cpp
//  reverse
//
//  Created by Makan Fofana on 3/11/19.
//  Copyright © 2019 Makan Fofana. All rights reserved.
//

#include <iostream>

using namespace std;

void reverse(int arrays[], int length) {
    
    for (int i = length; i >= 0 ; i--) {
        cout << arrays[i] << endl;
    }
    
}

int main() {
    
    int firstarray[] = {5, 10, 15};
    int secondarray[] = {2, 4, 6, 8, 10};
    reverse(firstarray,2);
    reverse(secondarray,4);
    
    return 0;
}
