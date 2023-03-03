#include<iostream>
using namespace std; 

class A	
{
	public:
		int a;
		
		void getA(int x)
		{
			a=x;
		}
		void showA()
		{
			cout<<"\nA="<<a;
		}
};

class b:public  A{
	public:
		int b;
		
		void getB(int y)
		{
			b=y;
			
		}
		void showB()
		{
			cout<<"\nB="<<b;
		}
		


		


};

int main()
{
	int a,b1,c;
	cout<<"\n enter the value of a:";
	cin>>a;
	cout<<"\n enter the value of b:";
	cin>>b1;
	
	
    b b;
	b.getA(a);
	b.getB(b1);
	b.showA();
	b.showB();
	
	return 0;
}
