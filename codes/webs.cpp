#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int GOOD = 1, BAD = 0;
 
int tree[300100][30];
int cnt = 1;
char s[300100];
int l, x;
int good[300100], bad[300100];
int parent[300100];
char pchar[300100];
int cantuse[300100];
 
void insert(int type, int i = 0, int u = 1, int p = 0, char x = '\0') {
  //  cout<<type<<i<<u<<p<<x<<s[i]<<endl;
    parent[u] = p;
    pchar[u] = x;
    if (type == GOOD)
        good[u]++;
    else
        bad[u]++;
    if (i < l) {
        if (tree[u][s[i] - 'a'] == 0)
            tree[u][s[i] - 'a'] = ++cnt;
      //  cout<<tree[u][s[i]-'a']<<endl;
        cout<<"u="<<u<<"bad="<<bad[u]<<"tree[u][i]="<<tree[u][i]<<"good="<<good[u]<<endl;
        insert(type, i + 1, tree[u][s[i] - 'a'], u, s[i]);
    }
}
 
vector<int> nodes;
 
int dfs(int u) {
    if (bad[u] == 0)
        return 0;
    if (u != 1 && bad[u] > 0 && good[u] == 0) {
        nodes.push_back(u);
      //  cout<<bad[u]<<endl;
        return bad[u];
    }
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        if (tree[u][i] != 0) {
          //  cout<<tree[u][i]<<endl;
            ans += dfs(tree[u][i]);
        }
    }
    return ans;
}
 
int main(void) {
    int n;
    scanf("%d", &n);
    int total = 0;
    for (int i = 1; i <= n; i++) {
        string type;
        cin >> type;
        scanf("%s", s);
        l = strlen(s);
        x = i;
        insert(type[0] == '+');
        if (type[0] != '+') total++;
    }
    int done = dfs(1);
    if (done < total) {
        printf("-1\n");
    }
    else {
        vector<string> fin;
        for (int i = 0; i < nodes.size(); i++) {
            string s;
            int u = nodes[i];
            while (parent[u] != 0) {
                s += pchar[u];
                u = parent[u];
            }
            reverse(s.begin(), s.end());
            fin.push_back(s);
        }
        sort(fin.begin(), fin.end());
        printf("%d\n", (int)fin.size());
        for (int i = 0; i < fin.size(); i++)
            printf("%s\n", fin[i].c_str());
    }
}