#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,s;
	cin>>n;
	vector <int> arr1,arr3;
	vector <int> arr2,arr4;
	int sum;
	//cout<<sum<<endl;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&s);
		arr1.push_back(s);
		
	}
	arr3=arr1;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&s);
		arr2.push_back(s);
		
	}
	arr4=arr2;
	sort(arr1.begin(),arr1.end());
	sort(arr2.begin(),arr2.end());
	for (int i = 0; i < n; ++i)
	{
		int j=0;
		while(arr1[i]!=arr3[j]){
			j++;
			//cout<<"1";
		}
		int k=0;
		while(arr2[i]!=arr4[k]){
			k++;
			//cout<<"2";
		}
		if(j!=k){
			sum=arr1[i]+arr2[i];
			//cout<<"hello";
			break;
		}
		else{
			if(abs(arr1[i]-arr1[i+1])>abs(arr2[i]-arr2[i+1])){
				sum=arr1[i]+arr2[i+1];
				break;
				
			}
			else {
				sum=arr1[i+1]+arr2[i];
				break;
			}
			
		}
		cout<<"hello";
	}
		cout<<sum<<endl;
}