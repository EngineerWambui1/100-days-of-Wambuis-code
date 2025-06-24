#include <iostream>
#include <string>
using namespace std;

int main()
{
 string students[22];
 students[0]="Dorris Wambui";
 students[1]="Alex Munene";
 students[2]="Jacob Njogu";
 students[4]="Lydia Gathigia";
 students[5]="Daniel Munene";
 students[6]="Assumptah Matei";
 students[7]="Hadassah Baraka";
 students[8]="Kate Katheu";
 students[9]="James Mwangi";
 students[10]="Joy Muthoni";
 students[11]="Gilbert Kiama";
 students[12]="Kennedy Wambua";
 students[14]="Myra Omondi ";
 students[15]="Samantha Mwai";
 students[16]="Frida Nyawira";
 students[17]="Harriet Muthii";
 students[18]="Dickson Njuki";
 students[19]="Lucy Agwaya";
 students[20]="Samson Mwau";
 students[21]="Charles Nyangi";

cout <<"Please enter the students name to check attendance";


int i=0,j =0;
string name;

    getline(cin,name);

    bool found = false;
for (i = 0; i<=21;i++)
{
         if (name == students[i])
{ 
    found = true;
    cout<< name  <<"is Present";
    break;
}
}
if (!found)
cout <<name <<" is absent";
return 0;



}



