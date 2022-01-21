#include<iostream>
using namespace std;

void division(int temp[],int gen[],int dataBits,int keyBits){
    for(int i=0;i<dataBits;i++){
        if(gen[0]==temp[i]){
            for(int j=0,k=i;j<keyBits+1;j++,k++){
                if(!(temp[k]^gen[j]))
                    temp[k]=0;
                else
                    temp[k]=1;
            }
        }
    }
}
int main(){
    int dataBits,keyBits,message[20],gen[20],temp[20];
    cout<<"Enter no of data bits : ";
    cin>>dataBits;
    cout<<"Enter no of key bits : ";
    cin>>keyBits;
    cout<<"Enter message : ";
    for(int i=0;i<dataBits;i++)
        cin>>message[i];
    cout<<"Enter Generator : ";
    for(int i=0;i<keyBits;i++)
        cin>>gen[i];
    keyBits--;
    for(int i=0;i<keyBits;i++)
        message[dataBits+i] = 0;
    for(int i=0;i<keyBits+dataBits;i++)
        temp[i] = message[i];
    division(temp,gen,dataBits,keyBits);
    cout<<"CRC : ";
    for(int i=0;i<keyBits;i++){
        cout<<temp[dataBits+i]<<" ";
        message[dataBits+i]=temp[dataBits+i];
    }
    cout<<endl<<"Transmitted message : ";
    for(int i=0;i<dataBits+keyBits;i++)
        cout<<message[i]<<" ";
    cout<<endl<<"At Receiver end : "<<endl;
    cout<<"Enter Received message : ";
    for(int i=0;i<dataBits+keyBits;i++)
        cin>>message[i];
    for(int i=0;i<keyBits+dataBits;i++)
        temp[i] = message[i];
    division(temp,gen,dataBits,keyBits);
    for(int i=0;i<keyBits;i++){
        if(temp[dataBits+i]){
            cout<<"Error detected in received message..";
            return 0;
        }
    }
    cout<<"No error in received message..";
    cout<<endl<<"Received message : ";
    for(int i=0;i<dataBits;i++)
        cout<<message[i]<<" ";
    return 0;
}