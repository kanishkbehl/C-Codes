
#include<iostream>
#include<fstream>
using namespace std;
class box{
	int length,breadth;
	public:
		int a,b,ar;
		box(int length, int breadth){
			length = a;
			breadth = b;
		}
		void area(int c, int d)
		{
			ar=c*d;
		}
		
		box operator <(box op)
		{
			if (ar<op.ar)
			return *this;
		}
		
		int show(){
            cout<<"The larger area is";
			return ar;
		}
};

int main(){
	box B1(10,20),B2(30,40);
	B1.area(10,20);
	B2.area(30,40);
	if(B1.ar>B2.ar){
		ofstream out("kanishk.txt");
		out<<B1.show();
	}
    else

	{
	ofstream out("kanishk.txt");
	out<<B2.show();	}
	return 0;
}
