/*
 Author: Makan Fofana
 Course: CSCI-136
 Instructor: ]]
 Assignment: Lab5A
 
 Asks the user to input two integer numbers and print Yes if the first number is divisible by the second, otherwise print No. It should return true if n is a prime, otherwise return false. Change the main function to test your new code.
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



bool isPrime(int n) { // Prime number determination
    
    if (n == 0 || n == 1 || n < 0 ) {
        return false;
    } else if (n == 2 ) {
        return true;
    }
    
    for(int i = 2; i <= n-1; i++) {
        if (isDivisibleBy(n, i)) {
            return false;
            }
        }
    
    return true;
    
}

int nextPrime(int n){
    
    int newValue = 0;
    int x = 200;
    
        for (int i = 1; i < x ; i++) {
            newValue = n + i;
            if (isPrime(newValue)) {
                return newValue;
            }
        }
    
    
    return newValue;
}



int main() {
    int a = 0;
    int b = 0;

    cout << "Enter value 1: " << endl;
    cin >> a;

//    cout << "Enter value 2: " << endl;
//    cin >> b;
//
//    //    if(isDivisibleBy(a,b)){ //Printing Yes or No
//    //        cout<<"Yes"<<endl;
//    //    }
//    //    else{
//    //        cout<<"No"<<endl;
//    //    }
//
    
//    if (isPrime(a)) {
//        cout << true << endl;
//    } else {
//        cout << false << endl;
//
//    }

   cout << "Here it is " << nextPrime(a) << endl;
    
    
    return 0;
}
