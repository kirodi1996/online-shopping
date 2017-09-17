#include <bits/stdc++.h>
#include <tuple>
using namespace std;
int main(){
	tuple <int ,string ,int> t1;
	t1=make_tuple(50,"rishabh",200);
	cout<<get<0>(t1)<<" ";
}