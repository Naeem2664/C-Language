#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second  number:";
	cin>>b;
	cout<<"Enter third number:";
	cin>>c;
	if(a>b)
	{
		cout<<"the largest number is"<<a<<endl;
	}
	
	else if(a>c){
		cout<<"THe largest number is"<<a<<endl;
	}
	
	else if(b>a){
		cout<<"THe largest number is"<<b<<endl;
	}
	else if(b>c){
		cout<<"THe largest number is"<<c<<endl;
	}
	else if(c>a){
		cout<<"THe largest number is"<<c<<endl;
	}
	
	return 0;}
	