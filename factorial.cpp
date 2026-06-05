// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int  fact(n)=0;
//     if(n>0){
//         cout<<fact(n);
//     } 
//     else 
//    return 1;
   
    

// return 0;
// 
// 
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
   int fact=1;
   for(int i=1;i<=n;i++){
    fact=fact*i;
   }
cout<<fact;
    

return 0;
}



// #include<iostream>
// using namespace std;

// // int main(){
//     int n;
//     cin>>n;
//     int count=0;
//     while (n>0)
//     {
//         n=n/10;
//         count++;
    
//     }
//     cout<<count;
    
    

// return 0;
// }