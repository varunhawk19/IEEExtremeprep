#include <bits/stdc++.h>

using namespace std;

int main() {
  for(int t=0;t<100;t++){
  int t,temp
  std::vector<int> v;
  cout<<"Q ";
  for(int i=0;i<100;i++){
    v.at(i)=0;
    cout<<v.at(i)<<" "
  }
  cout.flush();
  int temp,t;
  cin>>temp;
  for(int i=0;i<100;i++){
    cout<<"Q ";
    v.at(i)=1;
    for(int j=0;j<100;j++){
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
  for(int j=0;j<100;j++){
    cout<<v.at(j)<<" "
    }

  }
  return 0;
}


