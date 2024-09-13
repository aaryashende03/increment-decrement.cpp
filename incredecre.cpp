#include<iostream>
using namespace std;
int main()
{
int i = 10 , j=10;
int x ,y;

x = i--; // post increment 
y = --j; // pre increment

cout<<x<<"\n";
cout<<y<<"\n";

cout<<i<<"\n";
cout<<j<<"\n";

return 0;
} 

//Post increment  -> it means that first assign the orignal value and then increment the value

// Pre increment  ->  it means that first increment the value then assign the incremented value 
