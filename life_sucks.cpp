#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,t,temp;
    cin>>a;
    string value;
    for(int i=0;i<a;i++){
        value+="0 ";
    }
    cout<<"Q "<<value;
    cout.flush();
    cin>>t;
    for(int i=0;i<a;i++){
        value.at(i)='1';
        cout<<"Q "<<value;
        cout.flush();
        cin>>temp;
        if(temp>t){
            value.at(i)='0';
        }
        else{
            t=temp;
        }
        i++;
    }
    cout<<"A "<<value;
    return 0;
}
