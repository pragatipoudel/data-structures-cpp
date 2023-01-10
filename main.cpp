#include <iostream>
#include <string>
#include "dynamic_array.h"
using namespace std;

int main () {
    // DynamicArray<int> arr;
    // try {
    //     for (int i = 0; i < 100; i++) {
    //         arr.append(i*3);
    //     }
    //     // arr.display();

    //     // arr[1]

    //     arr[1] = -6;
    //     arr.insert(1, 8);
    //     arr.remove(1);
    //     arr.display();
    // } catch (char const* s) {
    //     cout << s << endl;
    // }

    DynamicArray<string> arr2;
    arr2.append("hey ho");
    arr2.append("world");
    arr2.display();
    return 0;
}
