/*Factory Load Balancer


You're managing a **factory with `n` machines**. Each machine can process a certain number of units per day. 
You need to **ship `x` total units**, and you want to figure out the **minimum number of days** required to complete the
 shipment **if all machines work in parallel**.

Input       
* `n`: Number of machines
* An array `speed[]` of size `n` where `speed[i]` = units per day machine `i` can produce
* `x`: Total number of units to be produced

---

### 🎯 Goal:

Find the **minimum number of days** required to produce at least `x` units.

---

 Example:

#### Input:

```text
n = 3
speed = [3, 2, 5]
x = 15
```

#### Output:

```text
2
```

#### Why?

* Day 1: 3 + 2 + 5 = 10 units
* Day 2: Another 10 units → 20 total → enough

So 2 days is enough.

---

### 💡 Hint:

You can’t use normal binary search on the array. Instead, use **binary search on the "answer" (number of days)**:

* Start with `low = 1`, `high = x / slowest speed * n`
* In each step, check: “Can we produce `x` units in `mid` days?”
* If yes → try fewer days.
* If no → try more.

---

### ✅ BONUS Challenge:

Add constraints like:

* Each machine can only run `k` consecutive days before cooling down.
* Or: There's an overtime cost for going over `d` days.

---

*/
#include <iostream>
 
using namespace std;

class Machine
{
private:
int units;
int speed;
bool isworking= true;
string response;
int machine_option;

public:

// checkup on the machine working status;
void machinestatus()
{ 
    cout<<"Is the machine in perfect condition. Kindly carry out inspection operation.(Type Yes or No)";
    cin>> response;
    if(response=="Yes")
    {
      isworking= true; 
      cout<<"Machine is ready for work"; 
    }
    else 
    {
        isworking = false;
        cout<<"The machine cannot be used for production today. Please check its maintenance";
    }
}

//input on machine speed in terms of production of units

void machine_speed()
{
cout<<"Machine speed in units per day ";
cin >> speed;

}
//input on the machines special condition
void Machine_working()
{
cout<<" Does the machine has special working conditions worth noting.\n Options viable.\n 1. It is okay. Runs throughout without stopping\n 2. Runs for three days then stops./n 3. Requires cooling after every 8 hours";
cin >> machine_option;
}


};

int main()
{
int no_ofmachines;
int units_perday[20]={};
int days_forproduction;
int load;
int total=0;

//user input on the number of machines available for production process
cout<<"How many machines are to be used for this operation  ";
cin>> no_ofmachines;

//information on the units each machines produces per day
cout << "For the different machines, what are their production of units per day\n";
int i=1;
for (i=1;i<=no_ofmachines;i++)
{
    cout<< "speed for machine  "<<i<<" = ";
    cin >> units_perday[i];
    
    total+=units_perday[i];
}

   
// display on the machines with the units they produce per day
int j= 1;
while(j<=no_ofmachines)
{
    cout<<"machine"<<j<<"\t-\t"<<units_perday[j]<<"\n";
    j++;
}
// display of units produced in a day by all the machines involved for production
 cout<<"The number of units in a day are"<<total<<"\n";

// operators input on the load required to be produced
cout <<"How many units are expected to be produced\n";
cin >> load;

//calculation on the number of input the production will take;

days_forproduction= (load/total);
cout<<days_forproduction <<"Days ";





}