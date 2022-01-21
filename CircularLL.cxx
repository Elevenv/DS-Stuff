#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
}*tail;

int main(){
    int ch;
    struct Node *temp,*newNode;
    // head = 0;
    do{
        newNode = (struct Node *)malloc(sizeof(struct Node));
        cout<<"Enter Data: ";
        cin>>newNode->data;
        newNode->next = 0;
        if(tail == 0){
            tail = newNode;
            tail->next = newNode;
        }
        else{
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }
        // tail->next = head;
        cout<<newNode->data<<"  entered succesfully.";
        cout<<"Enter choice: ";
        cin>>ch;
    }while(ch);
    cout<<"\nlinked list data is ";
    temp = tail->next;
    while (temp->next != tail->next)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}