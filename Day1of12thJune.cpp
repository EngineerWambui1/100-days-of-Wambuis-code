#include <iostream>
using namespace std;

class Tracker
{
    public:
      int spendingrate,amount,balance,date,year,month,numitems,price,i,items ;
      string comments;
// Users input on her spending
void Expenses()
{
    cout << "How much in the scale of 1 to 10 do you feel your  spending has been today?";
    cin >> spendingrate;
    cout <<"What exactly are the things you bought with their prices ?";
    cout << "How many items did you buy";
    cin >> numitems;
    items = i;
    for (i=0; i<numitems;i++) 
    {
        cout << "Input item "<< i<<"and their price";
        cin >> items >> price;
        cout << items <<"\t-\t"<<price;
}
    
}

void spending limit()
{
while (true)

}

    
};

int main(){ 
Tracker Clothing;
Clothing.Expenses();
}