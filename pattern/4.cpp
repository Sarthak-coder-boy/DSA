#include<iostream>
using namespace std;

int main (){
 int n;
 cin>>n;
     char ch='A';
 for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
         cout<<ch<<" ";
         ch=ch+1;
     }
     cout<<endl;
 }
 
 return 0;
}
// 5
// A B C D E 
// F G H I J
// K L M N O
// P Q R S T
// U V W X Y