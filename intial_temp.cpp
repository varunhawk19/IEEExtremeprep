#include <bits/stdc++.h>
using namespace std;
struct Node{
	string parent,child;
	long long int below,below_direct;

}tem;
vector <Node> data;
int main(){
	long long int n,q;
	cin>>n>>q;
	for(int i=0;i<n-1;i++){
		Node temp;
		cin>>temp.parent;
		cin>>temp.child;
		cin>>temp.below;
		cin>>temp.below_direct;
		data.push_back(temp);
	}
	for(int i=0;i<data.size();i++){
		tem=data.at(i);
		cout<<tem.parent<<" "<<tem.child<<" "<<tem.below<<" "<<tem.below_direct<<endl;
	}
	return 0;
}
