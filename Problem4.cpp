/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
bool palindrome(long num)
{
 bool flag = true;
 std::string s = std::to_string(num);
 for(int i =0,j = s.length()-1;i<((s.length())/2);i++,j--)
 {
    if(s[i]!= s[j]) 
      flag = false;
 }
return flag;
}

int main()
{
long num;
std::vector<long> v;
for(long i= 999;i>100;i--)
{
 for(long j = 999;j>100;j--)
{
   num = i *j;
   if (palindrome(num))
      v.push_back(num);
}
}
std::cout<<*std::max_element(v.begin(),v.end())<<std::endl;
}
