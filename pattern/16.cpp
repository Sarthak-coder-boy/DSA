#include<iostream>
using namespace std;

int main (){
 int n;
 cin>>n;
 for(int i=1;i<=n;i++){
     for(int j=n-i;j>=1;j--){
         cout<<" ";
     }
     for(int k=1;k<=i;k++){
         cout<<k;
     }
     for(int a=i-1;a>=1;a--){
         cout<<a;
     }
 cout<<endl;
 }
 return 0;
}

// 5
//     1
//    121
//   12321
//  1234321
// 123454321