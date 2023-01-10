#include <iostream>
#include "static_array.h"
using namespace std;

int main () {
    StaticArray arr(20);
    try {
        arr.append(2);
        arr.append(-5);
        // arr.display();

        // arr[1]

        arr[1] = -6;
        arr.insert(1, 8);
        arr.remove(1);
        arr.remove(5);
        arr.display();
    } catch (char const* s) {
        cout << s << endl;
    }
    return 0;
}
