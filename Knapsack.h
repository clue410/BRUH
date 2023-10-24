#ifndef ASS3ASS3_KNAPSACK_H
#define ASS3ASS3_KNAPSACK_H

#include <iostream>
#include <variant>
#include <any>
#include <vector>
#include "collect.h"

using namespace std;
using std::cout;
using std::cin;
using std::endl;


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

class Knapsack {
private:
public:
    int durability;
    int currentCapacity;
    int size;

    Knapsack() {
        this->currentCapacity = 0;
    }

    template<class T>
    bool putCharInKnapsack(T character) {
        if (sizeof(character) - currentCapacity <= size) {
            conditionalBehaviour(1, 0, 0, 'A');
        } else {

        }
    }

    template<class T>
    int getSizeTemplateFunc(T character) {
//        cout << "TYPE ID " << typeid(character).name() << endl;
//        cout << "Size of --> " << sizeof(character) << endl;
    }


};

//template<typename T>
// T generatedCharacterToClass(char generated) {
//
////std::variant<A,B,C,D,E,F,G,R,S> generatedCharacterToClass(char generated) {
//    char generatedUppercased = toupper(generated);
//    if(A().getName() == generatedUppercased){
//        return A();
//    }else if(B().getName() == generatedUppercased){
//        return B();
//    }else if(C().getName() == generatedUppercased){
//        return C();
//    }else if(D().getName() == generatedUppercased){
//        return D();
//    }else if(E().getName() == generatedUppercased){
//        return E();
//    }else if(F().getName() == generatedUppercased){
//        return F();
//    }else if(G().getName() == generatedUppercased){
//        return G();
//    }else if(R().getName() == generatedUppercased){
//        return R();
//    }else{
//        return S();
//    }
//};

//void generatedCharacterToClassCaster( char generated, std::any matchedClass){
//    char generatedUppercased = toupper(generated);
//    // DONT DO ANY JUST CAST FUCKING IDIOT
//    if (A().getName() == generatedUppercased) {
//       any_cast<A>(matchedClass);
//    } else if (B().getName() == generatedUppercased) {
//        matchedClass = any_cast<B>(matchedClass);
//    } else if (C().getName() == generatedUppercased) {
//        matchedClass = any_cast<C>(matchedClass);
//    } else if (D().getName() == generatedUppercased) {
//        matchedClass = any_cast<D>(matchedClass);
//    } else if (E().getName() == generatedUppercased) {
//        matchedClass = any_cast<E>(matchedClass);
//    } else if (F().getName() == generatedUppercased) {
//        matchedClass = any_cast<F>(matchedClass);
//    } else if (G().getName() == generatedUppercased) {
//        matchedClass = any_cast<G>(matchedClass);
//    } else if (R().getName() == generatedUppercased) {
//        matchedClass = any_cast<R>(matchedClass);
//    } else {
//        matchedClass = any_cast<S>(matchedClass);
//    }
//}
template<class T>
T generatedCharacterToClassCaster( char generated){
    char generatedUppercased = toupper(generated);
    // DONT DO ANY JUST CAST FUCKING IDIOT
    if (A().getName() == generatedUppercased) {
        return A();
    } else if (B().getName() == generatedUppercased) {
        return B();
    } else if (C().getName() == generatedUppercased) {
        return C();
    } else if (D().getName() == generatedUppercased) {
        return D();
    } else if (E().getName() == generatedUppercased) {
        return E();
    } else if (F().getName() == generatedUppercased) {
        return F();
    } else if (G().getName() == generatedUppercased) {
        return G();
    } else if (R().getName() == generatedUppercased) {
        return R();
    } else {
        return S();
        //terminate if s condition, or R dont rememer
    }
}

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

//char MYgenerate(int seed) {
//    // TODO Put Seed In Function blah blah blah
//    std::random_device rd;
//    std::uniform_int_distribution<int> dist(0, 8);
//    int random_die_roll = dist(rd);
////    cout << random_die_roll <<endl;
//    char generatedCharacter;
//    switch (random_die_roll) {
//        case (0):
//            generatedCharacter = 'A';
//            break;
//        case (1):
//            generatedCharacter = 'B';
//            break;
//        case (2):
//            generatedCharacter = 'C';
//            break;
//        case (3):
//            generatedCharacter = 'D';
//            break;
//        case (4):
//            generatedCharacter = 'E';
//            break;
//        case (5):
//            generatedCharacter = 'F';
//            break;
//        case (6):
//            generatedCharacter = 'G';
//            break;
//        case (7):
//            generatedCharacter = 'R';
//            break;
//        case (8):
//            generatedCharacter = 'S';
//            break;
//    }
//    cout << generatedCharacter << endl;
//    cout << " size of : " << sizeof(generatedCharacter) << endl;
//    return generatedCharacter;
//}


#endif //ASS3ASS3_KNAPSACK_H
