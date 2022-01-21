#include<iostream>

using namespace std;
int main(){
    int a = 5,b = 10;
    cout<<a<<b;
    // a = a+b-a;
    a = a + b;
    b = a-b;
    a = a-b;
    cout<<a<<b;
}