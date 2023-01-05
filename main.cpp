#include "stack.h"

int main()
{
    stack S;
    infotype x;

    createStack_1301213355(S);
    push_1301213355(S, 'G');
    push_1301213355(S, 'N');
    push_1301213355(S, 'U');
    push_1301213355(S, 'D');
    push_1301213355(S, 'N');
    push_1301213355(S, 'A');
    push_1301213355(S, 'B');
    push_1301213355(S, 'O');
    push_1301213355(S, 'L');
    push_1301213355(S, 'A');
    push_1301213355(S, 'H');
    printInfo_1301213355(S);
    cout << endl;

    pop_1301213355(S);
    pop_1301213355(S);
    pop_1301213355(S);
    pop_1301213355(S);
    printInfo_1301213355(S);
}
