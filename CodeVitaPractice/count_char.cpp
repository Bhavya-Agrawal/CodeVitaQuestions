#include<iostream>
#include<string>
using namespace std;
int main()
{
	//to keep count of delimiters,arithmetic operators,identifiers,speacial characters
	string str,check,deliminters,arithmetics,identifiers,special;
	//noa=no of arithmetic operators,nod=no of delimiters,noi=no of identifiers,nos=no of special characters
	int i,j,noa=0,noi=0,nod=0,nos=0;
	cout<<"enter the string\n";
	getline(cin,str);

	cout<<str<<"\n";
	cout<<str.length()<<"\n";
	for(i=0;i<str.length();)
	{
		if(str[i]!=' ')
		{
			while(str[i]!=' '&&i!=str.length())
			{
				check+=str[i];
				i++;
			}

			if(i==str.length())
				check+=str[i];

			//cout<<"check =="<<check<<"\n";
		if(check[0]=='+'||check[0]=='-'||check[0]=='*'||check[0]=='/'||check[0]=='%'||check[0]=='=')
			{arithmetics+=check[0];	noa+=1;
				//cout<<"arithmetics == "<<arithmetics<<"\n";
			}
		else if(check[0]>='a'&&check[0]<='z'||check[0]>='A'&&check[0]<='Z'||check[0]>='0'&&check[0]<='9')
		{
			noi+=1;
			for(j=0;j<check.length();j++)
			{
				identifiers+=check[j];
			}
			//cout<<"identifiers =="<<identifiers<<"\n";
		}
		else if(check[0]==';')
		{
			nod+=1;
			deliminters+=check[0];
			//cout<<"deliminters =="<<deliminters<<"\n";	
		}

		else if(check[0]=='!'||check[0]=='@'||check[0]=='#')
		{
			nos+=1;
			special+=check[0];
			//cout<<"special =="<<special<<"\n";
		}

		//make check again null for the next iteration
		check.clear();
		}
	
		else
		{
			i++;
		}
		//cout<<i<<"\n";
	}

	cout<<"The identifiers are:  "<<identifiers<<"\n";
	cout<<"The deliminters are:  "<<deliminters<<"\n";
	cout<<"The arithmetics are:  "<<arithmetics<<"\n";
	cout<<"The special characters are:  "<<special<<"\n";

	cout<<"No of identifiers are:  "<<noi<<"\n";
	cout<<"No of deliminters are:  "<<nod<<"\n";
	cout<<"No of arithmetics are:  "<<noa<<"\n";
	cout<<"No of speacial characters are:  "<<nos<<"\n";


	return 0;
}