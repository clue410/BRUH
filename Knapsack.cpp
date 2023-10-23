#include "Knapsack.h"
#include "collect.h"

int main(int argc, char **argv) {
    if (validateArguments(argc, argv[1], argv[2], argv[3]) != true) {
        abort();
    } else {
        int size = stoi(argv[1]);
        int seed = stoi(argv[2]);
        int durability = stoi(argv[3]);
        cout << "Intended Size"<< sizeof(A) << endl;
        cout << "Intended Size"<< sizeof(B) << endl;
        cout << "Intended Size"<< sizeof(C) << endl;
        cout << "Intended Size"<< sizeof(D) << endl;
        cout << "Intended Size"<< sizeof(E) << endl;
        cout << "Intended Size"<< sizeof(F) << endl;
        cout << "Intended Size"<< sizeof(G) << endl;
        cout << "Intended Size"<< sizeof(R) << endl;
        cout << "Intended Size"<< sizeof(S) << endl;
//        for (int iteration = 0; iteration <= durability; iteration++) {
//            int currentCapacity;
//            char generated = generate(seed);
//            auto classFound = generatedCharacterToClass<> (generated);
//            classFound
//
//        }

//        auto meow = generatedCharacterToClass('A');
        auto abc  = generatedCharacterToClass('A');
        A a;
        B b;
        C c;
//        std::variant<B,C> meowmeow = 'B';

        Knapsack knapsack;
        knapsack.getSizeTemplateFunc(a);
        knapsack.getSizeTemplateFunc(b);
        knapsack.getSizeTemplateFunc(c);
        knapsack.getSizeTemplateFunc(abc);
    }

}
