#include<iostream>
using namespace std;

class a{
	public:
		void show()
		{
			
			cout<<"\n show from a";
		}
};

class b:public a{
	public:
		void show()
		{
			b::show();
			cout<<"\n show from b";
		}
};

class c:public b{
	public:
		void show()
		c::show();
		cour<<"\n show from c";
};

int main()
{
	
	c obj;
	obj.show();
	return 0;
}


