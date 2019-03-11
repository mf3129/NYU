/*
 Author: Makan Fofana
 Course: CSCI-136
 Instructor: ]]
 Assignment: Lab5A
 
 Asks the user to input two integer numbers and print Yes if the first number is divisible by the second, otherwise print No.
*/

#include <iostream>

using namespace std;


bool isDivisibleBy(int n, int d) { //Boolean Function
    
    if (d != 0) {
        if (n % d == 0) {
            return true;
            
        } else {
            return false;
        }
        
    } else {
        cout << "Enter a second number greater than 0" <<  endl;
        return false;
    }
}


int main() {
    
    int a = 0;
    int b = 0;
    
    cout << "Enter value 1: " << endl;
    cin >> a;
    
    cout << "Enter value 1: " << endl;
    cin >> b;
    
    if(isDivisibleBy(a,b)){ //Printing Yes or No
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
    
    return 0;
}
