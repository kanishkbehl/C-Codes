#include<iostream>
using namespace std;
template<class T1,class T2>
class student{
    public:
    T1 age;
    T2 firstdigitofname;
    student(T1 a,T2 b){
        age=a;
        firstdigitofname=b;
    }
    void display(){
        cout<<age <<endl<<  firstdigitofname;//<<endl;
    }
    
};

int main(){
    student<int, float> obj(1,1.8);
    obj.display();
    return 0;
}