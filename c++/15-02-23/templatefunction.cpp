#include<iostream>
using namespace std;

template<typename T>
T common(T a,T b)
{
	
	return a+b;
}

int main()
{
	cout<<"\n add using int:"<<common<int>(54,7);
	cout<<"\n string concatenation:"<<common<string>("abc","pqr");
	cout<<"\n add using float:"<<common<float>(42.7f,7.9f);
	return 0;
}