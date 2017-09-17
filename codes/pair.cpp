#include <bits/stdc++.h>
using namespace std;
class student{
	string name;
	int rollno;
	public:
		void info(string nam,int rolno){
			name=nam;rollno=rolno;
	}
	void show(){
		cout<<name<<endl;
		cout<<rollno<<endl;
	}
};
int main(){
	pair <int,string> p1;
	pair <string,string> p2;
	pair <int,student> p3;
	p1=make_pair(1,"rahul");
	cout<<p1.first<<" "<<p1.second<<endl;
	p2=make_pair("kanchan","Rekha");
	cout<<p2.first<<" "<<p2.second<<endl;
	student s1;
	s1.info("Rishabh",12);
	p3=make_pair(1,s1);
	student s2=p3.second;
	s2.show();
	//cout<<p1.first; 

}