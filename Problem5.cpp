/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/
#include<iostream>
using namespace std;
int main()
{
 int num = 20;
 int i;
 while(1)
 {
  num++;
  for( i = 1;i<=20;i++)
  {
    if(num%i != 0)
      break;
  }
    if(i==21)
      break;
}
cout<<num<<endl;
}
