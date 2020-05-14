#include<iostream>

#include<string.h>
using namespace std;


int main()
{

      int letter, digit, space;

  char ch;
   letter =0;
       digit = space = 0;
cin.get(ch);

  while(ch!='$')
  {



          if  ( ch>='a' && ch<= 'z')
                       {letter++;
                       }
             else  if (ch>= '0' && ch<= '9')
                      {
                        digit++;

                       }

            else   if (ch == ' ' || ch =='\n' || ch == '\t')
                       {space++;
                       }

              cin.get(ch);
          }
             cout<<letter<<" "<<digit<<" "<<space;

return 0;
}
