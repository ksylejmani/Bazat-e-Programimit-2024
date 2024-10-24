#include<iostream>
using namespace std;
int main(){
    int regjioni, numri_veturave;
    cout<<"Jepe rajonin (1-Prishtine, 2-Mitrovice, 3-Peje, 4-Prizren, 5-Ferizaj, 6-Gjilan ose 7-Gjakove): ";
    cin>>regjioni;
    switch (regjioni)
    {
    case 1:
        numri_veturave=100000;
        break;
    case 2:
        numri_veturave=60000;
        break;
    case 3: 
        numri_veturave=75000;
        break;
    case 4:
        numri_veturave=80000;
        break;
    case 5:
        numri_veturave=70000;
        break;
    case 6:
        numri_veturave=55000;
        break;
    case 7:
        numri_veturave=40000;
        break;
    default:
        cout<<"Nuk ekziston nje regjion i tille!";
        numri_veturave=-1;
        break;
    }
    if(numri_veturave!=-1)
        cout<<"Numri i veturave: "<<numri_veturave<<endl;
    return 0;
}