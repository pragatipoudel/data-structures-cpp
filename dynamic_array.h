#include <iostream>
using namespace std;

template <class T>
class DynamicArray {
    public:
        DynamicArray(){
            maxSize = 5;
            arr = new T[maxSize];
            n = 0;
        }

        void append(T x) {
            if (n == maxSize) {
                resize();
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

        int search(T x) {
            for (int j=0; j<n; j++) {
                if (arr[j] == x) {
                    return j;
                }
                
            }
            return -1;
        }

        void insert(int i, T x) {
            if (n == maxSize) {
                resize();
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
        
        ~DynamicArray() {
            delete[] arr;
        };

    private:
        T *arr;
        int n;
        int maxSize;

        void resize() {
            int newSize = 2 * maxSize;
            T *oldArr = arr;
            arr = new T[newSize];
            for (int i=0; i<maxSize; i++) {
                arr[i] = oldArr[i];
            }
            delete[] oldArr;
            maxSize = newSize;
        }

};