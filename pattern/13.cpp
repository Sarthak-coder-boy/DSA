 #include<iostream>
using namespace std;

int main (){
 int n;
 cin>>n;
 for(int i=1;i<=n;i++){ 
     for(int space=1;space<i;space++){
         cout<<" ";
     } 
     for(int j=(n-i+1);j>=1;j--){ 
         cout<<i;
     }
     cout<<endl;
 }
 
 return 0;
}

// 5
// 11111
//  2222
//   333
//    44
//     5

 