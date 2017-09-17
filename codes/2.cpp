#include <bits/stdc++.h>

using namespace std;

int longest(string array, int size)
{
    char currentNumber = array[0];
    int Max = 1, longestMax = 1;
    for(int i = 1; i < size; i++)
    {
    	if(array[i]=='='){//for process ==
    		continue;
    	}
        if(array[i] == currentNumber){
            Max++;
            // longestMax = currentMax;
            // cout<<"hello\n";
        }
        else
        {
            currentNumber = array[i];
            if(Max > longestMax){
                longestMax = Max;
            }
            Max = 1;
        }
    }
    if(Max > longestMax){
        longestMax = Max;
    }
    return longestMax;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len = s.length();
		int k=0;
		
		int flag=0;
		for(int j=0;j<len;j++){
			if(s[j]=='>' || s[j]=='<'){//for check string have all == or not
				flag=1;
			}
		}


		int longests = longest(s, len);
		if(!flag)
			cout<<"1"<<"\n";
		else
			cout<<longests+1<<"\n";
	}
}