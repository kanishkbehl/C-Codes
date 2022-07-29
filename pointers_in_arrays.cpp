#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void input(int i)
    {
        cout<<"\nEnter value for "<<i<<endl;
        cin>>a;
    }
    void display()
    {
        cout<<"Enter values is "<<this->a<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter no of objects"<<endl;
    cin>>n;
    A *po=new A[n];
    for(int i=0;i<3;i++)
    {
        (po+i)->input(i+1);
    }
    for(int i=0;i<3;i++)
    {
        (po+i)->display();
    }
    return 0;
}