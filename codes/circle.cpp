

#include <bits/stdc++.h>
#define MAX 105
 int mat[MAX][MAX]; 
 int visited[MAX][MAX]; 
 int max_x, max_y; 
 bool dist(int x, int y , int x1 , int y1 , int r) 
 {
  if((x - x1) * (x - x1) + (y - y1 ) * (y - y1 ) <= r*r)
   { 
        return true; 
    } 
   return false; 
}
 bool valid(int x, int y)
  {
   if(x >= 0 && x <= max_x && y >= 0 && y <= max_y && mat[x][y] == 0 && visited[x][y] == 0)
    {
     return true;
    }
       return false;
   }

string Solution::solve(int x, int y, int N , int R , vector &X_cord, vector &Y_cord)
 {
  memset(mat, 0 , sizeof(mat)); 
  memset(visited, 0 , sizeof(visited));
   max_x = x; max_y = y; 
   vector<pair<int, int> > v; 
   for(int i = 0; i < N; i++) 
   {
        v.push_back(make_pair(X_cord[i], Y_cord[i])); 
    }
    for(int i = 0; i <= x+ 1; i++)
    { 
      for(int j = 0; j <= y+1; j++)
       { 
           bool flag = true;
            for(int k = 0; k < N; k++) 
       { 
        if(dist(i, j , v[k].first , v[k].second, R)) 
       { 
            flag = false; 
            break; 
       } 
    } 
       if(flag)
    {
         mat[i][j] = 0; 
    } 
     else
        { 
            mat[i][j] = 1;
        }
            }
    } // cout << mat[x][y] <<" " << dist(x, y, x, y, R) << endl; if(mat[0][0] == 1 || mat[x][y] == 1) { string ret = "NO"; return ret; } else { visited[0][0] = 1;

    queue<pair<int , int> >q ;
    q.push(make_pair(0, 0));
    int dest1 = x;
    int dest2 = y;
    while(!q.empty()){
        pair<int , int > p1 = q.front();
        q.pop();
        int x  = p1.first;
        int y  = p1.second;
        if(x == dest1 && y == dest2) {
            string ret = "YES";
            return ret;
        }
        if(valid(x-1, y)) {
            visited[x-1][y] = 1;
            q.push(make_pair(x-1 , y));
        }
        if(valid(x, y-1)) {
            visited[x][y-1] = 1;
            q.push(make_pair(x , y-1));
        }
        if(valid(x+1, y)) {
            visited[x+1][y] = 1;
            q.push(make_pair(x+1 , y));
        }
        if(valid(x, y+1)) {
            visited[x][y+1] = 1;
            q.push(make_pair(x , y+1));
        }
        if(valid(x+1, y+1)) {
            visited[x+1][y+1] = 1;
            q.push(make_pair(x+1 , y+1));
        }
        if(valid(x+1, y-1)) {
            visited[x+1][y-1] = 1;
            q.push(make_pair(x+1 , y-1));
        }
        if(valid(x-1, y+1)) {
            visited[x-1][y+1] = 1;
            q.push(make_pair(x-1 , y+1));
        }
        if(valid(x-1, y-1)) {
            visited[x-1][y-1] = 1;
            q.push(make_pair(x-1 , y-1));
        }
    }
    string ret = "NO";
    return ret;
}


