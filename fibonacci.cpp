#include<iostream>
using namespace std;

int main (){
 int n;
 cin>>n;
 int a=0 ,b=1;
 cout<<a<<" "<<b<<" ";
 for(int i=2;i<n;i++){
int nt=a+b;
cout<<nt<<" ";
a=b;
b=nt;
 }
 return 0;
}