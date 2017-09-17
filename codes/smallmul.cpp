#include <bits/stdc++.h>
using namespace std;

vector<int> flag, parent, val;

string solve(int n) {
	
    int p;
	int q;
	int i;
	int tot = 0;
    
    //final string
    string ret = "";

    //queue for bfs
    queue <int> Q;

    //initial node
    int temp = 1%n;
    flag[temp] = 1;
    val[temp] = 1;
    Q.push(temp);

    while(true) {
        
		//pop from queue
        temp = Q.front();
        Q.pop();
        p = temp;
        //cout<<p<<" ";
        //reached final state
        //build solution here
        if(p == 0) {
    
            p  =0;
           // cout<<val[p]<<" --->";
            ret += (char)(val[p]+'0');
            p = parent[p];
            // cout<<"val[p]="<<val[p]<<"ret="<<ret<<"p="<<p<<endl;
            while(p != 0) {

                ret += (char)(val[p]+'0');
                p = parent[p];
              //  cout<<"val[p]="<<val[p]<<"ret="<<ret<<"p="<<p<<endl;
            }
            
            reverse(ret.begin(), ret.end());
            return ret;
        }
        
        //visit two neighbors p*10 and p*10+1
        //if already not visited
        q = (p*10) % n;
        
        if(flag[q] == 0)
			Q.push(q), flag[q] = 1, parent[q] = p, val[q]=0; 

        q++;
        
        if(q >= n) q -= n;
        
		if(flag[q] == 0)
            Q.push(q), flag[q] = 1, parent[q] = p, val[q] = 1;
    }
}

string getnum(int A) {
    
	flag.clear(), parent.clear(), val.clear();
    flag.resize(A), parent.resize(A), val.resize(A);
    
	return solve(A);
}
    
int main() {
	
	cout << getnum(55) << endl;
	return 0;
}
