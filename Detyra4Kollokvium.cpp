#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Shkruani vleren e numrit n: ";
    cin>>n;
    int s=0;
    for(int i=1;i<=n;i++){
        s=s+i;
        if(i%3==0){
            s=s-5;
        }
    }
    cout<<"Rezultati i arritur në fund të programit: "<<s<<endl;


    return 0;
}