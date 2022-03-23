#include<iostream>
using namespace std;

int setbit(int n){
    int count=0;
    while(n!=0){
    if(n&1==1)
    count++;
    n=n>>1;
    }
    return count;


}
int main (){
 int n,m;
 cin>>n>>m;
 cout<<"Total set bit is "<<setbit(n)+setbit(m);
  
 return 0;
}