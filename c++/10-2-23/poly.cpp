#include<iostream>
using namespace std;

class mo
{
 public:
 
   void add()
   {
   	int a,b;
   	cout<<"enter a:";
   	cin>>a;
   	cout<<"enter b:";
   	cin>>b;
   	cout<<"\n addition:"<<(a+b);
	   }	
	   void add(int a, int b)
	   {
	   	cout<<"\n addition from main():"<<(a+b);
	   }
	   
	   int add(int x,int y,int z)
	   {
	   	return x+y+z;
	   	
	   }
};


int main()
{
	mo obj;
	obj.add();
	obj.add(5,6);
    cout<<"\n add:"<<	obj.add(5,4,9);
    return 0;
}