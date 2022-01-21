#include<iostream>
#define size 5
using namespace std;

class Queue{
    private:
            int a[size],front,rear;
    public:
        Queue(){
            front=rear=-1;
        }

        void enqueue(int ele){
            if(rear == size-1)
                cout<<"Queue is Overflow..\n";
            else{
                    if(front==-1)
                        front = 0;
                    rear++;
                    a[rear] = ele;
                    cout<<ele<<"  Inserted..\n";
            }
        }

        void dequeue(){
            if(front == -1)
                cout<<"Queue is Underflow..\n";
            else{
                int num;
                num = a[front];
                front++;
                cout<<num<<"  Deleted..\n";
            }
        }
        void display(){
            if(front == -1)
                cout<<"Queue is underflow..\n";
            else{
                cout<<"Queue is : \n";
                for(int i=front;i<=rear;i++){
                    cout<<a[i]<<"\t";
                }
            }
        }
};
int main(){
    Queue q;
    int ch;
    do{    
        cout<<"\n 1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
        cin>>ch;
        if(ch==1){
            int ele;
                cout<<"Enter element : ";
                cin>>ele;
                q.enqueue(ele);
        }
        else if(ch==2)
            q.dequeue();
        else if(ch==3)
            q.display();
        else
            exit(2);
        // switch (ch){
        //     case 1:
        //         int ele;
        //         cout<<"Enter element : ";
        //         cin>>ele;
        //         q.enqueue(ele);
        //         break;
        //     case 2:
        //         q.dequeue();
        //         break;
        //     case 3:
        //         q.display();
        //         break;
        //     default:
        //         break;
        // }
    }while (ch<4); 
    return 0;
}