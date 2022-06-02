#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> sayilar;
    sayilar.push_back(1);
    sayilar.push_back(2);
    sayilar.push_back(3);

    for(int i=0; i<sayilar.size(); i++){
        cout<<sayilar[i]<<endl;
    }

    return 0;
}