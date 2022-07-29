#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out;
    out.open("SAMPLE1.txt");

    out<<"THIS IS US";


    return 0;
}