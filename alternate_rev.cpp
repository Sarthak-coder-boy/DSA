#include<iostream>
using namespace std;

int main (){
 int n;
 cin>>n;
 int a[n];
 int temp;
  
 for(int i=0;i<n;i++){
     cin>>a[i];
 }
  for(int i=0;i<n;i+=2){
    if(i+1<n){
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
    }
  }
 for(int i=0;i<n;i++)
 cout<<a[i]<<" ";
 return 0;
}