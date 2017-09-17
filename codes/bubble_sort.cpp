#include <iostream>

using namespace std;
template<class T>

void bubble(T v[5],int n)
	{
		for(int i=0;i<n-1;i++)
		for(int j=n-1;i<j;j--)
		if(v[j]<v[j-1])
		{
			T temp=v[j];
			v[j]=v[j-1];
			v[j-1]=temp;
		}
	}
int main()
{
	int x[5]={10,50,30,40,20};
	float y[5]={1.1,5.5,3.3,3.4,4.6};
	bubble(x,5);
	bubble(y,5);
	cout<<"sorted array";
	for(int i=0;i<5;i++)
	cout<<x[i]<<" ";
}
