// #include<iostream>
// using namespace std;

// int main(){
//     string name[]={"dheeraj","akshat","jatin","ronak"};
// swap(name[0],name[3]);
// swap(name[1],name[2]);
// cout<<" "<<name[0];
// cout<<" "<<name[1];
// cout<<" "<<name[2];
// cout<<" "<<name[3];
// return 0;
// }
#include<iostream>
using namespace std;

int main(){
 string name[]={"dheeraj","akshat","jatin","ronak"};
 int size=sizeof(name)/sizeof(name[0]);
 
for(int i= size-1;i<=sizeof(name);i--){
cout<<" "<<name[i];
}
return 0;
}

