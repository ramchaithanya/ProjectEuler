/*If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?


NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.*/
#include<iostream>
#include<map>
using namespace std;
map<long int, string> CharNumberValue;

int main()
{

CharNumberValue[0] ="zero";
CharNumberValue[1] ="one";
CharNumberValue[2] ="two";
CharNumberValue[3] ="three";
CharNumberValue[4] ="four";
CharNumberValue[5] ="five";
CharNumberValue[6] ="six";
CharNumberValue[7] ="seven";
CharNumberValue[8] ="eight";
CharNumberValue[9] ="nine";
CharNumberValue[10] ="ten";
CharNumberValue[11] ="eleven";
CharNumberValue[12] ="twelve";
CharNumberValue[13] ="thirteen";
CharNumberValue[14] ="fourteen";
CharNumberValue[15] ="fifteen";
CharNumberValue[16] ="sixteen";
CharNumberValue[17] ="seventeen";
CharNumberValue[18] ="eighteen";
CharNumberValue[19] ="nineteen";
CharNumberValue[20] ="twenty";
CharNumberValue[30] ="thirty";
CharNumberValue[40] ="forty";
CharNumberValue[50] ="fifty";
CharNumberValue[60] ="sixty";
CharNumberValue[70] ="seventy";
CharNumberValue[80] ="eighty";
CharNumberValue[90] ="ninety";
CharNumberValue[100] ="hundred";//Sameer,remember 100 is one hundred
CharNumberValue[1000] ="thousand";//Sameer,remember 1000 is one thousand

  long int count = 0; 
  string printword ="";

for(int i=1; i<= 1000; i++)
{

    if(i<=100)
    {
        int ten = (i/10)*10;
        int unit = i%10;    
        map<long int, string>:: iterator it = CharNumberValue.find(i);
        map<long int, string>:: iterator it1 = CharNumberValue.find(unit);
        map<long int, string>:: iterator it2 = CharNumberValue.find(ten);

        if(i<10)
        {
            count  += it1->second.length();
            printword = it1->second;
            cout<<printword<<endl;
        }
        if(i>=10 && i<=20)
        {
            count  += it->second.length();//These are unique
            printword = it->second;
            cout<<printword<<endl;
        }
        if(i>20 && i<=100) 
        {

            count  += it2->second.length();
            printword = it2->second ;
            if ((i != 30)&&(i != 40)&&(i != 50)&&(i != 60)&&(i != 70)&&(i != 80)&&(i!= 90)&&(i!= 100))
            {
                count  += it1->second.length();
                printword = it2->second + " " + it1->second ;

            }
            cout<<printword<<endl;              
        }           

    }
    if(i>100 && i<1000)
    {
        int hun = i/100;
        int ten=i%100;
        int mten = (ten/10)*10;//modified ten
        int unit = ten%10;

        map<long int, string>:: iterator it = CharNumberValue.find(unit);
        map<long int, string>:: iterator it1 = CharNumberValue.find(mten);          
        map<long int, string>:: iterator it2 = CharNumberValue.find(ten);
        map<long int, string>:: iterator it3 = CharNumberValue.find(hun);           
        int counttemp = CharNumberValue[100].length();
        count  += it3->second.length() + CharNumberValue[100].length();
        printword = it3->second + " " + CharNumberValue[100];

        if((i != 200)&&(i != 300)&&(i != 400)&&(i != 500)&&(i != 600)&&(i != 700)&&(i != 800)&&(i != 900))
        {
            if( ten<=20)
            {
                count  += 3/*for and */+ it2->second.length()   ;//These are unique
                printword = it3->second + " " + CharNumberValue[100]  + " and "  + it2->second ;
                cout<<printword<<endl;
            }

            if(ten>20 && ten<=99) 
            {
                count  += 3/*for and */+ it1->second.length();
                printword = it3->second + " " + CharNumberValue[100]  + " and "  + it1->second;
                if ((ten != 30)&&(ten != 40)&&(ten != 50)&&(ten != 60)&&(ten != 70)&&(ten != 80)&&(ten!= 90)&&(ten!= 100))
                {
                    count  += it->second.length();
                    printword = it3->second + " " + CharNumberValue[100]  + " and "  + it1->second +" "+ it->second ;
                }

                cout<<printword<<endl;
            }

        }
        else
        {
            cout<<printword<<endl;
        }
    }
}
count += 11;//for one thousand
cout<< count;

return 0;
}
