#include "key_utils.h"
#include <iostream>
#include <string>
#include <vector>
#include <bitset>
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

vector<string> key_gen(string key){
    vector<string> sub_keys;
    //write code from here
    //generate sub-leys 
    //expects a 64-bit binary key and should output vector of strings 
    //vector should have 16 different 48 bit subkeys 
    string clippedString = "";

    // Step 1: Apply PC-1 to generate the 56-bit key
    for (int i = 0; i < 56; i++) {
        clippedString += key[PC1[i] - 1];  // Adjust 1-based index
    }

    // Split the 56-bit key into two 28-bit halves
    string LF = clippedString.substr(0, 28);
    string RF = clippedString.substr(28, 28);

    // Vector to store all 16 subkeys
    vector<string> subkeys;

    // Step 2: Generate 16 subkeys
    for (int i = 1; i <= 16; i++) {
        // Apply appropriate shifts (1 or 2 shifts depending on the round)
        if (i == 1 || i == 2 || i == 9 || i == 16) {
            LF = shift_left(LF);
            RF = shift_left(RF);
        } else {
            LF = shift_left(LF);
            LF = shift_left(LF);
            RF = shift_left(RF);
            RF = shift_left(RF);
        }

        // Combine LF and RF into a single 56-bit string
        string combinedKey = LF + RF;

        // Step 3: Apply PC-2 to generate the 48-bit subkey
        string subkey;
        for (int j = 0; j < 48; j++) {
            subkey += combinedKey[PC2[j] - 1];  // Adjust 1-based index for PC2
        }

        // Store the subkey in the vector
        sub_keys.push_back(subkey);
    }

    return sub_keys;
}
