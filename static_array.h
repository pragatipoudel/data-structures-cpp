#include <iostream>
using namespace std;

class StaticArray {
    public:
        StaticArray(int _maxSize){
            maxSize = _maxSize;
            arr = new int[maxSize];
            n = 0;
        }

        void append(int x) {
            if (n == maxSize) {
                throw "Maximum size of array reached";
            }
            arr[n] = x;
            n++;
        }

        void display() {
            for (int i=0; i<n; i++) {
                cout<<arr[i]<<"\n";
            }
        }

        int& operator[](int i) {
            return arr[i];
            
        }

        int length() {
            return n;
        }

        int search(int x) {
            for (int j=0; j<n; j++) {
                if (arr[j] == x) {
                    return j;
                }
                
            }
            return -1;
        }

        void insert(int i, int x) {
            if (n == maxSize) {
                throw "Maximum size of array reached";
            }
            for (int j=n-1; j>=i; j--) {
                arr[j+1] = arr[j];
            }
            arr[i] = x;
            n++;
        }

        void remove(int i) {
            if (i < 0 || i >= n) {
                throw "Index out of range";
            }
            for (int j=i; j<n; j++) {
                arr[j] = arr[j+1];
            }
            n--;
        }
        
        ~StaticArray() {
            delete[] arr;
        };

    private:
        int *arr;
        int n;
        int maxSize;

};