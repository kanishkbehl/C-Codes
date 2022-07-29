#include<iostream>
using namespace std;
class myclass{

    private:
        int i;
    
    public:
        myclass();      //constructor
        ~myclass();     //destructor

        void set_i(int n)   {i=n;}
        int get_i()         {return i;}
};

myclass::myclass(){
    i=1;
    cout << "CONSTRUCTING"<< i << "\n";
}

myclass::~myclass(){
    i=1;
    cout << "DESTROYING"<< i << "\n";
}
void fun(myclass ob);

int main(){
    myclass o;
    fun(o);     //passing object to function

    cout<<"THIS IS i IN MAIN"<< o.get_i() <<"\n";

    return 0;
}

void fun(myclass ob){

    ob.set_i(2);

    cout<<"THIS IS LOCAL i: " << ob.get_i() <<"\n";

}