#include <iostream>
#include <string>
using namespace std;

int statikdegisken=0;

void sayici(){
    statikdegisken++;
    cout<<"statik degisken: "<<statikdegisken<<endl;
}

int main(){

    sayici();
    sayici();
    sayici();
    sayici();
    sayici();
    sayici();

    return 0;
}