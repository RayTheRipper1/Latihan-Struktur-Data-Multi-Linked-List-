#include "stack.h"

void createStack_1301213355(stack &S){
    Top(S) = nil;
}

bool isEmpty_1301213355(stack S){
    if(Top(S) == nil){
        return 1;
    }else{
        return 0;
    }
}

bool isFull_1301213355(stack S){
    if(Top(S) == 15){
        return 1;
    }else{
        return 0;
    }
}

void push_1301213355(stack &S, infotype x){
    if(isFull_1301213355(S)){
        cout << "Stack penuh" << endl;
    }else{
        Top(S) = Top(S) + 1;
        info(S)[Top(S)] = x;
    }
}

int pop_1301213355(stack &S){
    infotype P;

    if(isEmpty_1301213355(S)){
        cout << "Stack kosong" << endl;
    }else{
        P = info(S)[Top(S)];
        Top(S) = Top(S) - 1;
    }
}

void printInfo_1301213355(stack S){
    for(int i = Top(S); i >= 1; i--){
        cout << info(S)[i] << " ";
    }
}
