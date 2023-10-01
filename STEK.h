#include <iostream>
#include <cstring>
#include <time.h>
using namespace std;

class Stack {
    enum { EMPTY = -1, FULL = 100 };
    char st[FULL + 1];
    int top;

public:
    Stack();
    void Push(char c);
    char Pop();
    bool IsEmpty();
    bool IsFull();
    int GetCount();
    char GetTop();
    bool CheckBrackets(const char*);
};


