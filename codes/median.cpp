#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int f,n,min,max,min1,max1,temp;
		cin>>n;
		f=2*n;
		int a[f],b[n],c[f];
		for (int i = 0; i < f; ++i)
		{
			/* code */
			cin>>a[i];
		}
	
		sort(a,a+f);
		
		for (int i = 0; i < f/2; ++i)
		{
			/* code */
			c[2*i]=a[i];
		}
		for (int i = f/2,j=1,k=0; i < f; ++i,j=j+2,++k)
		{
			/* code */
			c[j]=a[i];
			b[k]=a[i];
		}
		cout<<b[n/2]<<"\n";
		for (int i = 0; i < f; ++i)
		{
			cout<<c[i]<<" ";
		}
		cout<<"\n";
	/*	for (int i = 0; i < f-3; i=i+2)
		{
		

			if(a[i]>a[i+1]){
				max=a[i];
				min=a[i+1];
				if(a[i+2]>a[i+3] && a[i+3]>max){
					temp=a[i];
					a[i]=a[i+3];
					a[i+3]=temp;
				}
				else if(a[i+2]<a[i+3] && a[i+2]>max){
					temp=a[i];
					a[i]=a[i+2];
					a[i+2]=temp;	
				}
				else if(a[i+2]>max){
					temp=a[i];
					a[i]=a[i+2];
					a[i+2]=temp;
				}
			}
			else if(a[i]<a[i+1]){
				max=a[i+1];
				min=a[i];
				if(a[i+2]>a[i+3] && a[i+3]>max){
					temp=a[i+1];
					a[i+1]=a[i+3];
					a[i+3]=temp;
				}
				else if(a[i+2]<a[i+3] && a[i+2]>max){
					temp=a[i+1];
					a[i+1]=a[i+2];
					a[i+2]=temp;	
				}
				else if(a[i+2]>max){
					temp=a[i+1];
					a[i+1]=a[i+2];
					a[i+2]=temp;
				}

			}
			else{
					max=min=a[i];
					if(a[i+2]>a[i+3] && a[i+3]>max){
						temp=a[i+1];
						a[i+1]=a[i+3];
						a[i+3]=temp;
					}
					else if(a[i+2]<a[i+3] && a[i+2]>max){
						temp=a[i+1];
						a[i+1]=a[i+2];
						a[i+2]=temp;	
					}
					else if(a[i+2]>max){
						temp=a[i+1];
						a[i+1]=a[i+2];
						a[i+2]=temp;
					}

				}

		}
		
		for (int i = 0; i < f; i=i+2)
		{
			
			
			if(a[i]>a[i+1]){
				b[i/2]=a[i];
			}
			else{
				b[i/2]=a[i+1];
			}
		}
		sort(b,b+n);
		cout<<b[(n)/2]<<"\n";
		for (int i = 0; i < f; ++i)
		{
			
			cout<<a[i]<<" ";
		}
		cout<<"\n";*/
	}
}