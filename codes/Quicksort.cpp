#include <bits/stdc++.h>
using namespace std;
int partition(int *arr,int low,int high){
	int pivot=arr[high];
	int i=low-1;
	for (int j = 0; j <= high-1; ++j)
	{
		if(arr[j]<=pivot){
			i++;
			swap(arr[i],arr[j]);
		}	
	}
	swap(arr[i+1],arr[high]);
	return i+1;
}
void quick_sort(int arr[],int low,int high){
	int pi;
	if(low<high){
		pi=partition(arr,low,high);
		quick_sort(arr,low,pi-1);
		quick_sort(arr,pi+1,high);	
	}
	
	
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	quick_sort(arr,0,n-1);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
}
