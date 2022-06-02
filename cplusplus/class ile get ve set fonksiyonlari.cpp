#include <iostream>
#include <string>
using namespace std;

class Gradebook{
  private:
    string kursismi;

  public:
    void setfonk(string isim){
        kursismi=isim;
    }

    string getfonk(){
        return kursismi;
    }

    void mesajyazdirma(){
        cout<<"Merhaba "<<getfonk()<<" kursuna hos geldiniz.";
    }

    
};

int main(){
    string isim;
    Gradebook Ders1;

    cout<<"Lutfen kurs ismini giriniz: ";
    getline(cin, isim);
    Ders1.setfonk(isim);
    cout<<endl;

    Ders1.mesajyazdirma();
    return 0;
}