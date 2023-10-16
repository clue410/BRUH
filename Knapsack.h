#ifndef ASS3ASS3_KNAPSACK_H
#define ASS3ASS3_KNAPSACK_H

#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

class Knapsack {

};

bool validateAruments(int totalArgs, char *size, char *seed, char *durability) {
    if (totalArgs != 4) {
        cout << "invalid argument number. Expected 3, recieved " << (totalArgs - 1) << endl;
        return false;
    } else {
        if (validateSize(size) == true && validateSeed(seed) == true && validateDurability(durability) == true) {
            cout << "all arguments good. Program continuing" << endl;
            return true;
        }
    }
}

bool isCharPositiveInt(char *characterToValidate) {
    string stringifiedChar = characterToValidate;
    bool number = true;
    bool positive = true;
    for (int x = 0; x <= (stringifiedChar.size()) - 1; x++) {
        int now = stringifiedChar[x];
        if (now is asciifornumber){
            if (now > 0) {
            } else {
                cout << "invalid argument. argument " << characterToValidate << " is not a positive integer" << endl;
                positive = false;
            }
        }else{
            cout << "invalid argument. argument " << characterToValidate << " is not an integer" << endl;
            number = false;
        }
    }
}

#endif //ASS3ASS3_KNAPSACK_H
