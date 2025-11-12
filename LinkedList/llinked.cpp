#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

class List {
public:
    Node *head, *tail;

    // Constructor should be public
    List() {
        head = NULL;
        tail = NULL;
    }

    // Add element at the front
    void addElementInFront(int val) {
        Node *newnode = new Node(val);

        if (head == NULL) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }

    // Add element at the back
    void addElementInBack(int val) {
        Node *newnode = new Node(val);

        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    // Print the list
    void printList() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List l;
    l.addElementInFront(10);
    l.addElementInFront(20);
    l.addElementInBack(30);
    l.addElementInBack(40);

    l.printList();
    return 0;
}
