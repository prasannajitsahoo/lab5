// library 
#include <iostream>
using namespace std;

 int main(){
   //declaring variables
   float n;
   cout<< "enter a number: ";
   cin>> n;
   //output
   if(n>0){
     cout<<" the number "<<n<< " is positive"<<endl;
     }
   else if (n<0){
     cout<< "the number "<<n<< " is negative"<<endl;
     }
   else{
     cout<< "the number "<<n<< " is zero"<<endl;
     }
    return 0;
}
   
