#include<iostream>
using namespace std;
struct Node{
    public:
        int data;
        Node *next;
};
int main(){
    int ch;
    struct Node *head,*temp,*newNode;
    head = 0;
    do
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        cout<<"Enter data : ";
        cin>>newNode->data;
        newNode->next = 0;
        if(head == 0)
            head = temp = newNode;
        else{
            temp->next = newNode;
            temp = newNode;
        }   
        cout<<endl<<newNode->data<<"  Inserted succesfully.";
        cout<<"\nDo you want to add more data then press 1 else press 0\t";
        cin>>ch;
    } while (ch);
    temp = head;
    cout<<"Linked list data is :";
    while (temp != 0)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }    
    cout<<endl;
}