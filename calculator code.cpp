#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char op;
	   //taking inputs
	cout<<"Please enter the first value"<<endl;
	cin>>a;
	cout<<"Please enter the second value"<<endl;
	cin>>b;
	cout<<"Now enter your required operator"<<endl;
	cin>>op;
	   //performing addition
	if (op=='+')
	{
	cout<<"you want to perform addition"<<endl;
	cout<<a<<"+"<<b<<"="<<a+b<<endl;
    }
       //performing subtraction
    else if (op=='-')
    {
    cout<<"you want to perform subtraction"<<endl;
	cout<<a<<"-"<<b<<"="<<a-b<<endl;	
	}
	   //performing multiplication
	else if (op=='*')
    {
    cout<<"you want to perform multiplication"<<endl;
	cout<<a<<"*"<<b<<"="<<a*b<<endl;	
	}
	    //performing division
	else if (op=='/')
    {
    cout<<"you want to perform division"<<endl;
	cout<<a<<"/"<<b<<"="<<a/b<<endl;	
	}
	    //finding modulus
	else if (op=='%')
    {
    cout<<"you want to find modulus"<<endl;
	cout<<a<<"-"<<b<<"="<<a%b<<endl;	
	}
	else
	{
	cout<<"Invalid Data"<<endl;
    }
    return 0;
}