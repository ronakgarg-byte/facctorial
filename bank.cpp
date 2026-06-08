#include<iostream>
using namespace std;
 double tbalance=5000;
int main(){
    int pin;
    
    int attempts=3;
    double debit;
    double credit;
    int your_pin=999;
    
    cout<<"welcome"<<endl;
    cout<<"enter you pin"<<endl;
    cin>>pin;
    cout<<"your pin is-"<<pin<<endl;
    if(your_pin!=pin)
    {
        cout<<"invalid pin"<<endl;
    }
    else{int n;
        cout<<"press 1- credit balance"<<endl;
        cout<<"press 2- debit balance"<<endl;
        cout<<"press 3- check balance"<<endl;
        cout<<"press 4- for exit"<<endl;
        
        cin>>n;
       
        if(n==1){
            cout<<"enter amount to deposit"<<endl;
             
            cin>>credit;
            if(credit<0){
                cout<<"you cant deposit less than 0"<<endl;
                
            } else{
            cout<<"you creditied "<<credit;
            tbalance=tbalance+credit;
            cout<<tbalance<<endl;
            
            }
        }
        else if(n==2){
            cout<<"enter amount to withdraw"<<endl;
            cin>>debit;
            if(debit>tbalance){
                cout<<"insufficent balance"<<endl;
            }
            else{
            cout<<"you debited"<<debit<<endl;
            tbalance=tbalance-debit;
            // cout<<tbalance<<endl;
            }
        }
        else if(n==3){
            cout<<"check balance"<<endl;
            cout<<tbalance<<endl;
            
        }
        else if(n==4)
            cout<<"thank you"<<endl;
        }
        else {
        cout <<"invalid selection";
        }

    }


return 0;

