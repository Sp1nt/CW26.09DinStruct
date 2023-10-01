#include "STEK.h"
#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

int main()
{
    Stack stack;
    char inp[100];
    cout << "Input the line with brackets: ";
    cin.getline(inp, sizeof(inp));

    if (stack.CheckBrackets(inp)) {
        cout << "The parentheses are placed correctly." << endl;
    }
    else {
        cout << "The parentheses are placed incorrectly." << endl;
    }

    return 0;
}