#include <bits/stdc++.h>

using namespace std;

int main() {
  int a,t,temp
  cin>>a;
  std::vector<int> v;
  cout<<"Q ";
  for(int i=0;i<a;i++){
    v.at(i)=0;
    cout<<v.at(i)<<" "
  }
  cout.flush();
  int temp,t;
  cin>>temp;
  for(int i=0;i<a;i++){
    cout<<"Q ";
    v.at(i)=1;
    for(int j=0;j<a;j++){
    cout<<v.at(j)<<" "
    }
    cout.flush();
    cin>>t;
    if(t>temp){
        temp=t;
    }
    else{

        v.at(i)=0;
    }

  }
  cout<<"A ";
  for(int j=0;j<a;j++){
    cout<<v.at(j)<<" "
    }


    return 0;
}
