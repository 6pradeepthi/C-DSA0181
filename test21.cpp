#include<iostream>
#include<string>
using namespace std;
int countElements(string str)
{
	return str.length();
}
int main()
{
	string str;
	cout<<"enter the string:";
	cin>>str;
	cout<<"No of elements:"<<str<<countElements(str)<<endl;
	return 0;
}
