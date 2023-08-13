#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int num,k=0;
    vector<int>mis;
    cin>>num;
    for(int i{0};i<num-1;i++){
        long long int in;
        cin>>in;
        mis.push_back(in);
    }
    sort(mis.begin(),mis.end());
    for(auto x:mis){
        ++k;
        if(x!=k){
            cout<<k<<endl;
            mis.push_back(k);
            break;
        }
        else{
            continue;
    }}
    if(mis.size()<num){
            cout<<k+1<<endl;
    }
    return 0;
}