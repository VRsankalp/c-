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
class doubleLinkedList{
public:
    Node *head, *tail;
    doubleLinkedList() {
        head = NULL;
        tail = NULL;
    }
    void addInFront(int val){
        Node *newnode = new Node(val);
        if (head == NULL){
            head = tail = newnode;
        }
        else{
            newnode->next = head;
            head->pre = newnode;
            head = newnode;
        }
    }
    void addInBack(int val){
        Node *newnode = new Node(val);
        if (head == NULL){
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            newnode->pre = tail;
            tail = newnode;
        }
    }
    void addFromGivenIndex(int pos, int val)
    {
        Node *temp = head;
        Node *newnode = new Node(val);

        for (int i = 0; i < pos - 1; i++)
        {
            if (head == NULL)
            {
                cout << "out Of Index ";
                return;
            }
            temp = temp->next;
        }
        if(temp->next==NULL){
            addInBack(val);
        }
        newnode->pre = temp;
        newnode->next = temp->next;
        temp->next->pre=newnode;
        temp->next = newnode;
        
    }
    void printDoubleLinkedList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "<->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void printReverseDoubleLinkedList()
    {
        Node *temp = tail;
        while (temp != NULL)
        {
            cout << temp->data << "<->";
            temp = temp->pre;
        }
        cout << "NULL" << endl;
    }
    void deleteFromFront()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "no   node ispresent ";
            return;
        }
        else
        {

            head = head->next;
            if (head == NULL) {
                delete temp;
                return;
            }
            temp->next = NULL;
            head->pre = NULL;
            delete temp;
        }
    }
    void deleteFromBack(){
        Node *temp = tail;
        if (tail == NULL){
            cout << "No ValuE is Present";
                return ;
        }
        else
        {
            tail = tail->pre;
            temp->pre = NULL;
            tail->next = NULL;
            delete temp;
            if (tail == NULL)
            {
                delete temp;
                return;
            }
        }
    }
    void searchData(int val){
        Node*temp = head ;
        while(temp!=NULL){
            if(temp->data==val){
                cout<<val<<"elemet is found \n";
                return;
            }
            temp=temp->next;

        }
        cout<<"key nOT found ";

    }
   
};
int main()
{
    doubleLinkedList li;
    li.addInFront(12);
    li.addInBack(23);
    li.addInBack(43);
    li.addInBack(34);
    li.addInBack(55);
    li.addInBack(53);
    li.addInBack(54);
    li.printDoubleLinkedList();
    li.printReverseDoubleLinkedList();
    li.deleteFromFront();
    li.printDoubleLinkedList();
    li.addFromGivenIndex(3,4878787);
    li.printDoubleLinkedList();
    
}
