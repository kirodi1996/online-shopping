#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,k;
	char a[1000]="abc def ghi jkl abc pqr stu vwx yzh",b[1000];
	printf("Enter a string::");
	gets(b);
	int count=0,space=0;
	int position[10],index[10];
	for(i=0;i<(strlen(a)+1-strlen(b));i++)
	{
		k=0;
		if(a[i]==' ')
		{
			++space;
		}
		if(a[i]==b[0])
		{
		
		for(j=1;j<strlen(b);j++)
		{
			if(a[i+j]==b[j])
			{
				k++;
			}
		}
	
		if((k+1)==strlen(b))
		{
			count++;
			index[count]=i;
			position[count]=space+1;
		}
		else{
			printf("no match found");
			return 0;
		}
		}
		
			
	}
	
	printf("no of occurence of word::%d\n",count);
	for(j=1;j<=count;j++)
	printf("index::%d position::%d\n",index[j]+1,position[j]);
	count=0,space=0;
	
}
