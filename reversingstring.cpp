// #include<iostream>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     for(int i = s.length()-1;i>=0;i--)//indexing humesha 0 se start hoti hai toh hello main h 0 number pe hai 
//     {
//         cout<<s[i];
//     }
//     return 0;
// }
// #include<iostream>

// using namespace std;

// int main(){
//     int arr[]={4,7,2,9,1,7,9};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<=size;i++){
//         if(arr[i]%2==0){
//             cout<<arr[i];
//         }
//     }
// return 0;
// }
#include<iostream>
using namespace std;

int main(){
   string fruits[]= {"apple", "banana", "cherry", "avocado", "blueberry"};
   int size=sizeof(fruits)/sizeof(fruits[0]);
   for(int i=0;i<=size;i++){
    if(fruits[i][0]=='a'||fruits[i][0]=='b'){
cout<<fruits[i]<<endl;
    }
   }
return 0;
}








































