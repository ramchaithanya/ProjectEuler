/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.*/
#include <iostream>
int main()
{
long long sum,sum3,sum5,sum15;
sum = 1;
sum3 = sum5 = sum15 =0;
for(int i = 1;i<=333;i++)
{
	sum = 3 *i;
	sum3 = sum+sum3;

}
sum=1;
for(int i = 1;i<=199;i++)
{
	sum = 5*i;
        sum5 = sum+sum5;
}
sum = 1;
for(int i =1;i<=66;i++)
{
	sum = 15*i;
        sum15 = sum+sum15;
}
std::cout<<(sum3+sum5-sum15)<<std::endl;
}
