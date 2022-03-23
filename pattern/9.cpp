#include<iostream>
using namespace std;

int main (){
 int n;
 cin>>n;
 for(int i=n;i>=1;i--){
     char ch='A'+i-1;
     for(int j=1;j<=(n+1-i);j++){
         cout<<ch<<" "; 
         ch=ch+1;
     }
     cout<<endl;
 }
 
 return 0;
}

// 5
// E 
// D E
// C D E
// B C D E
// A B C D E