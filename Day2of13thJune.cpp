#include <iostream>
using namespace std;

class Tracker
{
    public:
      int spendingrate,amount,balance,date,year,month,numitems,price,i ;
      string comments, 
// Users input on her spending
int Expenses()
{
    cout << "How much in the scale of 1 to 10 do you feel your  spending has been today?";
    cin >> spendingrate;
    cout <<"What exactly are the things you bought with their prices ?";
    while (true)
    {
        cout <<"What are the things that you bought with their prices? If you have finished your inputs write(finish)";
        cin<< items << price;
        if (items=="finish")
        {break;}


        cout << items <<"\t-\t"<< price;
        
    }
}
    
};

    


int main(){ 
Tracker Clothing;
Clothing.Expenses();
}
