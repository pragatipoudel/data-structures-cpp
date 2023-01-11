#include "linked_list.h"

template <class T>
class Queue {
    public:
        Queue() {
            head = NULL;
            tail = NULL;
            count = 0;
        }

        void push(T x) {
            Node<T> *newNode = new Node<T>;
            newNode->info = x;
            newNode->link = NULL;

            if (head == NULL) {
                head = newNode;
                tail = newNode;
                count++;
                return;
            }
            tail->link = newNode;
            tail = newNode;
            count++;

    
        }

        T pop() {
            Node<T> *q = head;
            head = q->link;
            T value = q->info;
            delete q;
            if (head == NULL) {
                tail = NULL;
            }
            count--;
            return value;
        }

        void display() {
            Node<T> *p = head;
            while(p) {
                cout << p->info << endl;
                p = p->link;
            }
        }

        ~Queue() {
            Node<T> *p;
            while(head) {
                p = head;
                head = head->link;
                delete p;
            }
            count = 0;

        }
    
    private:
        Node<T> *head;
        Node<T> *tail;
        int count;
};