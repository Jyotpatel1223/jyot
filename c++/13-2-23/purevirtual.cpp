#include<iostream>
using namespace std;

class fandemo{
	
	public:
		virtual void onbutton();
		void light()
		{
			cout<<"\n light is on.";
		}
		
};
class start:public fandemo{
	public:
		void ac()
		{
			cout<<"\n ac started.";
			
		}
		void onbutton()
		{
			cout<<"\nfan is rotating,";
		}
	
};
  int main()
 	{
 		start raj;
 		raj.ac();
 		raj.light();
 		raj.onbutton();
 		return 0;
	 }