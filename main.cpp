#include <iostream>
#include <string>
#include "queue.h"
using namespace std;

int main () {
    Queue<int> queue;

    for (int i = 0; i<5; i++) {
        queue.push(i*2);
    }

    cout << queue.pop() << endl;
    cout << queue.pop() << endl;
    cout << "--------------------" << endl;

    queue.display();

    return 0;
}
