#include<iostream>
#include<iomanip>
using namespace std;
class StudDatabase{
    public:
        int roll_no,mobile_no;
        string name,div,bld_grp,address,dob;
        StudDatabase(){
        }
        // StudDatabase(StudDatabase *db){
        //     // name = db->name;
        //     // roll_no = db->roll_no;
        //     // div = db->div;
        // }
    void getdata(){
            cout<<"Enter Name : ";
            cin>>name;
            cout<<"Enter Roll No : ";
            cin>>roll_no;
            cout<<"Enter Division : ";
            cin>>div;
            cout<<"Enter blood group : ";
            cin>>bld_grp;
            cout<<"Enter mobile no : ";
            cin>>mobile_no;
            cout<<"Enter address : "; 
            cin>>address;
            cout<<endl;
    }
    friend void display(StudDatabase display);
    ~StudDatabase(){
        // cout<<"\nObject is Destroyed "<<name;
    }
};
void display(StudDatabase display){
        cout<<"\n"<<display.name<<"\t"<<display.roll_no<<"\t"<<display.div<<"\t"<<display.address<<"\t"<<display.bld_grp<<"\t"<<display.mobile_no<<endl;
    // cout<<endl<<display.name<<setw(15)<<display.roll_no<<setw(6)<<display.div<<setw(5)<<display.address<<setw(20)<<display.bld_grp<<setw(4)<<display.mobile_no<<setw(15);
}
int main(){
    StudDatabase student1, *ptr[1];
    int n;
    cout<<"How many obj u wanna create : ";
    cin>>n;
    for(int i=0;i<n;i++){
        ptr[i] = new StudDatabase();
        ptr[i]->getdata();
    }
    cout<<"\n************************************* Student Database ****************************************** : "<<endl;
    cout<<endl<<"Name\t"<<"Roll No\t"<<"Division\t"<<"Address\t"<<"Blood group\t"<<"Mobile No\t"<<endl;
    for(int i=0;i<n;i++){
        
        display(*ptr[i]);
    }
    cout<<endl;
    // for(int j=0;j<n;j++)
    //     delete ptr[j];
    // cout<<"\nObjects deleted. ";
    return 0;
}