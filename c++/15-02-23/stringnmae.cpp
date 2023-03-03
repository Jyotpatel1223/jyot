#include<iostream>
using namespace std;

int main()
{
	string fname;
	string lname;
	cout<<"\n enter fname:";
	getline(cin,fname);
	cout<<"\n fname is:"<<fname;
	lname=fname;
	cout<<"\n lname:"<<lname;
	cout<<"\n string concatenate:"<<(fname+lname);
	int len=fname.size();
	cout<<"\n string length is:"<<len;
	
	return 0;
	
	
}