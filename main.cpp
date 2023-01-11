#include <iostream>
#include <string>
#include "stack.h"
using namespace std;

int main () {
    Stack<int> stack;

    for (int i = 0; i<5; i++) {
        stack.push(i*2);
    }

    // cout << stack.pop() << endl;
    // cout << stack.pop() << endl;
    // cout << "--------------------" << endl;

    stack.displayReverse();
    cout << "------------------" << endl;
    stack.displayForward();

    return 0;
}
