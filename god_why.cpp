#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[]){
	register int t;
	cin>>t;
	while(t--){
		register int a,b,temp;
		string ans;
		cin>>a>>b;
		register bool flag=true;
		vector<int> v,t;
		for(register int i=0;i<b;i++){
			cin>>temp;
			v.push_back(temp);
		}
		vector<int>u(v);
		sort(u.begin(),u.end());
		for(register int i=0;i<u.size();i++){
			if(binary_search(u.begin(),u.end(),(a-u.at(i)))){
				t.push_back(u.at(i));
			}
		}
		if(flag){
			cout<<"!OK";
		}
		else{


		for(int i=0;i<=b;i++){
			for(int j=0;j<ans.length();j++)
				if(t.at(j)==v.at(i)){
					cout<<v.at(i)<<" "<<b-v.at(i);
				}
			
		}
		
		cout<<endl;
	}
	return 0;
}
