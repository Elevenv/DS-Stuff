#include<iostream>
using namespace std;
void Bsort(int arr[],int size){
    for(int step=0;step<size-1;step++){
        for(int i=0;i<size;i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    cout<<"Sorted array is :  ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\t";    
    cout<<endl;
}
int main(){
    int arr[5] = {32,21,54,33,5},size=5;
    Bsort(arr,size);
}
