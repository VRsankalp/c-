#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class circularLinkedList{
    public:
    Node*head , *tail;
    circularLinkedList(){
        head = NULL;
        tail =NULL;
    }
   
    void insertInFront(int val){
        Node*newnode = new Node(val);
        if(head == NULL){
            head = newnode;
            tail = newnode ;
            tail->next=head ;
            
        }
        else {
             newnode->next=head ;
             head = newnode;
             tail->next =head;

        }

    } void printLinkedList(){
        if (head == NULL){
            cout<<"list is empty ";
            return;
        }
        else {
            Node*temp=head;
            cout<<head->data<<"->";

        }
    }
    void insertAtBack(int val ){
        Node*newnode = new Node(val);
         if(head == NULL){
            head = newnode;
            tail = newnode ;
            tail->next=head ;
            
        }
        else{
            newnode->next=head;
            tail->next=newnode;
            tail = newnode;

             
        }

    }
    void searchData(int target ){
        Node*temp = head ;
        if(head->data== target){
            cout<<"element is found";
        }else {
            while(temp->next!=head){
                if(temp->data=target){
                    cout<<"element is found";
                    return;
                }

            }
            
        }

    }
    void deleteFront(){
        if(head == NULL){
            cout<<"List is empty";
        }else if(head == NULL){
            delete head ;
            head = tail = NULL;
        }else{
            Node*temp = head ;
            head = head->next;
            tail->next = NULL;
            temp->next=NULL;
            delete temp;
        }

    }
    void deleteFromBack(){
        if(head == NULL){
            cout<<"List is empty";
        }else if(head == NULL){
            delete head ;
            head = tail = NULL;
        }else{
            Node*temp = head ;
            while(temp->next!=head){
                
            }
        }

    }
};
int main(){
    circularLinkedList li;
    li.insertInFront(34);
    li.insertAtBack(56);
    li.insertAtBack(23);
    li.insertAtBack(22);
    li.printLinkedList();
}

