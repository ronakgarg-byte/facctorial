#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter a "<<endl;

    cin>>a;
    
    cout<<"enter b"<<endl;
    cin>>b;
    if(a<b){
    {
   int  nextNum=a;
   while(nextNum<=b){
   if(nextNum%2!=0)
{
    cout<<nextNum<<endl;
 }
nextNum++;
   }

    }
    
   }
   else 
   cout<<"a should be less than b";
       
return 0;
}