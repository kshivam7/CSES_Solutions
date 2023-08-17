#include<iostream>
#include<math.h>
using namespace std;
 
void Toh(int n,int A,int B,int C){
   
   if(n==1){
       cout<<A<<' '<<C<<endl;
       return;
   }
   Toh(n-1,A,C,B);
   cout<<A<<' '<<C<<endl;
   Toh(n-1,B,A,C);
    }
 
int main(){
    int n;
    cin>>n;
    int a{1},b{2},c{3};
    cout<<(pow(2,n)-1)<<endl;
    Toh(n,a,b,c);
    return 0;
}