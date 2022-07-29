//pointer to objects
#include<iostream>
using namespace std;
class demo
{
    int d;
    public:
    demo()
    {
        d=0;
    }
    void get_data()
    {
        cout<<"ENTER DATA"<<endl;
        cin>>d;
    }
    void display()
    {
        cout<<"\n YOU ENTERED: "<<d<<endl;
    }
};
int main(){
    demo d1,d2;
    demo *p;
    p=&d1;
    p->getdata();
    p->display();
    p=&d2;
    p->getdata();
    p->display();
    
    return 0;
}