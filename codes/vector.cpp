#include<iostream>
#define size 3
using namespace std;

template<class T>
class vector
{
	
	T* v;
	public:
		vector()
		{
			v=new T[size];
			for(int i=0;i<size;i++)
			v[i]=0;
		}
		vector(T* a )
		{
			for(int i=0;i<size;i++)
			v[i]=*(a+i);
		}
		T operator*(vector &y)
		{
			T sum=0;
			for(int i=0;i<size;i++)
			sum+=this->v[i]*y.v[i];
			return sum;
		}
		void display(void)
		{
			for(int i=0;i<size;i++)
			cout<<v[i]<<"\t";
			cout<<"\n";
		}
};
int main()
{
	int x[3]={1,2,3};
	int y[3]={4,5,6};
	vector <int>v1;
	vector <int>v2;
	v1=x;
	
	v2=y;
	cout<<"v1*v2="<<v1*v2;
	cout<<"V1=";
	v1.display();
		cout<<"V2=";
	v2.display();
	
	return 0;
}
