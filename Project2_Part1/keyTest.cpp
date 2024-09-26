/*#include<iostream>
#include "DES.h"
#include <bitset>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string shift_left(string sub_key){
    // write code from here
    ///shift every bit to the left of the original positoin 
    //except the first but which will be put at the end of the string
    char lastBit = sub_key[0]; 
    for (int i = 1; i < sub_key.size(); i++){
        sub_key[ i - 1 ] = sub_key[i]; 
    }

    sub_key[sub_key.size() - 1] = lastBit;  
    
    return sub_key;
} 

int main()
{
    ///shift every bit to the left of the original position 
    //except the first but which will be put at the end of the string
    //string testKey = "0101000100111101110110011001010010001000101010101111000010101111";
    
    /*string testKey = "1100";
    
    char lastBit = testKey[0]; 
    for (int i = 0; i < testKey.size(); i++){
        testKey[ i - 1 ] = testKey[i]; 
    }

    testKey[testKey.size() - 1] = lastBit;  

    cout << testKey; 
    return 0; 

    string hexString = "0000001011111111101000110111010011101011010101011111010101111011";

    //string hexString = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwzyz12345";

    int PC1[56] = {57, 49, 41, 33, 25, 17, 9,  1,  58, 50, 42, 34, 26, 18,
                   10, 2,  59, 51, 43, 35, 27, 19, 11, 3,  60, 52, 44, 36,
                   63, 55, 47, 39, 31, 23, 15, 7,  62, 54, 46, 38, 30, 22,
                   14, 6,  61, 53, 45, 37, 29, 21, 13, 5,  28, 20, 12, 4};

    int PC2[48] = {14, 17, 11, 24, 1,  5,  3,  28, 15, 6,  21, 10, 23, 19, 12, 4,
                   26, 8,  16, 7,  27, 20, 13, 2,  41, 52, 31, 37, 47, 55, 30, 40,
                   51, 45, 33, 48, 44, 49, 39, 56, 34, 53, 46, 42, 50, 36, 29, 32};

    string clippedString = "";

    for (int i = 0; i < 56; i++) {
        clippedString += hexString[PC1[i] - 1];  // Adjust 1-based index
    }

    cout << clippedString << endl;

    string LF, RF;

    for (int i = 0; i < 28; i++) {
        LF += clippedString[i];
    }
    for (int i = 28; i < 56; i++) {
        RF += clippedString[i];
    }

    cout << "Right half: " << RF << endl;
    cout << "Left half: " << LF << endl;

    vector<string> myVec;
    for (int i = 1; i <= 16; i++) {
        if (i == 1 || i == 2 || i == 9 || i == 16) {
            LF = shift_left(LF);
            RF = shift_left(RF);
        } else {
            LF = shift_left(LF);
            LF = shift_left(LF);
            RF = shift_left(RF);
            RF = shift_left(RF);
        }
        myVec.push_back(LF + RF);
    }

    char finalKey[48] = {0};
    for (int i = 0; i < myVec.size(); i++) {
        //cout << myVec[i] << endl;
        string currVec = myVec[i];
        for (int j = 0; j < 48; j++) {
            finalKey[j] = currVec[PC2[j] - 1];  // Adjust for 1-based index
        }

        for (int z = 0; z < 48; z++) {
            cout << finalKey[z];
        }
        cout << endl;
    } */