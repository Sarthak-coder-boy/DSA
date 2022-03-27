#include<iostream>
using namespace std;

int main (){
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
     cin>>a[i];
 }
 for(int i=0;i<n-1;i++){ 
     for(int j=i+1;j<n;j++){
      if(a[i]==a[j]){
      cout<<a[i]<<" ";
        
      }
     }
 }

 return 0;
}



//  Method number2


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int nums[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }

//     int ans = 0;
//     int i = 0;

//     while (i < n)
//     {
//         int j = i + 1;
//         if (nums[i] == nums[j] || nums[i] == nums[j + 1] || nums[i] == nums[j + 2] || nums[i] == nums[j + 3])
//         {
//             ans = nums[i];
//             break;
//         }
//         i++;
//     }
//     cout << ans;

//     return 0;
// }