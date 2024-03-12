#include<bits/stdc++.h>
using namespace std;
int main(){
// Simple Calculator
int num1,num2;
char process,equal; 
cin>>num1>>process>>num2>>equal;

switch (process)
{
case '+':
    cout<< num1 + num2 <<endl;
    break;
case '-':
    cout<< num1 - num2 <<endl;
    break;
case '*':
    cout<< num1 * num2 <<endl;
    break;
case '/':
    cout<< (float)num1 / num2 <<endl;
    break;
case '%':
    cout<< num1 % num2 <<endl;
    break;
}

return 0;
}