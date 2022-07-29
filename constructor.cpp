#include<iostream>
using namespace std;
class kan
{
    int a, b;
    public:
    kan()
    {
        a=10;
        b=20;
        cout<<"Destructive";
    }
    kan(int c, int d=0)
    {
        a=c;
        b=d;
    }
    kan(kan &c)
    {
        a=c.a;
        b=c.b;
    }
    void display()
    {
        cout<<a<<"\t"<<b<<"\n";
    }
};
int main(){
    kan obj(9);
    obj.display();
    kan baap(obj);
    baap.display();
    return 0;
} 