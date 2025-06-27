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

int main()
{
int no_ofmachines;
int units_perday[5]={};
int days_forproduction;
int load;

//user input on the number of machines available for production process
cout<<"How many machines are to be used for this operation";
cin>> no_ofmachines;

//information on the units each machines produces per day
cout << "For the different machines, what are their production of units per day\n";
int i=0;
for (i=0;i<no_ofmachines;i++)
{
    cout<< "speed for machine  "<<i<<" = ";
    cin >> units_perday[i];
}

// display on the machines with the units they produce per day
int j= 0;
while(j<=no_ofmachines)
{
    cout<<"machine"<<j<<"\t-\t"<<units_perday[j]<<"\n";
    j++;
}

// operators input on the load required to be produced
cout <<"How many units are expected to be produced";
cin >> load;

//calculation on the number of days it will take for the load to be produced





}