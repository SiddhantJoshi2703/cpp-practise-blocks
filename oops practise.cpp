#include<iostream>
using namespace std;

class action{
    int x;
    public:
    void setx(int x){
        this->x=x;
    }
    void getx(){
        cout<<"value of x is "<<this->x<<endl;
    }
    void feeling(){
        cout<<"feels superb"<<endl;
    }
};

class boring:public action{
    public:
    void feeling(){
        cout<<"not feeling well"<<endl;
    }
};
int main(){
    action a;
    boring b;
    a.setx(5);
    a.getx();
    a.feeling();
    b.feeling();
    

    return 0;
}