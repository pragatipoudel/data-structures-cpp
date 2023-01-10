#include <iostream>
#include "dynamic_array.h"
using namespace std;

int main () {
    DynamicArray arr;
    try {
        for (int i = 0; i < 100; i++) {
            arr.append(i*3);
        }
        // arr.display();

        // arr[1]

        arr[1] = -6;
        arr.insert(1, 8);
        arr.remove(1);
        arr.display();
    } catch (char const* s) {
        cout << s << endl;
    }
    return 0;
}
