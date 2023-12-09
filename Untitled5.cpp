#include <iostream>
using namespace std;
int Incrementfive(int sal1)
{
	
		int per;
		per = (sal / 100) * 5;
		cout << "Increment amount=" << per << endl;
		cout << "Total salary " << per + sal1<<endl;
		return 0;
	
}
int Incrementten(int sal2)
{
	
	
		int per;
		per = (sal / 100) * 10;
		cout << "Increment amount=" << per << endl;
		cout << "Total salary " << per + sal2<<endl;
		return 0;
	
}
int main()
{
	int salary;
	cout << "Enter your salary:";
	cin >> salary;
	if (salary>=400000)
	{
		cout<<Incrementfive(salary);
	}
	else
	cout<<Incrementten(salary);
	return 0;
}