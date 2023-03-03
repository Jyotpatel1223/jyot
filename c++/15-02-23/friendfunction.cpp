#include<iostream>
using namespace std;

class avinash
{
	private:
		int money;
		friend int jyot(avinash);
		public:
			
			avisnash()
			{
				money=0;
				cout<<"money is"<<money;
				
			}
};

int jyot(avinash obj)
{
	obj.money=5000;
	return obj.money;
	
}
 int main()
 {
 	avinash avi;
 	cout<<"\n money given to jyot is rs."<<jyot(avi);
 	return 0;
 }