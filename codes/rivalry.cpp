#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int snake=0,mong=0;
		string s;
		cin>>s;
		int n=s.size();
		for(int i=0;i<s.size();i++){
			if(s[i]=='s'){
				snake++;
				//cout<<"hello1"<<endl;
				continue;
			}
			if(s[i]=='m'){
				mong++;
			}
			if(s[i]=='m' && (s[i-1]=='s')  && ((i-1)>=0)){
				s[i-1]='z';
				snake--;
				//cout<<"hello2";
				continue;
			}
			if(s[i]=='m' && (s[i+1]=='s') && (i+1)<n ){
				//snake++;
				s[i+1]='z';
				//snake--;
				
			}
			
		}/*
		cout<<endl;
		cout<<snake<<endl;
		cout<<mong<<endl;*/
		if(snake>mong){
			printf("snakes\n");
		}
		else if(snake<mong){
			printf("mongooses\n");
		}
		else{
			printf("tie\n");
		}
	}
}