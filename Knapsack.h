#ifndef ASS3ASS3_KNAPSACK_H
#define ASS3ASS3_KNAPSACK_H

#include <iostream>
#include "collect.h"

using namespace std;
using std::cout;
using std::cin;
using std::endl;

class Knapsack {

};

bool isCharPositiveInt(char *characterToValidate) {
    string stringifiedChar = characterToValidate;
    bool number = true;
    bool positive = true;
    for (int x = 0; x <= (stringifiedChar.size()) - 1; x++) {
        int now = stringifiedChar[x];
        if (now < 58 && now > 47) {
            if ((now) > 0) {
            } else {
                cout << "invalid argument. argument " << characterToValidate << " is not a positive integer" << endl;
                positive = false;
            }
        } else {
            cout << "invalid argument. argument " << characterToValidate << " is not an integer" << endl;
            number = false;
        }
    }
    if (number == true && positive == true) {
        return true;
    } else {
        return false;
    }
}


bool validateArguments(int totalArgs, char *size, char *seed, char *durability) {
    bool valid;
    valid = true;
    if (totalArgs != 4) {
        cout << "invalid argument number. Expected 3, received " << (totalArgs - 1) << endl;
        valid = false;
    } else {
        if (isCharPositiveInt(size) == true && isCharPositiveInt(seed) == true &&
            isCharPositiveInt(durability) == true) {
            cout << "all arguments good. Program continuing" << endl;
            valid = true;
        }
    }
    return valid;
}

void printCondition(int condition, int resetsUsed, int totalResetsAllowed, char lastCharAttemptedToAdd) {
    switch (condition) {
        case (1):
            cout << " Condition 1 is triggered because the size of the next object is too large: "
                 << sizeof(lastCharAttemptedToAdd) << endl;
            break;
        case (2):
            cout << "Condition 2: Attempt to add an R object which triggers a reset. The number of used resets: "
                 << resetsUsed << " out of " << totalResetsAllowed << endl;
            break;
        case (3):
            cout << "Condition 3: Attempt to add an S object which triggers early termination." << endl;
            break;
    }
}

char MYgenerate(int seed) {
    // TODO Put Seed In Function blah blah blah
    std::random_device rd;
    std::uniform_int_distribution<int> dist(0, 8);
    int random_die_roll = dist(rd);
//    cout << random_die_roll <<endl;
    char generatedCharacter;
    switch (random_die_roll) {
        case (0):
            generatedCharacter = 'A';
            break;
        case (1):
            generatedCharacter = 'B';
            break;
        case (2):
            generatedCharacter = 'C';
            break;
        case (3):
            generatedCharacter = 'D';
            break;
        case (4):
            generatedCharacter = 'E';
            break;
        case (5):
            generatedCharacter = 'F';
            break;
        case (6):
            generatedCharacter = 'G';
            break;
        case (7):
            generatedCharacter = 'R';
            break;
        case (8):
            generatedCharacter = 'S';
            break;
    }
    cout << generatedCharacter << endl;
    cout << " size of : " << sizeof(generatedCharacter) << endl;
    return generatedCharacter;
}

void conditionalBehaviour(int condition, int resetsUsed, int totalResetsAllowed, char lastCharAttemptedToAdd) {
    switch (condition) {
        case (1):
            break;
        case (2):
            break;
        case (3):
            break;
    }
}

#endif //ASS3ASS3_KNAPSACK_H
