//library
#include <iostream>
using namespace std;

int main(){
  //declaring variation
  float num1, num2;
  //write two numbers
    cout<<"Enter first number:"; 
    cin>>num1;
    cout<<"Enter second number:"; 
    cin>>num2;
  //show output
    if(num1>num2){
	cout<<"First number "<<num1<<" is the largest"<<endl;
       }
    else{
	cout<<"Second number "<<num2<<" is the largest"<<endl;
       }
    return 0;
 }
