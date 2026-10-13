#include <iostream>
using namespace std;

int main() 
{
int pin=1234;
int totalmoney=50000;
int amount;
int remainingmoney;
int a;

cout<<"enter pin=";
cin>>a;

if (a==pin)
{
 
cout<<"enter amount=";
    cin>>amount;
if(amount<0)
{
cout<<"invalid amount";
}

else {
    if(amount>totalmoney){
        cout<<"insufficiet amount.";
    }
else{
cout<<"withdrawal successful."<<endl;

remainingmoney=totalmoney-amount;
cout<<"remaining money=";
cout<<remainingmoney<<endl;
}
}}
else
{
cout<<"wrong pin";}

    return 0;
}