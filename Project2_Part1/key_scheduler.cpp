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
    
    return sub_keys;
}
