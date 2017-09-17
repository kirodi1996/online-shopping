#include <bits/stdc++.h>
using namespace std;
int n,c,temp;
int func(int num,int array[])
{
    int cows=1,pos=array[0];
    for (int i=1; i<n; i++)
    {
        if (array[i]-pos>=num)
        {
            cout<<temp<<"."<<"arr="<<array[i]<<"num="<<num<<"pos="<<pos<<endl;
            temp++;
            pos=array[i];
            cows++;
            if (cows==c)
                return 1;
        }
    }
    return 0;
}
int bs(int array[])
{
    int ini=0,last=array[n-1],max=-1;
    while (last>ini)
    {
        //cout<<last<<" "<<ini<<endl;
        int mid=(ini+last)/2;
        cout<<temp<<"."<<"mid="<<mid<<endl;
        temp++;
        if (func(mid,array)==1)
        {
            //cout<<mid<<endl;
            cout<<temp<<"."<<"mid="<<mid<<" "<<endl;
            temp++;
            if (mid>max)
                max=mid;
            ini=mid+1;
        }
        else{
            last=mid;
            cout<<temp<<"."<<"last="<<last<<endl;
            temp++;
        }
    }
    return max;
}
int main()
{
    int t;
    temp=1;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d",&n,&c);
        int array[n];
        for (int i=0; i<n; i++)
            scanf("%d",&array[i]);
        sort(array,array+n);
        //cout<<" dfsa \n";
        int k=bs(array);
        printf("%d\n",k);
    }
    return 0;
}