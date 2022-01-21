#include<iostream>
using namespace std;
int main(){
    int i,j,tat[10],bt[10],wt[10],avtat=0,avwt=0,nop;
    wt[0] = 0;
    cout<<"Enter no of processes : ";
    cin>>nop;
    cout<<"Enter process brust time :\n";
    for(i=0;i<nop;i++){
        cout<<"P["<<i+1<<"] : ";
        cin>>bt[i];
    }
    for(i=1;i<nop;i++){
        wt[i]=0;
        for(j=0;j<i;j++){
            wt[i] += bt[j];
        }
    }
    cout<<"\nProcess\t\tBrust Time\tWaiting Time\tTurnaround Time";
    for(i=0;i<nop;i++){
        tat[i] = bt[i] + wt[i];
        avwt += wt[i];
        avtat += tat[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
    }
    avwt/=i;
    avtat/=i;
    cout<<"\nAverage waiting Time : "<<avwt;
    cout<<"\nAverage Turnaround time : "<<avtat<<endl;
    return 0;
}