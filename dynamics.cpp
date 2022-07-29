#include<iostream>
using namespace std;
class A
{
    char *p;
    public:
    A()
    {
        p= new char[30];
        p=MaaChuda;
    }
}
int main(){
    char *a;
    a=new char[10];
    cin>>a;
    cout<<"Hi "<<a;
    delete a;
    return 0;
}