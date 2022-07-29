#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream hout("SAMPLE.txt"); //open


    string s1;                      //generate string
    cout<<"ENTER YOUR NAME:"<<endl;
    cin>>s1;
    hout<<s1 + " IS PAGAL";      //write
    hout.close();               //close

    
    ifstream hin("SAMPLE.txt"); //open
    hin>>s1;
    cout<< "YOUR NAME IS: " + s1;
    hin.close();

    return 0;
}