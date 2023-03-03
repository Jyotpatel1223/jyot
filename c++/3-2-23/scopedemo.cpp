#include<iostream>
using namespace std;

class demo{
	public:
		void func();
};
void demo::func()
{

	cout<<"\nfunction implemented outside.";
}

int main()
{
	demo obj;
	obj.func();	return 0;
}