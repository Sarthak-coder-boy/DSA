#include<iostream>
using namespace std;

int main (){
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
     cin>>a[i];
 }
 int s=0,e=n-1;
 int mid=(s+e)/2;
 while(s<e){
     if(a[mid]<a[mid+1]){
         s=mid+1;
     }
     else{
         e=mid;
     }
     mid=(s+e)/2;
 }
 cout<<"Element "<<a[s]<<" is the peak element at index "<<s;
 return 0;
}