#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    ll res=0;

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            res+=abs(arr[i]-arr[i+1]);
            swap(arr[i],arr[i+1]);
        }
    }
    cout<<res<<endl;
    return 0;
}
