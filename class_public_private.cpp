#include<iostream>
using namespace std;

class Employee
{
    private:
        int a1,b1,c1;
    public:
        int d, e;
        void setdata (int a, int b, int c); //declaration
        void getdata (){
            cout<<"The value of a is "<< a1<<endl;
            cout<<"The value of b is "<< b1<<endl;
            cout<<"The value of c is "<< c1<<endl;
            cout<<"The value of d is "<< d<<endl;
            cout<<"The value of e is "<< e<<endl;
        }

};
void Employee :: setdata(int a, int b, int c){
    a1 = a;
    b1 = b;
    c1 = c;
};

int main(){
    Employee kanishk;
    kanishk.d = 34;
    kanishk.e = 89;
    kanishk.setdata(1,2,4);
    kanishk.getdata();
    return 0;
}