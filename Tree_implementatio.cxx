#include<iostream>
using namespace std;
int min_value,min_counter=0;
struct Node{
    int data;
    Node *left,*right;
}*root=NULL,*temp=NULL;

void insert(int no_of_ele){
    int value;
    while(no_of_ele !=0){
        if(root == NULL){
            root = new Node;
            cout<<"\nEnter value of root node : ";
            cin>>root->data;
            root->left = NULL;
            root->right = NULL;
        }
        else{
            temp = root;
            cout<<"\nEnter Value of node : ";
            cin>>value;
            while(true){
                if(value < temp->data){
                    if(temp->left == NULL){
                        temp->left = new Node;
                        temp = temp->left;
                        temp->data = value;
                        temp->left = NULL;
                        temp->right = NULL;
                        cout<<"\nValue enetered in left...";
                        break;
                    }
                    else if(temp->left !=NULL){
                        temp = temp->left;
                    }
                }
                else if (value > temp->data){
                    if(temp->right ==NULL){
                        temp->right = new Node;
                        temp = temp->right;
                        temp->data = value;
                        // cout<<"Last if"<<temp->data;
                        temp->left = temp->right = NULL;
                        cout<<"\nValue entered in right...";
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
        if(min_counter==0)
            min_value = temp->data;
        min_counter = 1;
        cout<<temp->data<<"  ";
        // cout<<temp->data<<" ";
        display(temp->right);
    }
}
int height(Node *temp){
    if(temp == NULL)
        return -1;
    else{
        int left_side;
        int right_side;
        left_side = height(temp->left);
        right_side = height(temp->right);

        if(left_side > right_side)
            return left_side + 1;
        else
            return right_side + 1;
    }
}
bool Search_value(int value,Node *temp){
    if(temp == NULL)
        return false;
    if(temp->data==value)
        return true;
    bool res1 = Search_value(value,temp->left);
    if(res1)
        return true;
    bool res2 = Search_value(value,temp->right);
    return res2;
}

int main(){
    // Node node;
    int choice,no_of_ele,value_to_be_search;
    while(choice!=6){
        cout<<"\n1.Add Node";
        cout<<"\n2.Display Tree";
        cout<<"\n3.Hieght of Tree";
        cout<<"\n4.Minimum value in tree";
        cout<<"\n5.Search a Value";
        cout<<"\n6.Exit";
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
        else if(choice==3)
            cout<<"Height of tree is : "<<height(root);
        else if(choice==4)
            cout<<"Minumum data Value in Tree is : "<<min_value;
        else if(choice==5){
            cout<<"\nEnter Value to be searched : ";
            cin>>value_to_be_search;
            if(Search_value(value_to_be_search,root) == true)
                cout<<endl<<value_to_be_search<<" Found";
            else
                cout<<endl<<value_to_be_search<<" Not found";
        }
    }
}               