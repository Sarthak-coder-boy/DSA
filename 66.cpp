 #include<bits/stdc++.h>
using namespace std;

int main (){
 int n;
 cin>>n;
 int a[n];
 int num=0;
 for(int i=0;i<n;i++)
  cin>>a[i];
 for(int j=0;j<n;j++){
     num=num*10+a[j];
 }
  
 num+=1;
 vector<int>v;
 while(num!=0){
     int c= num%10;
     v.push_back(c);
     num=num/10;
 }
  
         for(int k=(v.size()-1);k>=0;k--)
         cout<<v[k]<<" ";
 return 0;
}