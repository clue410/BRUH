#include "Knapsack.h"
#include "collect.h"

class A;
class B;
class C;
class D;
class E;
class F;
class G;
class R;
class S;
//vector<std::any> classesCollection;
int main(int argc, char **argv) {
    if (validateArguments(argc, argv[1], argv[2], argv[3]) != true) {
        abort();
    } else {
//classesCollection.push_back("meow");
//classesCollection.push_back(1);
//classesCollection.push_back(A());
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





        Knapsack knapsack;
//        object objA = knapsack.getSizeTemplateFunc('a');
        knapsack.getSizeTemplateFunc('b');
        knapsack.getSizeTemplateFunc('c');
        S baseClassin;
//        generatedCharacterToClassCaster('a',matchedClassA);
//        matchedClass = generatedCharacterToClassCaster('b',matchedClass);
        auto aObj = generatedCharacterToClassCaster<>('d');
        auto bObj = generatedCharacterToClassCaster<>('b');



        cout << "A:" << sizeof(aObj) << endl;
        cout << "MEOW MEOW MOEW" <<endl;
        cout << "B:" << sizeof(bObj) << endl;
//        Knapsack.pushToKnapsack(aObj);
//        Knapsack.pushToKnapsack(bObj);
//        cout << typeid(A).name() <<endl;
//        cout << typeid(matchedClassA).name() <<endl;
    }

}
