#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    char v='A';
    cout<<setw(6)<<setfill('-')<<left<<v<<endl;
    cout<<setw(6)<<setfill('-')<<left<<v<<v<<endl;
    return 0;
}