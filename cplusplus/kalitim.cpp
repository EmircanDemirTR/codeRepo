#include <iostream>
using namespace std;

class arac{
    protected:
        int hiz;
    public:
        arac(){
            hiz = 0;
            cout<<"arac constructor"<<endl;
        }

        void setHiz(int h){
            hiz = h;
        }
        int getHiz(){
            return hiz;
        }
};

class motorluArac: public arac{
    public:
        motorluArac(){
            cout<<"motorluArac constructor"<<endl;
        }
        void setHiz(int h){
            hiz = h;
        }
        int getHiz(){
            return hiz;
        }
};

int main(){
    motorluArac a;
    a.setHiz(100);
    cout<<a.getHiz()<<endl;
    return 0;
}