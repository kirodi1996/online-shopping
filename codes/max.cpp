#include<iostream>
#define Arr_max 5 
using namespace std;
template <class T>
T find_min(T ARR[])
{
	int i=0;
	T MIN=ARR[0];
	for(i=1;i<Arr_max;i++)
		if(ARR[i]<MIN)
		MIN=ARR[i];
	return (MIN);
}
int main()
{
	int I_MIN;
	float F_MIN;
	char C_MIN;
	int I[5]={20,4,2,38,97};
	float F[5]={-9.9,12.2,13.2,9.9};
	char c[5]={'a','A','/','4','-'};
	I_MIN=find_min(I);
	F_MIN=find_min(F);
	C_MIN=find_min(c);
	cout<<"Minimum"<<I_MIN<<endl;
	cout<<"Minimum"<<F_MIN<<endl;
	cout<<"Minimum"<<C_MIN<<endl;
	return(0);
}