#include <bits/stdc++.h>
using namespace std;
 
// Size of given matrix is M X N
int  M; 
int  N; 
 
 
// A recursive function to replace previous value 'prevV' at  '(x, y)'
// and all surrounding values of (x, y) with new value 'newV'.
void floodFillUtil(vector<vector<char> > mat, int x, int y, char prevV, char newV)
{
    // Base cases
    if (x < 0 || x >= M || y < 0 || y >= N)
        return;
    if (mat[x][y] != prevV)
        return;
 
    // Replace the color at (x, y)
    mat[x][y] = newV;
 
    // Recur for north, east, south and west
    floodFillUtil(mat, x+1, y, prevV, newV);
    floodFillUtil(mat, x-1, y, prevV, newV);
    floodFillUtil(mat, x, y+1, prevV, newV);
    floodFillUtil(mat, x, y-1, prevV, newV);
}
 
// Returns size of maximum size subsquare matrix
// surrounded by 'X'
int replaceSurrounded(vector<vector<char> > mat)
{
   // Step 1: Replace all 'O'  with '-'

   // return mat;
}
 
// Driver program to test above function
int main()
{
    int n,m;
    cin>>m>>n;
    M=m,N=n;
      vector<vector<char> > mat(m,vector<char>(n));

      vector<vector<char> > temp(m,vector<char>(n));
      for (int i = 0; i < m; ++i)
      {
        for (int j = 0; j < n; ++j)
        {
          cin>>mat[i][j];
        }
      }
       if(M==1 && N==1){
        mat[0][0]='X';
    }
     // cout<<"hello";
      for (int i=0; i<M; i++)
      for (int j=0; j<N; j++)
          if (mat[i][j] == 'O')
             mat[i][j] = '-';
  
   
   // Call floodFill for all '-' lying on edges
   for (int i=0; i<M; i++)   // Left side
      if (mat[i][0] == '-'){

        floodFillUtil(mat, i, 0, '-', 'O');
        //cout<<"hello";
      }
   for (int i=0; i<M; i++)  //  Right side
      if (mat[i][N-1] == '-'){
        //cout<<"w";
        floodFillUtil(mat, i, N-1, '-', 'O');
      }
   for (int i=0; i<N; i++)   // Top side
      if (mat[0][i] == '-'){
        //cout<<"shk";
        floodFillUtil(mat, 0, i, '-', 'O');
      }
   for (int i=0; i<N; i++)  // Bottom side
      if (mat[M-1][i] == '-'){
        //cout<<"2";
        floodFillUtil(mat, M-1, i, '-', 'O');
      }
    
   // cout<<mat[1][1]<<" "<<endl;
   // Step 3: Replace all '-' with 'X'
   for (int i=0; i<M; i++)
      for (int j=0; j<N; j++)
         if (mat[i][j] == '-')
             mat[i][j] = 'X';
 
     for (int i=0; i<M; i++)
    {
      for (int j=0; j<N; j++)
          cout << mat[i][j] << " ";
      cout << endl;
    }     
}