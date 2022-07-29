#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string s1; 
    ofstream out("sample.png"); //OPENING
    out<<"YO YO HONEY SINGH"; //WRITE
    out.close()
    ifstream in("sample.png"); //READ
    in>>s1;
    getline(in,s1);
    cout<<s1<<endl;
    return 0;
}