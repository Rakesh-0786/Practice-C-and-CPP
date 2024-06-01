#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
     cout<<" enter the first number";
     cin>>num1;
     cout<<"enter the second number";
     cin>>num2;
     if (num1>num2)
     {
        cout<<num1<<"is  greater than"<<num2;
     }
      else if(num2>num1){

      
      cout<<num2<<"is greater than"<<num1;
      }
      else{
        cout<<"both are equal";
      }
     return 0;
}