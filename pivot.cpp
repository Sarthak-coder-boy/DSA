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
     if(a[mid]>=a[0]){
         s=mid+1;
     }
     else{
         e=mid;
     }
     mid=(s+e)/2;
 }
 cout<<"The index of pivot element is "<<s;
 return 0;
}