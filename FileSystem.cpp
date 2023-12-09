#include<iostream>
#include<fstream>

using namespace std;

int main(){

    string choice;
	string command;
	cout<<"Enter Your Command";
	cin>>command;
	
	if(command=="file")
	{
		
		ofstream File("MyFile.txt");
		cout<<"Your file has been created successfully"<<endl;
	}
		
	else
	{
		cout<<"Invalid command";
	}
	
	
	cout<<"Do you want to write in file?  y/n";
	cin>>choice;
	
	string write;
	if(choice=="y")
	
	{
			
			cout<<"Write here.";
			cin>>write;
			File.open();
			
			File<<write;
			File.close();
	}
	
	else if(choice=="n")
	
	{
			cout<<"Ok as your wish, your file is empty";
	}  
	
	else
	{
		cout<<"Invalid command";
	}
	
	
	 return 0;
}