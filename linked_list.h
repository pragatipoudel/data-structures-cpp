#include<iostream>
using namespace std;

template <class T>
struct Node {
    T info;
    Node *link;

};

template <class T>
class LinkedList {
    public:
        LinkedList() {
            head = NULL;
            count = 0;
        }

        void insert(int i, T x) {
            if (i==0) {
                Node<T> *newNode = new Node<T>;
                newNode->info = x;
                newNode->link = head;
                head = newNode; 
                count++;
                return;
            }

            Node<T> *p = head;
            for (int j=1; j<i; j++) {
                p = p->link;
            }
            Node<T> *newNode = new Node<T>;
            newNode->info = x;
            newNode->link = p->link;
            p->link = newNode;
            count++;
        }

        void append(T x) {
            insert(count, x);
        }

        void display() {
            Node<T> *p = head;
            while(p) {
                cout << p->info << endl;
                p = p->link;
            }
        }

        void remove(int i) {
            if (i==0) {
                Node<T> *q = head;
                head = q->link;
                delete q;
                count--;
                return;
            }
            Node<T> *p = head;
            for (int j=0; j<i-1; j++) {
                p = p->link;
            }
            Node<T> *q = p->link;
            p->link = q->link;
            count--;
            delete q;
        }

        int length() {
            return count;
        }

        T& operator[](int i) {
            Node<T> *p = head;
            for (int j=0; p; j++) {
                if (i == j) {
                    return p->info;
                }
                p = p->link;
            }
            throw "Index out of bounds";
        }

        int search(T x) {
            Node<T> *p;
            int i;
            for (i=0, p = head; p; i++, p=p->link) {
                if (p->info == x) {
                    return i;
                }
            }
            return -1;
        }
        ~LinkedList() {
            Node<T> *p;
            while (head) {
                p = head;
                head = head->link;
                delete p;
            }
            count = 0;
        }
    private:
        Node<T> *head;
        int count;
};
