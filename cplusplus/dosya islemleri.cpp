#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    
    //yazma islemleri
    ofstream yazma;
    yazma.open("example.txt");
    yazma<<"Hello World! 55"<<endl;
    

    //okuma islemleri
    ifstream okuma;
    okuma.open("example.txt");
    string line;
    while(getline(okuma, line)){
        cout<<line<<endl;
    }




    return 0;
}