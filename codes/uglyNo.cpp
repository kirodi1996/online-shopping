#include <bits/stdc++.h>
using namespace std;
int ugly(int n){
	int Ugly[n];
	Ugly[0]=1;
	int i2=0,i3=0,i5=0;
	int next2,next3,next5;
	int mini;
	for (int i = 1; i < n; ++i)
	{
		next2=Ugly[i2]*2;
		next3=Ugly[i3]*3;
		next5=Ugly[i5]*5;
		mini=min(next2,min(next3,next5));
		if(mini==next2){
			i2++;
		}
		if(mini==next3){
			i3++;
		}
		if(mini==next5){
			i5++;
		}
		Ugly[i]=mini;

	}
	return Ugly[n-1];
}
int main(){
	int n;
	cin>>n;
	cout<<ugly(n)<<endl;
}