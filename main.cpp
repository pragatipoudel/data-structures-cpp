#include <iostream>
#include <string>
#include "dynamic_array.h"
#include "linked_list.h"
using namespace std;

int main () {
    LinkedList<int> arr;
    try {
        for (int i = 0; i < 5; i++) {
            arr.append(i*3);
        }
        // arr.display();

        // arr[1]

        arr[1] = -6;
        // arr.remove(1);
        // arr.remove(0);
        arr.display();
    } catch (char const* s) {
        cout << s << endl;
    }

    LinkedList<string> arr2;
    arr2.append("hey ho");
    arr2.append("world");
    arr2.display();
    return 0;
}
