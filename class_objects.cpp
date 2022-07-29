#include<iostream>
using namespace std;
class kan{

    int b;
    public:
    void fun1(int i)
    {
        b=i;
        cout<<"THIS IS THE INPUT"<<b<<endl;
    }

};

int main(){
    kan obj1;
    int j;
    cin>>j;
    obj1.fun1(j);  
    return 0;
}