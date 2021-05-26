#include<iostream>
using namespace std;
int Bsearch(int[],int,int,int);
int main(){
    int a[5] = {10,12,15,20,25},ele,result,first,last;
    result = -1;
    first = 0;
    last = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<5;i++)
        cout<<a[i]<<"\t";
    cout<<"\nEnter element to be seach  ";
    cin>>ele;
    result = Bsearch(a,first,last,ele);
    if(result == -1)
        cout<<"\n item not found..";
    else
        cout<<"\n Item found at "<<result<<"th Location.";
}
int Bsearch(int a[],int first,int last,int ele){
        int mid;
        if(last>=first){    
            mid = (first + last)/2;
            if(ele == a[mid])
                return mid+1;
            else if(a[mid] > ele)
                return Bsearch(a,first,mid-1,ele);
            else
                return Bsearch(a,mid+1,last,ele);     
        }
        return -1;   
    }