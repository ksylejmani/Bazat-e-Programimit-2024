#include<iostream>
using namespace std;
struct Nxenesi{
    string emri,mbiemri,grupi;
    int ID, numri_lendeve;

    void lexo(){
        cout<<"Jepni emrin e nxenesit: ";
        cin>>emri;
        cout<<"Jepni mbiemrin e nxenesit: ";
        cin>>mbiemri;
        cout<<"Jepni grupin e nxenesit: ";
        cin>>grupi;
        cout<<"Jepni ID e nxenesit: ";
        cin>>ID;
    }
    void mesatarja(){
        cout<<"Jepni numrin e lendeve te nxenesit: ";
        cin>>numri_lendeve;
        int shuma=0;
        for(int i=1;i<=numri_lendeve;i++){
            cout<<"Jepni noten "<<i<<": ";
            int nota;
            cin>>nota;
            shuma=shuma+nota;
        }
        cout<<"Mestarja: " <<shuma*1.0/numri_lendeve<<endl;
    }
    void shfaq_te_dhenat(){
        cout<<"Emri dhe mbimeri: "<<emri<<" "<<mbiemri<<endl;
        cout<<"Grupi: "<<grupi<<endl;
        cout<<"ID: "<<ID<<endl;
    }
    void eshte_ID_i_thjeshte(){
        bool eshte=true;
        for(int i=2;i<ID/2;i++){
            if(ID%i==0){
                eshte=false;
                break;
            }
        }
        if(eshte)
            cout<<"ID eshte numer i thjeshte\n";
        else
            cout<<"ID nuk eshte numer i thjeshte\n";
    }

};
int main(){
    Nxenesi nx;
    nx.lexo();
    nx.shfaq_te_dhenat();
    nx.mesatarja();
    nx.eshte_ID_i_thjeshte();
    return 0;
}