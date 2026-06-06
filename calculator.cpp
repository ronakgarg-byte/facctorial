#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    cout<<"press 1 or add"<<endl;
    cout<<"press 2 or subtract"<<endl;
    cout<<"press 3 or multiply"<<endl;
    cout<<"press 4 or divide"<<endl;
    int n;
    cin>>n;
    if(n==1){
        cout<<a+b<<endl;
        
    }
    else if(n==2){
        cout<<a-b<<endl;
    }
    else if(n==3){
        cout<<a*b<<endl;

    }
    else if(n==4){
        cout<<a/b<<endl;
    }
    else 
    cout<<"not a function"<<endl;
return 0;
}