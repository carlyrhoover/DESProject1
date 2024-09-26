#include<iostream>
using namespace std;

int main()
{
    ///shift every bit to the left of the original position 
    //except the first but which will be put at the end of the string
    //string testKey = "0101000100111101110110011001010010001000101010101111000010101111";
    string testKey = "1100";
    
    char lastBit = testKey[0]; 
    for (int i = 0; i < testKey.size(); i++){
        testKey[ i - 1 ] = testKey[i]; 
    }

    testKey[testKey.size() - 1] = lastBit;  

    cout << testKey; 
    return 0;
}