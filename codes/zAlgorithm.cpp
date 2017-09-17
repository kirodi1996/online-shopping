#include <bits/stdc++.h>
using namespace std;
int zArray(string concat,int z[] ){
	int n=concat.length();
	int l=0,r=0,k;
	for (int i = 1; i < n; ++i)
	{
		if(i>r){
			l=r=i;
			while(concat[r-l]==concat[r] && r<n){
				r++;
			}
			z[i]=r-l;
			r--;
		}
		else{
			k=i-l;
			if(z[k]<r-i+1){
				z[i]=z[i-l];
			}
			else{
				l=i;
				while(concat[r-l]==concat[r] && r<n){
					r++;
				}
				z[i]=r-l;
				r--;		
			}
		}
	}
}
int search(string txt,string pattern){
	string concat=pattern+"$"+txt	;
	int len=concat.length();
	int z[len];
	zArray(concat,z);
	for (int i =pattern.length()+1; i < len; ++i)
	{
		if(z[i]==pattern.length()){
			cout<<i-pattern.length()-1<<endl;
		}
	}
}
int main(){

	string s1;
	string s2;
	getline(cin,s1);
	getline(cin,s2);
	search(s1,s2);
}