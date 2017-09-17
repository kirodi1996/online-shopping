#include <bits/stdc++.h>
using namespace std;
int main(){
	vector <string> A(9);
	for (int i = 0; i < 9; ++i)
	{
		//cout<<"bye";
		cin>>A[i];
		//cout<<"hello";
	}
	//cout<<" "<<A[8][7]<<" "<<A[8][8]<<" ";
	map<int, bool> hash1;
	map<int, bool> hash2;
	map<int, bool> hash3;
	//for column
	for (int j = 0; j < 9; ++j)
	{
		for (int i = 0; i < 9; ++i)
		{
			if(hash2.find(A[i][j])!=hash2.end()){
				return 0;
			}
			else if(hash2.find(A[i][j])==hash2.end()){
				hash2[(int)(A[i][j]-'0')]=true;
			}

		}
		hash2.clear();
	}
	//for row
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			hash3[7]=true;
			if(hash3.find(A[i][j])!=hash3.end()){
				cout<<"hell0";
				return 0;
			}
			else if(hash3.find(A[i][j])==hash3.end()){
				cout<<(int)(A[i][j]-'0')<<" ";

				hash3[(int)(A[i][j]-'0')]=true;
			}

		}
		hash3.clear();
	}
	int k=0,l=0;
	while(l<=6){
		for (int i =k ; i < 3+k; ++i)
		{

			for (int j = 0; j < 3+l; ++j)
			{
				//cout<<A[i][j]<<endl;
				if(hash1.find(A[i][j])!=hash1.end()){
					cout<<"hello";
					return 0;
				}
				else if(hash1.find(A[i][j])==hash1.end()){
					hash1[(int)(A[i][j]-'0')]=true;
				}

			}
		}
		hash1.clear();	
		
		if(k==6){
			k=0;
			l+=3;	
		}
		k+=3;
	}
	cout<<"1";
	
}