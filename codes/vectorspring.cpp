vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
vector<int> result;
int t=0,b=A.size()-1;
int l=0,r=A[0].size()-1;
int visit[A.size()][A[0].size()];
for(int i=0;i<A.size();i++)
for(int j=0;j<A[0].size();j++)
visit[i][j]=0;
while(t<=b && l<=r)
{
int i=t,j=l;
while(j<=r)
{
if(!visit[i][j]) result.push_back(A[i][j]),visit[i][j]=1;
j++;
}
i=t;j=r;
while(i<=b)
{
if(!visit[i][j]) result.push_back(A[i][j]),visit[i][j]=1;
i++;
}
i=b;j=r;
while(j>=l)
{
if(!visit[i][j]) result.push_back(A[i][j]),visit[i][j]=1;
j--;
}
i=b;j=l;
while(i>t)
{
if(!visit[i][j]) result.push_back(A[i][j]),visit[i][j]=1;
i--;
}
t++;b--;
l++;r--;
}
return result;
}