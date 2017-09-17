#include <bits/stdc++.h>
using namespace std;
int x,y;
void floodFillUtil(vector<vector<char>> mat, int M, int N, char prevV, char newV)
{
    // Base cases
    if (M < 0 || M >=x || N < 0 || N >= y)
        return;
    if (mat[M][N] != prevV)
        return;
 
    // Replace the color at (x, y)
    mat[M][N] = newV;
 
    // Recur for north, east, south and west
    floodFillUtil(mat, M+1, N, prevV, newV);
    floodFillUtil(mat, M-1, N, prevV, newV);
    floodFillUtil(mat, M, N+1, prevV, newV);
    floodFillUtil(mat, M, N-1, prevV, newV);
}
vector<vector<char>>  replacesorrornded(vector<vector<char> > v ){

	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < y; ++j)
		{
			if(v[i][j]=='0'){
				v[i][j]='-';
			}
		}

	}
	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < y; ++j)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	 for (int i=0; i<x; i++)   // Left side
      if (v[i][0] == '-')
        floodFillUtil(v, i, 0, '-', 'O');
	for (int i=0; i<x; i++)  //  Right side
      if (v[i][y-1] == '-')
        floodFillUtil(v, i, y-1, '-', 'O');
   for (int i=0; i<y; i++)   // Top side
      if (v[0][i] == '-')
        floodFillUtil(v, 0, i, '-', 'O');
   for (int i=0; i<y; i++)  // Bottom side
      if (v[x-1][i] == '-')
        floodFillUtil(v, x-1, i, '-', 'O');
 
   // Step 3: Replace all '-' with 'X'
   for (int i=0; i<x; i++)
      for (int j=0; j<y; j++)
         if (v[i][j] == '-')
             v[i][j] = 'X';

         return v;
}
int main(){
	int n,m;
	cin>>n>>m;
	x=n,y=m;
	vector<vector<char> > v(n,vector<char>(m));

	vector<vector<char> > temp(n,vector<char>(m));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>v[i][j];
		}
	}
	temp=replacesorrornded(v);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout<<temp[i][j]<<" ";
		}
		cout<<endl;
	}
}