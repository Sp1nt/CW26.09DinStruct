#include "STEK.h"
#include <iostream>
Stack::Stack()
{
    top = EMPTY;
}

void Stack::Push(char c)
{
    if (!IsFull())
        st[++top] = c;
}

char Stack::Pop()
{
    if (!IsEmpty())
        return st[top--];
    else
        return 0;
}

bool Stack::IsEmpty()
{
    return top == EMPTY;
}

bool Stack::IsFull()
{
    return top == FULL;
}

int Stack::GetCount()
{
    return top + 1;
}

char Stack::GetTop()
{
    if (!IsEmpty())
        return st[top];
    else
        return 0;
}

bool Stack::CheckBrackets(const char* str) {
    Stack stack;
    int len = strlen(str);

    for (int i = 0; i < len; ++i) {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            stack.Push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (stack.IsEmpty())
            {
                return false;
            }
            if ((ch == ')' && stack.GetTop() != '(') ||
                (ch == '}' && stack.GetTop() != '{') ||
                (ch == ']' && stack.GetTop() != '['))
            {
                return false;
            }
            stack.Pop();
        }
    }
    return stack.IsEmpty();
}