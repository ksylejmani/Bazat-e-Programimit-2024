#include<iostream>
#include<iomanip>
int main(){
    int a,b,c; // int -> 4 byte, ne total 12 byte
    std::cout<<"Cakto vlerat p\x89r a dhe b: ";
    std::cin>>a>>b;
    // c=(b<a)?(a+b):(0);
    // if(b<a){
    //     c=a+b;
    // }
    // else{
    //     c=0;
    // }
    if(b<a)
        c=a+b;
    else
        c=0;
    std::cout<<"Vlera c= "
        <<std::setw(10) <<std::setfill('#') <<std::left <<c
        <<std::endl;
    return 0;
}