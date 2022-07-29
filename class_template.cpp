#include<iostream>
using namespace std;

template < class T1 = int, class T2 = float, class T3 = char>
class lol{
    public:
    T1 a;
    T2 b;
    T3 c;
    lol(T1 x , T2 y , T3 z){
        a = x;
        b = y;
        c = z;
    }

    void display(){
        cout<<"THE VALUE OF A IS: "<<a<<endl;
        cout<<"THE VALUE OF B IS: "<<b<<endl;
        cout<<"THE VALUE OF C IS: "<<c<<endl;
        
    }
};
int main(){
    lol<> h(4, 6.4,'c');
    h.display();
    return 0;
}