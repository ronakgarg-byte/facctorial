#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i = s.length()-1;i>=0;i--)//indexing humesha 0 se start hoti hai toh hello main h 0 number pe hai 
    {
        cout<<s[i];
    }
    return 0;
}












































