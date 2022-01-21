#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;
struct node *temp;
struct node *newNode;

void enqueue(){
    int ele;
    cout<<"Enter ele to insert into queue..";
    cin>>ele;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = ele;
    newNode->next = NULL;
    if(front==NULL && rear==NULL)
        front=rear=newNode;
    else{
        rear->next = newNode;
        rear = newNode;
    }
    cout<<"\nElement insereted  "<<ele;
}
void dequeue(){
    temp = front;
    if(front==NULL)
        cout<<"Queue is Empty.";
    else{
        cout<<"Deleted item is  "<<temp->data;
        front = front->next;
        free(temp);
    }
}
void display(){
    newNode = front;
    if(front == NULL)
        cout<<"Queue is Empty. ";
    else{
        while(newNode != NULL){
            cout<<"\t"<<newNode->data;
            newNode = newNode->next;
        }
    }
}
int main(){
    int ch;
    do{
        cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
        cin>>ch;
        if(ch==1)
            enqueue();
        else if(ch==2)
            dequeue();
        else if(ch==3)
            display();
        else    
            exit(0);
    }while(ch<4);
    return 1;
}