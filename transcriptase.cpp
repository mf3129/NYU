/*
 Makan Fofana
 Assignment: Project 2
 
 */

#include <iostream>
#include <fstream>
using namespace std;

string uppercase(string input){ //This function will turn this into an uppercase
    for(int i=0;i<input.length();i++) //for loop to make all the inputs uppercase
    {
        input[i]=toupper(input[i]);
    }
    return input;
}

string strand1(string input) //function to transform input
{
    for(int i=0;i<input.length();i++) //for oop to go through each character to replace another
    {
        if(input[i]=='T')
        {
            input[i]= 'A'; //if its T, it will switch to A
        }
        else if(input[i]== 'A')
        {
            input[i]= 'U'; //if its A, it will switch to U
        }
        else if(input[i]== 'C')
        {
            input[i]= 'G'; //if its C, it will switch to G
        }
        else if(input[i]== 'G')
        {
            input[i]= 'C'; //if its G, it will switch to C
        }
    }
    return input; //returning the input
}

int main(){
        ifstream fin("dna.txt"); //puts text file into code
        if(fin.fail()){ //if it happens  to fail
            cerr << "File cannot be read, opened, or does not exist.\n";
            exit(1); //exit if it fails
        }
        string strand; //name of the input
    while(getline(fin, strand)) //get each input and but it into the stand1 function
    {
        string string3=uppercase(strand); //string3 makes it uppercase
            cout << strand1(string3); //transforms everything
    }
        fin.close(); //exits
}
