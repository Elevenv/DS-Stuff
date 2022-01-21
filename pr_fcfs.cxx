#include<iostream>
#include<queue>
#include<set>
using namespace std;

int page_faults(int pages[],int sop,int frames){
    int pf = 0;
    set<int> s;
    queue<int> q;
    for(int i=0;i<sop;i++){
        if(s.size()<frames){
            if(s.find(pages[i])==s.end()){
                s.insert(pages[i]);
                pf++;
                q.push(pages[i]);
            }
        }
        else{
            if(s.find(pages[i]) == s.end()){
                int val = q.front();
                q.pop();
                s.erase(val);
                s.insert(pages[i]);
                q.push(pages[i]);
                pf++;
            }
        }
    }
    return pf;
}

int main(){
    int pages[]={7,0,1,2,0,3,0,4,2,3,0,3,2};
    int sop = sizeof(pages)/sizeof(pages[0]);
    int frames = 4;
    cout<<"Frames are : "<<frames<<endl;
    int pf = page_faults(pages,sop,frames);
    cout<<"Page faults are : "<<pf<<endl;
    cout<<"Page hits are : "<<sop-pf;

    return 0;
}