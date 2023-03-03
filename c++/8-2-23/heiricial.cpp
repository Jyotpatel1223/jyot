#include<iostream>
using namespace std;

class side{
   protected:
        double l;
		public:
		 void getval(int x)
		 {
		 	l=x;
		 	
			 }	
};

class square:public side
{
	public:
		int sqr()
		{
			return l*l;
			
		}
};

class cube:public side
{
	public:
		int cu()
		{
			return l*l*l;
		}
};


int main()
{
   square obj;
   obj.getval(5);
   cout<<"\n square is:"<<obj.sqr();
   
   cube cb;
   cb.getval(8);
   cout<<"\n cube is:"<<cb.cu();
   
   
   
   
	
	return 0;
}