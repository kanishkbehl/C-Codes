#include <iostream>
#include<string>
using namespace std;
struct employee
{
int eId;
const char[8] name;
float salary;
};

int main(){
  struct employee pranshu;
  pranshu.eId = 102105069;
  pranshu.name= 'pranshu';
  pranshu.salary= 200000;
  cout<<"Employee's Id is: "<<pranshu.eId<<endl;
  cout<<"Name of the employee: "<<pranshu.name<<endl;
  cout<<"Employee's salary is: "<<pranshu.salary<<endl;
  return 0;
}