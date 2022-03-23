#include<iostream>
using namespace std;

int main (){
 int n;
 cin>>n;
 for(int i=1;i<=n;i++){
     for(int j=1;j<i;j++){
         cout<<" ";
     }
     for(int k=i;k<=n;k++){
         cout<<k;
     }
 cout<<endl;
 }
 return 0;
}

// 5
// 12345
//  2345
//   345
//    45
//     5