#include <iostream>
using namespace std;

int main(){
  int num1;
  int num2;
  int num3;
  cout << "Enter three integers: ";
  cin >> num1 >> num2 >> num3;
  if (num1 <= num2 && num2 <= num3){
    cout << "In order";
  }else{
    cout << "Not in order";}
}
