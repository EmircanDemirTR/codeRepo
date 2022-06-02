#include <iostream>
#include <string>
using namespace std;

char kucuk(char a, char b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}

char word(string kelime, int n){
    if(n==0){
        return kelime[0];
    }
    else{
        return kucuk(word(kelime, n-1), kelime[n-1]);
    }
}


int main(){
    string kelime;
    cin>>kelime;
    cout<<word(kelime, kelime.length()-1);
    return 0;
}