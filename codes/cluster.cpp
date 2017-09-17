#include <bits/stdc++.h>
using namespace std;
 

int isSafe(vector<vector<int> > M,int row, int col, bool [][]visited,int ROW,int COL)
{
   return (row >= 0) && (row < ROW) &&     
           (col >= 0) && (col < COL) &&      
           (M[row][col] && !visited[row][col]); 
}
 

void DFS(vector<vector<int> > M, int row, int col, bool [][]visited,int ROW,int COL)
{
    
    static int rowNbr[] = {-1, -1, -1,  0, 0,  1, 1, 1};
    static int colNbr[] = {-1,  0,  1, -1, 1, -1, 0, 1};
 
    // Mark this cell as visited
    visited[row][col] = true;
 
    // Recur for all connected neighbours
    for (int k = 0; k < 8; ++k)
        if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited,ROW,COL) )
            DFS(M, row + rowNbr[k], col + colNbr[k], visited,ROW,COL);
}
 
// The main function that returns count of islands in a given boolean
// 2D matrix
int countIslands(vector <vector<int> > M,int ROW,int COL)
{
    
    bool visited[ROW][COL];
    memset(visited, 0, sizeof(visited));
 
    
    int count = 0;
    for (int i = 0; i < ROW; ++i)
        for (int j = 0; j < COL; ++j)
            if (M[i][j] && !visited[i][j]) // If a cell with value 1 is not
            {                         // visited yet, then new island found
                DFS(M, i, j, visited,ROW,COL);     // Visit all cells in this island.
                ++count;                   // and increment island count
            }
 
    return count;
}
 

int main()
{
    std::vector<std::vector<int> > M;
    int row=M.size();
    int col=M[0].size();
    countIslands(M,row,col);
 
    return 0;
}