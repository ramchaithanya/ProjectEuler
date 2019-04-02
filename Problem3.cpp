/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/
#include<iostream>
#include<math.h>
int main()
{
const long numm = 600851475143;
long largestFact = 0;
long factors[2];

 
for (long i = 2; i * i < numm; i++) {
    if (numm % i == 0) { // It is a divisor
        factors[0] = i;
        factors[1] = numm / i;
 
        for (int k = 0; k < 2; k++) {
            bool isPrime = true;
            for (long j = 2; j * j <  factors[k]; j++) {
                if (factors[k] % j == 0) {
                    isPrime = false;
                    break;
                 }
             }
             if (isPrime && factors[k] > largestFact) {
                largestFact = factors[k];
            }
        }
    }
std::cout<<largestFact<<std::endl;
}        
}
