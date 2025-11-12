#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *pre;
    Node(int val)
    {
        data = val;
        next = NULL;
        pre = NULL;
    }
};
class doubleCircularLinkedList
{
public:
    Node *head, *tail;
    doubleCircularLinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void addInFront(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            head->next = newnode;
            head->pre = newnode;
        }
        newnode->next = head;
        newnode->pre = tail;
        head->pre = newnode;
        tail->next = newnode;
        head = newnode;
    }
    void addInBack(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            head->next = newnode;
            head->pre = newnode;
        }
        else
        {
            newnode->pre = tail;
            newnode->next = head;
            head->pre = newnode;
            tail->next = newnode;
            tail = newnode;
        }
    }
    void deleteFromFront()
    {
        if (head == NULL)
        {
            cout << "No element is present ";
        }
        else if (head->next == head)
        {
            Node *temp = head;
            head = NULL;
            tail = NULL;
            delete temp;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            head->pre = tail;
            tail->next = head;
            temp->pre = NULL;
            temp->next = NULL;
            delete temp;
        }
    }
    void deleteFromBack()
    {
        if (head == NULL)
        {
            cout << "No element is present ";
        }
        else if (tail->next == tail)
        {
            Node *temp = head;
            head = NULL;
            tail = NULL;
            delete temp;
        }
        else
        {
            Node *temp = tail;
            tail = tail->pre;
            tail->next = head;
            head->pre = tail;
            temp->next = NULL;
            temp->pre = NULL;
            delete temp;
        }
    }
    void print()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "NULL" << endl;
            return;
        }
        cout << temp->data << " -> ";
        temp = temp->next;
        while (temp != head)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
    void searchElement(int target)
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "NULL" << endl;
            return;
        }
        if (temp->data == target)
        {
            cout << "element found";
            return;
        }
        temp = temp->next;
        while (temp != head)
        {
            if (temp->data == target)
            {
                cout << "element found";
                return;
            }
            temp = temp->next;
        }

        cout << "element not found";
    }
};
int main()
{
    doubleCircularLinkedList ll;
    ll.addInFront(34);
    ll.addInBack(35);
    ll.addInBack(356);
    ll.addInBack(345);
    ll.addInBack(322);
    ll.addInBack(673);
    ll.deleteFromBack();
    ll.deleteFromFront();
    ll.print();
}