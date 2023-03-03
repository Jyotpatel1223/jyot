#include<iostream>
using namespace std;

class sample
{
	public:
		sample()
		{
			cout<<"\n default constructor called.";
			
		}
		void show()
		{
			cout<<"\n this is show method.";
			
		}
};

int main()
{
	sample obj1; //object creation
	obj1.show(); // function calling
	return 0;
}