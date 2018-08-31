//library
#include <iostream>
using namespace std;

int main(){
  //declaring variation
  float num1, num2, num3;
  //write three numbers
    cout<<"enter first number:"; 
    cin>>num1;
    cout<<"enter second number:"; 
    cin>>num2;
    cout<<"enter third number:";
    cin>>num3;
  //show output
    if(num1>=num2 && num1>=num3){
	cout<<"First number "<<num1<<" is the largest"<<endl;
       }
    else if(num2>=num1 && num2>=num3){
	cout<<"Second number "<<num2<<" is the largest"<<endl;
       }
    else{
        cout<<"third number "<<num3<< " is the largest"<<endl;
       }
   
    return 0;
 }
