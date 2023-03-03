#include<iostream>
using namespace std;

class sample
{
	public:
	int a=10;
	 void geta()
	 {
	 	cout<<"\n enter a:";
	 	cin>>a;
	 }
		
		void puta()
		{
			cout<<"\na="<<a;
		}
	};
		int main()
{
	sample h1;
	h1.geta();
	h1.puta();
	return 0;
}