/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.*/
/*Solution: If a < b and b < c, a can't be greater/equals than 1000/3 and b can't be greater/equals than 1000/2. And since a, b, c aren't used outside their loops, just declare them in the for-head*/
#include<iostream>
using namespace std;
int main()
{
    const int sum = 1000;
    int a;
    for (a = 1; a <= sum/3; a++)
    {
        int b;
        for (b = a + 1; b <= sum/2; b++)
        {
            int c = sum - a - b;
            if ( a*a + b*b == c*c )
               cout<<a*b*c<<endl;
        }
    }
    return 0;
}
