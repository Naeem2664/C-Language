#include <iostream>
#include <fstream>

using namespace std;

int main()
{
while (true)
{
	/* code */


	string choice;
	string command;
	cout << "Enter Your Command:";
	cin >> command;

	if (command == "file")
	{
		string write="My name is naeem and I'm a student. ";
		ofstream File("MyFile.txt");
		cout << "Your file has been created successfully with example text" << endl;
		File << write;
		File.close();
	}
	else if (command == "read")
	{
		string Text;
		ifstream Read("MyFile.txt");
		while (getline(Read, Text))
		{
			cout << Text;
		}
	}
	else
	{
		cout << "Invalid command";
	}

	return 0;
}
}