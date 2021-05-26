#include<iostream>
using namespace std;
struct Node{
    string keyword,meaning1,meaning2;
    Node *left,*right;
}*root=NULL,*temp=NULL;

void insert(int no_of_ele){
    string value,m1,m2;
    while(no_of_ele !=0){
        if(root == NULL){
            root = new Node;
            cout<<"\nEnter value of root node : ";
            cin>>root->keyword;
            cout<<"Enter meaning1 : ";
            cin>>root->meaning1;
            cout<<"Enter Meaning2 : ";
            cin>>root->meaning2;
            root->left = NULL;
            root->right = NULL;
        }
        else{
            temp = root;
            cout<<"\nEnter Value of node : ";
            cin>>value;
            cout<<"Enter Meaning1 : ";
            cin>>m1;
            cout<<"Enter meaning2 : ";
            cin>>m2;
            while(true){
                if(value < temp->keyword){
                    if(temp->left == NULL){
                        temp->left = new Node;
                        temp = temp->left;
                        temp->keyword = value;
                        temp->meaning1 = m1;
                        temp->meaning2 = m2;
                        temp->left = temp->right = NULL;
                        break;
                    }
                    else if(temp->left !=NULL){
                        temp = temp->left;
                    }
                }
                else if (value > temp->keyword){
                    if(temp->right ==NULL){
                        temp->right = new Node;
                        temp = temp->right;
                        temp->keyword = value;
                        temp->meaning1 = m1;
                        temp->meaning2 = m2;
                        temp->left = temp->right = NULL;
                        break;
                    }
                    else if(temp->right !=NULL){
                        temp = temp->right;
                    }
                }
            }
        }
        no_of_ele--;
    } 
}
void display(Node *temp){
    if(temp != NULL){
        display(temp->left);
        cout<<"\nKeyword : "<<temp->keyword<<"  Meaning1 : "<<temp->meaning1<<"  Meaning2 : "<<temp->meaning2;
        display(temp->right);
    }
}

int main(){
    int choice,no_of_ele,value_to_be_search;
    while(choice!=3){
        cout<<"\n1.Add Node";
        cout<<"\n2.Display Tree";
        cout<<"\n3.Exit";
        cout<<"\nEnter Choice : ";
        cin>>choice;
        if(choice==1){
            cout<<"\nHow many element u want to add..";
            cin>>no_of_ele;
            insert(no_of_ele);
        }
        else if(choice==2){
            cout<<"\nPrinting element of tree :- ";
            display(root);
        }
    }
}               