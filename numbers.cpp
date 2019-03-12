/*
 Author: Makan Fofana
 Course: CSCI-136
 Instructor: ]]
 Assignment: Lab5G
 
 Asks the user to returns the number of prime numbers in the interval a ≤ x ≤ b. Change the main function to test the new code.
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


int countPrimes(int a, int b) {
    
    int countingPrime = 0;
    int countingValue = 0;
    
    for(int i = a; i <= b ; i++) {
        if(isPrime(i)){
            countingValue = nextPrime(i);
            //cout << "Counting Value" << countingValue << endl;
            countingPrime++;
        } else {
        }
    }
    
    
//    int newValue = 0;
//    int countingPrime = 0;
//
//    for (int i = 1; i <= b ; i++) {
//
//
//        newValue = a + i;
//        if (isPrime(newValue)) {
//            countingPrime++;
//        }
//    }
    
return countingPrime;
    
}

bool isTwinPrime(int n) {
    
    if (isPrime(n)) {
        if(isPrime(n + 2) == true || isPrime(n - 2) == true){
            return true;
        } else {
            return false;
            }
    } else {
            return false;
    }
    
    
}

int nextTwinPrime(int n) {
    
    int newValue = 0;
    bool newPrime = false;
    int x = 10000;
    
    
    for (int i = 1; i < x ; i++) {
        

        newPrime = isTwinPrime(n + i);
        
        if(newPrime == true){
            newValue = n + i;
            cout << "This is the smallest value: " << newValue << endl;
            return newValue;
        }
        
    }
    
    return newValue;
}

int largestTwinPrime(int a, int b){
    

    for (int i = b; i >= a; i--) {
        if((isPrime(i) && isPrime(i+2)) || (isPrime(i) && isPrime(i-2))){
            return i;
        }
    }
            return -1;
        
    }



int main() {
//    int a = 0;
//    int b = 0;
//
//    cout << "Enter value 1: " << endl;
//    cin >> a;
//
//    cout << "Enter value 2: " << endl;
//    cin >> b;
////
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

   cout <<  largestTwinPrime(5, 12) << endl;
   cout <<  largestTwinPrime(3, 36) << endl;
   cout <<  largestTwinPrime(15, 29) << endl;
   cout <<  largestTwinPrime(10, 27) << endl;

    
    
    return 0;
}
