#include <iostream>
using namespace std;

class Tracker
{
    public:
     float Totalspending = 0;
     
// Users input on her spending
void  Expenses()
{
    int spendingrate;
    string comment;

    // Users feeling towards her spending
    cout << "How much in the scale of 1 to 10 do you feel your  spending has been today with 10 as maximum spending?";
    cin >> spendingrate;

    if(spendingrate>10||spendingrate<0)
    cout<<"That is an invalid input";
    else if(spendingrate>=7)
    cout<<" Guilty !!Today you went all in. Next time prepare a list before making any purchase";
    else if (spendingrate>=4)
    cout<<"Good efforts!! You seem to have put good efforts ";
    else 
    cout <<"Keep up the good efforts. Your account will appreciate that";

// user to list her purchases
    cout <<"\n What exactly are the things you bought with their prices ?";

    string items;
    float price;

     cout <<"What are the things that you bought with their prices? If you have finished your inputs write(done)";
     
    while (true)
    {
       
        cin>> items ;
        if (items=="done")
        {break;}

        cin>>price;
        cout << items<<"\t-\t"<<price;

        

        Totalspending+=price;
        cout<<"\n"<<Totalspending;
        
    }
}

void  spendinglimit()
   
{
  const int spendlimit = 4500;
  if (Totalspending>spendlimit)
  {
    cout<<"Girl you are out of the budget!!You gonna be broke if you continue with this kind of behaviour. No lies.TAFADHALI BADILISHA!Stick to yhe budget";
  }
 else 
 cout <<"You did nice today.\n You continue this way and You gonna be grateful over time. \n I am so proud of me!";
}


};

    


int main(){ 
Tracker Clothing;
Clothing.Expenses();
Clothing.spendinglimit();
}
