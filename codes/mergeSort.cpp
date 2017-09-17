#include <bits/stdc++.h>
using namespace std;
/*void merge(int *arr,int low,int mid,int high){
	int k=mid-low+1,l=high-mid;
	int temp1[k],temp2[l];
	for (int i = 0; i < k; ++i)
	{
		temp1[i]=arr[l+i];
	}
	for (int i = 0; i < l; ++i)
	{
		temp2[i]=arr[mid+1+i];
	}
	int n1=0,n2=0,n3=low;
	while(n1<k && n2 <l){
		if(temp1[n1]<=temp2[n2]){
			arr[n3]=temp1[n1];
			n1++;
		}
		else{
			arr[n3]=temp2[n2];
			n2++;
		}
		n3++;
	}
	while(n1<k){
		arr[n3]=temp1[n1];
		n3++;
		n1++;
	}
	while(n2<l){
		arr[n3]=temp2[n2];
		n3++;
		n2++;
	}
}*/
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
   
    int L[n1], R[n2];
 
   
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
   while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void Merge_sort(int *arr,int low,int high){
	if(low<high){

		int mid=low+((high-low)/2);
		Merge_sort(arr,low,mid);
		//merge(arr,low,mid,high);
		Merge_sort(arr,mid+1,high);
		merge(arr,low,mid,high);	
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
	Merge_sort(arr,0,n-1);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
}