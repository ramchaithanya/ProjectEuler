/*215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 21000?*/
#include <iostream>
#include <numeric>
#include <ostream>
#include <vector>

int main()
{
    std::vector<unsigned int> digits;
    digits.push_back(1);        // 2 ** 0 = 1

    const int limit = 1000;
    for (int i = 0; i != limit; ++i)
    {
        // Invariant: digits holds the individual digits of the number 2 ** i

        unsigned int carry = 0;
        for (auto iter = digits.begin(); iter != digits.end(); ++iter)
        {
            unsigned int d = *iter;
            d = 2 * d + carry;
            carry = d / 10;
            d = d % 10;
            *iter = d;
        }
        if (carry != 0)
        {
            digits.push_back(carry);
        }
    }

    unsigned int sum = std::accumulate(digits.cbegin(), digits.cend(), 0U);
    std::cout << sum << std::endl;

    return 0;
}
