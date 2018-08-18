#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i;
	string str,str1,updated;
	cout<<"enter the string\n";
	/*cin>>str;
	//cout<<str;
	for(i=0;i<str.length();i++)
	{
		cout<<str[i]<<"\n";
		if(str[i]!='\0')
		{
			str1.append(str);
		}
		//str1.append(str[i]);
	}
	//str1.append(str);
	//cout<<"Hello world";*/
	getline(cin,updated);
	cout<<"The space se[arated string taken is"<<updated<<"\n";
	//cout<<"the new string formed is"<<str1<<"\n";

	for(i=0;i<updated.length();i++)
		cout<<updated[i]<<"\n";
	return 0;
}