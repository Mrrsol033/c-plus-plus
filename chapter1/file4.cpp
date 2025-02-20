#include<iostream>

    using namespace std;

int main(){
    system ("cls");
      int value1=25;
      int value2=4;
                // +, -, *, / , %(mod) : -> operators
                // 2+7 -> operands
                // arithmetic operators-> perform arithmetic operations 
      int add = value1 + value2;
      int sub = value1 - value2;
      int mul = value1 * value2;
      int div = value1 / value2;
      int mod = value1 % value2; //odd / even finder
                                    //odd = 1,3,5...
                                    // even = 2,4,6...


      cout<<"Result: "<<endl;
      cout<<"value1 : "<<value1<<" value2 :"<<value2<<endl;
      cout<<"Addition is :"<<add<<endl;
      cout<<"substaction is :"<<sub<<endl;
      cout<<"division is :"<<div<<endl;
      cout<<"modolu is :"<<mod<<endl;
      cout<<"multification is :"<<mul<<endl;

    return 0;


}