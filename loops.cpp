// #include<iostream>
// using namespace std;

// // int main(){
// //     for(int i=0;i<=5;i++){
// //       for(int j=0;j<=i;j++){
// //     cout<<"*";
// //      } 

// //         cout<<endl;
// //     }
// // return 0;
// // }
// int main(){
//     for(int i=0;i<=5;i++){
//       for(int j=5;j>=i;j--){
//     cout<< j;
//      } 

//         cout<<endl;
//     }
// return 0;
// }
// square upto n number using while loop not using for loop
#include<iostream>
using namespace std;

int main(){
  int num=1;
  int max;
  cin>>max;
  while(num<=max){
    cout<<num*num<<" ";
    num++;
  }
  
return 0;
}