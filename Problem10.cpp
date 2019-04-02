/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.*/
#include<iostream>
using namespace std;
bool isPrime(long n)
{
 if(n<=1) return false;
 if(n<=3) return true;
 if(n%2 == 0 || n%3 == 0)
    return false;
 for(int i = 5;i*i <= n; i = i+6)
 { 
  if(n%i == 0 || (n%(i+2)) == 0)
    return false;
 }
return true;
}

int main()
{
 long sum = 0;
 for(long i = 2; i <= 2000000;i++)
 {
   if(isPrime(i))
     sum = sum +i;
 }
 cout<<sum<<endl;
}
 
