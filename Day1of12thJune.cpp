#include <iostream>
using namespace std;

class Tracker
{
    public:
      int spendingrate,amount,balance,date,year,month,items,price,i ;
      string comments;

void Expenses()
{
    cout << "How much in the scale of 1 to 10 do you feel your  spending has been today?";
    cin >> spendingrate;
    cout <<"What exactly are the things you bought with their prices ?";
    cout << "How many items did you buy";
    cin >> items;
    items = i;
    for (i=0; i<items;i++) 
    {
        cin >> items >> price;
        cout << items <<"\t-\t"<<price;
}
    
}

    
};

int main(){ 
Tracker Clothing;
Clothing.Expenses();
}