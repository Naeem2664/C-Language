#include <iostream>
using namespace std;

void Test(int age,float height,char name)
{

    cout << " Name =" << name << endl;
    cout << " Age =" << age << endl;
    cout << " height =" << height << endl;
}
int main()
{
    int age;
    float hei;
    char na;
    string sen;
    cout<<"Enter your age :";
    cin>>age;
    cout<<"Enter your height :";
    cin>>hei;
    cout<<"Enter your Name:";
    cin>>na;
    cout<<"========================Showing the details========================="<<endl;
    cout<<Test(age,hei,sen);
    return 0;

}