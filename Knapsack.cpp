#include "Knapsack.h"
#include "collect.h"

int main(int argc, char **argv) {
    if (validateArguments(argc, argv[1], argv[2], argv[3]) != true) {
        abort();
    } else {
        int size = stoi(argv[1]);
        int seed = stoi(argv[2]);
        int durability = stoi(argv[3]);
        default_random_engine engine;
        for (int iteration = 0; iteration <= durability; iteration++) {
            int currentCapacity;
            char generated = MYgenerate(seed);
            if(sizeof(generated) + currentCapacity >= size){
                printCondition(1,iteration,durability,generated);
                conditionalBehaviour(1,iteration,durability,generated);
            }else if(generated == 'S'){
                printCondition(2,iteration,durability,generated);
                conditionalBehaviour(2,iteration,durability,generated);
            }else if(generated == 'R'){
                printCondition(3,iteration,durability,generated);
                conditionalBehaviour(3,iteration,durability,generated);
            }
        }
    }

}
