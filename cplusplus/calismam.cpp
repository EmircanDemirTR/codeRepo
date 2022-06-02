//calismam
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Ders{
    private:
        int DersKodu;
        string DersAdi;
    public:
        Ders(){}
        Ders(int kod, string ad){
            DersKodu=kod;
            DersAdi=ad;
            }

        int getKod(){
            return DersKodu;
         }

         string getAd(){
            return DersAdi;
             }

         void setKod(int k){
             
             DersKodu = k;
             }
    
        void setAd(string a){
             DersAdi = a;
             }
};

int main(){
int yenikod;
string yeni;



Ders D1(101, "Programlama I");
Ders D2(102, "Programlama II");
Ders D3;

cout<<"D1 dersinin kodu "<<D1.getKod()<<", adi "<<D1.getAd()<<"'dir."<<endl<<endl;
cout<<"D2 dersinin kodu "<<D2.getKod()<<", adi "<<D2.getAd()<<"'dir."<<endl;

cout<<"Dersin kodunu girin: ";
cin>>yenikod;
cout<<endl<<"Dersin adini girin girin: ";
getline(cin, yeni);

cout<<yeni;

D3.setKod(yenikod);
D3.setAd(yeni);

cout<<endl<<"D3 dersinin kodu "<<D3.getKod()<<", adi "<<D3.getAd()<<"'dir."<<endl;


return 0;
}