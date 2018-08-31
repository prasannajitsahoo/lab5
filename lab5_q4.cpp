//library
#include <iostream>
using namespace std;

int main(){
  //declaring variation
  int n;
  cout<<" enter a number ";
  cin>> n;
  //show output
  if (n%5==0 && n%11==0){
    cout<<" the number "<<n<< " is divisible by both 5 & 11"<<endl;}
  else if (n%5==0){
    cout<<" the number "<<n<< " is divisible by 5"<<endl;}
  else if (n%11==0){
    cout<<" the number "<<n<< " is divisible by 11" <<endl;}
  
  else {
    cout<<" the number "<<n<< " is not divisible by 5 & 11"<<endl;}
  return 0;
}
