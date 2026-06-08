#include<iostream>
using namespace std;

int main(){
    string s1="comomo";
    char a= 'a';
    char c='b';
    char m= 'n';
    s1[0]=c;
    s1[1]=s1[3]=s1[5]=a;
    s1[2]=s1[4]=m;
    cout<<s1<<endl;


return 0;
}