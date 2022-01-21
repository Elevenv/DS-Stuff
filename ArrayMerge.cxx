
#include<iostream>
using namespace std;
int main(){
    int a[3];
    for(int i=0;i<3;i++){
        cin >>a[i];
    }
    int b[3];
    int c[6];
    cout<<"\n 2nd array \n";
    for(int j=0;j<3;j++){
        cin>>b[j];
        c[j] = a[j];
    }
    for(int k=3,i=0;i<3 && k<6;i++,k++){
        c[k] = b[i];
        // c[i+3] = b[i];
    }
    for(int i=0;i<6;i++)
        cout<<c[i]<<"\t";
}

