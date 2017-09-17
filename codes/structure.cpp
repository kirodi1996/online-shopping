#include <bits/stdc++.h>
using namespace std;
struct book{
	int bookid;
	string name[40];
};
int main(){
	struct book b1;
	cin>>b1.bookid;
	for(int i=0;i<5;i++){
		cin>>b1.name[i];
	}
	cout<<b1.bookid<<" ";
	for (int i = 0; i < 5; ++i)
	{
		cout<<b1.name[i]<<" ";
	}
}