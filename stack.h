#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define nil NULL
#include <iostream>
#define Top(S) S.Top
#define info(S) S.info
using namespace std;

typedef char infotype;

struct stack{
    infotype info[15];
    int Top;
};

void createStack_1301213355(stack &S);
bool isEmpty_1301213355(stack S);
bool isFull_1301213355(stack S);
void push_1301213355(stack &S, infotype x);
int pop_1301213355(stack &S);
void printInfo_1301213355(stack S);

#endif // STACK_H_INCLUDED
