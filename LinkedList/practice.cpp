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
        }else{
            Node* temp=head;
            while(temp->ptr!=NULL){
                temp=temp->ptr;
            }
            tail=temp;
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
    void searchElement(int val){
        Node*temp;
        temp = head ;
        while(temp!=NULL){
            if (temp->data==val){
                cout<<"element present";
                return;
            }
            temp=temp->ptr;
        }
    
            cout<<"element is not found";
        

    }
    void insertNodeAtAnyPosition(int pos, int val ){
        Node*temp;
        temp = head ;
        Node*newnode=new Node(val);
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->ptr;
        }
        
        if(pos>cnt || pos<0){
            cout<<"invalid pos";
            return;
        }
        if(pos==0){
            addFront(val);
            return;
        }
        temp=head;
        int i=0;
        while (i<pos-1){
            temp=temp->ptr;
            i++;
        }
        newnode->ptr=temp->ptr;
        temp->ptr=newnode;
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
    // list.deleteBack();
    // list.deleteFront();
    list.insertNodeAtAnyPosition(3,15);
    list.printList();
}