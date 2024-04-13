#include <iostream>
using namespace std;

int main()
{
    cout<<"SIMPLE CALCULATOR";
	char op;
	float num1, num2;
cout<<endl;
cout<<"enter number 1 = ";
cin>>num1;
cout<<"enter number 2 = ";
cin>>num2;
cout<<"enter any operation: +,-,*,/: ";
cin>>op;
switch (op) {
    case '+':
cout<<num1 + num2;
    break;
    case '-':
    cout<<num1 - num2;
    break;
    case '*':
    cout<<num1 * num2;
    break;
    case '/':
    cout<<num1 / num2;
    break;
default:
cout<<"error";
}
return 0;
}
