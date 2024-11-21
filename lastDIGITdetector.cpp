#include <iostream>
using namespace std;
int main()
{
	char stringnumber[100];
	cout<<"enter the string: ";
	cin.getline(stringnumber,100);
	int temp=0;
	for(int i=0; stringnumber[i] !='\0'; i++)
	{
		temp++;
	}
		if(stringnumber>0 && stringnumber[temp-1] == 'n' || stringnumber[temp-1] =='N')
		{
			cout<<" True ";
		}
		else
		{
			cout<<"False";
		}
		return 0;
}