//  Question Link :- https://www.codechef.com/learn/course/stacks-and-queues/LSTACKS/problems/STACK03



#include <bits/stdc++.h>
using namespace std;

#define STACK_MAX_SIZE 101
char stackArray[STACK_MAX_SIZE];
int stackTop = -1;

bool isStackEmpty() {
    return stackTop == -1;
}

bool isStackFull() {
    return stackTop >= STACK_MAX_SIZE - 1;
}

void pushToStack(char element) {
    // If stack is full (check using isFull function)
    // Then print "Stack is full"
    if(isStackFull()){
        cout << "Stack is full"<< endl;
        return;
    }
    // Otherwise add the next element at top + 1 and update top
    stackTop++;
    stackArray[stackTop] = element;
    
}

char popFromStack() {
    // If the stack is empty (check using isEmpty function)
    // Then print "Stack is empty" and return '-1'
    if(isStackEmpty()){
        cout << "Stack is empty" << endl;
        // return;
    }
    // Otherwise return the element at the top
    // But reduce top before returning the element
    char popp = stackArray[stackTop];
    stackTop--;
    return popp;
    
}

int main() {
    string inputString = "Hello, World!";
    int inputLength = inputString.length();

    // Push each character onto the stack
    for (int i = 0; i < inputLength; i++) {
        char currentChar = inputString[i];
        pushToStack(currentChar);
    }

    // Pop the characters from the stack to construct the reversed string
    string reversedString;
    while (!isStackEmpty()) {
        reversedString.push_back(popFromStack());
    }
    cout << reversedString << "\n";
    return 0;
}
