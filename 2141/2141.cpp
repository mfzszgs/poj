#include <iostream>
using namespace std;
int main ()
{
	char c[26],input;
	for (int i=0;i<26;i++)
		cin>>c[i];
	while(input=cin.get())
	{
		if(input>=97 && input<=122)
		{
			cout<<c[input-97];
		}else if(input>=65 && input<=90){
			cout<<(char)(c[input-65]-32);
		}else
			cout<<" ";
	}
}
