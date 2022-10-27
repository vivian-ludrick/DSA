#include <iostream>
using namespace std;

int func1(int a, int b){
return a+b;
}

int main(){
  cout<<102;
  int num1, num2;
  cin>>num1,num2;
  int sum=func1(num1,num2);
  cout<<sum;
  return 0;
}
