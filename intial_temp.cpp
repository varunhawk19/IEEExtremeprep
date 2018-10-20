#include <bits/stdc++.h>
using namespace std;
struct Node{
	string parent,child;
	long long int below,below_direct;

}tem;
struct Query{
	string data;
	int type;
}te;
vector<Query> Queries;
vector <Node> data;
int main(){
	long long int n,q;
	cin>>n>>q;
	for(int i=0;i<n;i++)
	{
		Node temp;
		cin>>temp.parent;
		cin>>temp.child;
		cin>>temp.below;
		cin>>temp.below_direct;
		data.push_back(temp);
		cout<<" y";
	}
	for(int i=0;i<q;i++)
	{
		Query te;
		cin>>te.data>>te.type;
		Queries.push_back(te);
	}
	for(int i=0;i<n;i++){
		tem=data.at(i);
		cout<<tem.parent<<" "<<tem.child<<" "<<tem.below<<" "<<tem.below_direct<<endl;
	}
	cout<<"hey";
	for(int i=0;i<Queries.size();i++){
		Query te;
		te=Queries.at(i);
		cout<<te.data<<" "<<te.type<<endl;
	}
	return 0;
}
