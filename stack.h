#include "linked_list.h"

template <class T>
class Stack {
    public:
        Stack() {
            count = 0;
            top = NULL;
        }

        void push(T x) {
            Node<T> *newNode = new Node<T>;
            newNode->info = x;
            newNode->link = top;
            top = newNode;
            count++;
        }

        T pop() {
            Node<T> *q = top;
            top = q->link;
            T value = q->info;
            delete q;
            count--;
            return value;
            
        }

        T peek() {
            return top->info;
        }
        

        void displayReverse() {
            Node<T> *p = top;
            while(p) {
                cout << p->info << endl;
                p = p->link;
            }
        }

        void displayForward() {
            displayNode(top);
        }

        ~Stack() {

        }

    private:
        int count;
        Node<T> *top;

        void displayNode(Node<T> *p) {
            if (p == NULL) {
                return;
            }
            displayNode(p->link);
            cout << p->info << endl;
        } 

};