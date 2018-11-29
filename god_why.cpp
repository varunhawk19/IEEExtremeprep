#include<bits/stdc++.h>
using namespace std;
bool func(){
	register int a,b
		temp;
	bool flag=true;
	cin>>a>>b;
	vector<int> v;
	for(register int i=0;i<b;i++){
		cin>>temp;
		v.push_back(temp);
	}
	for(register int i=0;i<b;i++){
		for(register int j=i;j<b;j++){
			if(v.at(i)+v.at(j)==a){
				cout<<v.at(i)<<" "<<v.at(j)<<endl;
				return true;
			}
		}
	}
	return false;

}
int main(){
	int t;
	cin>>t;
	while(t--){
		bool truth=func();
		if(!func){
			cout<<"!OK"<<endl;
		}
	}
	return 0;
}
