#include<iostream>
using namespace std;

class box{
	public:
		double width,depth,height;
		
		box()
		{
			cout<<"\n default constructor called.";
			width=4;
			depth=5;
			height=3;
		}
		
		box(double w,double h,double d)
		{
			cout<<"\n\n parameterized consturctor called.";
			width= w;
			height= h;
			depth= d;
			
			
		}
		box(const box &tops)
		{
			cout<<"\n\n\n copy constructor called.";
				width=tops.width;
			height=tops.height;
			depth=tops.depth;
			
		}
		
		void volume()
		{
			cout<<"\n volume of box:"<<(width*height*depth);
		
			
		}
};

int main()
{
	box b1;
	b1.volume();
	
	box b2(7,5,6);
	b2.volume();
	
	box b3(b2
	
	);
	b3.volume();
	
	return 0;

}
