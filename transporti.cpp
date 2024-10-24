#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int ardhja;
    float cmimi;
    cout<<"Tregoni menyren e ardhjes (shkruaj: 1 - kembe, 2 - transport publik ose 3 - me veture): ";
    cin>>ardhja;
    // if(ardhja==1)
    //     cmimi=0;
    // else if(ardhja==2)
    //     cmimi=0.8;
    // else if(ardhja==3)
    //     cmimi=4.5;
    // else
    //     cout<<"Nuk ekziston nje mundesi e tille e ardhjes!\n";
    switch(ardhja){
        case 1:
            cmimi=0;
            break;
        case 2: 
            cmimi=0.8;
            break;
        case 3:
            cmimi=4.5;
            break;
        default:
            cout<<"Nuk ekziston nje mundesi e tille e ardhjes!\n";
    }

    if(ardhja==1||ardhja==2||ardhja==3)
        cout<<"\x80mimi \x89sht\x89: "<<cmimi<<"\x24"<<endl;;
    return 0;
}