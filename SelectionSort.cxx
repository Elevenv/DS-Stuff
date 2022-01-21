#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void SelSort(int arr[],int size){
    for(int step=0;step<size-1;step++){
        int min_index = step;
        for(int i=step+1;i<size;i++){
            if(arr[i] < arr[min_index])
                min_index = i;
        }
        swap(&arr[min_index],&arr[step]);       //swap if minimum element found in array
    }
}
void print(int arr[],int size){
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\t";
}
int main(){
    int arr[] = {32,2,43,33,54};
    int size = sizeof(arr)/sizeof(arr[0]);          //calculating size of array
    SelSort(arr,size);
    cout<<"sorted array is : \n";
    print(arr,size);
}