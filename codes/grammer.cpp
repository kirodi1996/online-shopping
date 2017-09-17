#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char s[20],f[20];
    int i,j=1,k=0,count=0;
    char arr1[3]="aA";
    cout<<"grammer is A->aA|b\n";
    cout<<"Enter a string::";
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
    	f[i]=s[i];
    }
    for(i=strlen(s)-1;i>=0;)
    {
    	
    	if('b'==s[i])
        {
            
            k=0;
            k++;
            if(k==1)
        {
            s[i]='A';
            
        }    
            
        }
       else if(arr1[j]==s[i] && arr1[j-1]==s[i-1] )
        {
            
            s[i-1]='A';
            s[i]='\0';
			i--;           
        }
        
     	
        
    }
    
    if(s[0]=='A' && s[1]=='\0')
    {
    	printf("accepted\n\n");
    	printf("Derivation::");
    	i=0;
    	while(f[i]!='\0')
    	{
    		if(f[i]=='a')
    		{
    			count++;
    		}
    		
    		i++;
    	}
    	
    	for(i=0;i<=count;i++)
    	{
    		for(k=0;k<i;k++)
    		{
    			printf("a");
    		}
    		printf("A->");
    	}
    	printf("%s",f);
    	return 0;
    }
    else
    {
    	printf("not accepted");
    	
    }
}
