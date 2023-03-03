#include<iostream>
using namespace std;

class sample
{
	public:
		
			string name;
			int age;
		
		sample()
		{
			cout<<"\n default consturtor called.";
			
		}
		sample(string n, int a)
		{
			cout<<"\n parameterized constructor called.";
			name=n;
			age=a;
		}
			void show()
			{
			
			cout<<"\nName="<<name;
			cout<<"\nAge="<<age;
		}
	
		
};

int main()
{
	sample obj1;
	int age;
	string name;
	cout<<"\n enter name:";
	getline(cin,name);
	cout<<"\n enter age:";
	cin>>age;
	sample obj2(name,age);
	obj2.show();
	
	
	return 0;
}