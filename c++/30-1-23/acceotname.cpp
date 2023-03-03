#include<iostream>
using namespace std;

class name{
public:
	string Name;
    void getname(string n)
    {
       	Name =n;
	}	
	void putname()
	{
		cout<<"\n your name is: "<<Name;
		
	}
};

int main()
{
	Name n;
	string name;
	cout<<"\n enter name:";
	cin>>name;
	getline(cin,name);
	n.getname();
	n.putname();

	return 0 ;
}