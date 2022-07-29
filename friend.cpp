#include<iostream>
using namespace std;
class hello{
    private:
    int a=10;
    public:
    friend void summation(hello);
    void sum(){
        cout<<a+1<<endl;
    }
};
void summation(hello h){
    cout<<h.a+1<<endl;
}
int main(){
    hello h1;
    summation(h1);
    h1.sum();
    return 0;
}