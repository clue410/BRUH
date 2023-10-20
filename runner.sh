#!/bin/bash
g++ -std=c++17 -Wall -o Knapsack Knapsack.cpp libKnap.a
./Knapsack 10 10 10
