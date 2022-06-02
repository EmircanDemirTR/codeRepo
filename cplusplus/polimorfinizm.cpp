#include <iostream>
using namespace std;

class balik{
    protected:
        int hacim;
    public:
        balik(){
            hacim = 0;
            cout<<"balik constructor"<<endl;
        }
        void setHacim(int h){
            hacim = h;
        }
        int getHacim(){
            return hacim;
        }
        virtual void balikyazdir(){
            cout<<"balik hacmi: "<<hacim<<endl;
        }
};

class yunus: public balik{
    public:
        yunus(){
            cout<<"yunus constructor"<<endl;
        }
        void balikyazdir(){
            cout<<"yunus hacmi: "<<hacim<<endl;
        }
};

class balina: public balik{
    public:
        balina(){
            cout<<"balina constructor"<<endl;
        }
        void balikyazdir(){
            cout<<"balina hacmi: "<<hacim<<endl;
        }
};

int main(){

    yunus y;
    y.setHacim(100);
    y.balikyazdir();

    balina b;
    b.setHacim(200);
    b.balikyazdir();

    return 0;
}