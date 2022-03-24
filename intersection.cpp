#include<iostream>
using namespace std;

int main(){
 int n,m;
 cin>>n>>m;
 int a[n],b[m];
 for(int i=0;i<n;i++)
 cin>>a[i];
 for(int i=0;i<m;i++)
 cin>>b[i]; 
 int count=0;
 for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
         if(a[i]==b[j]){
         cout<<a[i]<<" ";
         count=1;
         }
     }
 }
  if(count==0)
  cout<<"-1";
 return 0;
}