#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *ptr; // We use Node because We have to store the address of next node whose type is Node

    Node(int d)
    {
        data = d;
        ptr = NULL;
    }
};

class List
{
public:
    Node *head, *tail;
    List()
    {
        head = NULL;
        tail = NULL;
    }
    void addFront(int val)
    {
        Node *newnode = new Node(val);
        newnode->ptr = head;
        if (head == NULL)
        {
            tail = newnode;
        }
        head = newnode;
    }
    void addBack(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            while (tail->ptr != NULL)
            {
                tail = tail->ptr;
            }
            tail->ptr = newnode;
        }
    }

    void deleteFront()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->ptr;
        temp->ptr = NULL;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete temp;
    }

    void deleteBack()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty" << endl;
            return;
        }
        Node *temp = head;
        while (temp->ptr->ptr != NULL)
        {
            temp = temp->ptr;
        }
        Node *temp1 = temp->ptr;
        temp->ptr = NULL;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete temp1;
    }

    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->ptr;
        }
        cout << "NULL";
    }
};

int main()
{
    List list;
    list.addFront(1);
    list.addFront(2);
    list.addBack(100);
    list.deleteBack();
    list.deleteFront();
    list.printList();
}