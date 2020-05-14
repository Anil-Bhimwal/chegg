#include <iostream>
#include <sstream>
using namespace std;

using INT = unsigned long long;


void countBits( INT A, int &ones, int &endZeroes )
{
   ones = endZeroes = 0;
   bool inZeroes = true;

   if ( A == 0 )
   {
      endZeroes = 1;
      return;
   }

   for ( ; A; A /= 2 )
   {
      int digit = A % 2;
      ones += digit;
      if ( inZeroes )
      {
         if ( !digit )
            endZeroes++;
         else inZeroes = false;
      }

   }
}

int countOperations( INT A, INT B )
{
   // Special cases
        if ( A == B ) return 0;
   else if ( B == 0 ) return -1;
   else if ( B == 1 ) return ( A == 0 ? 1 : -1 );

   int onesA, onesB, endZeroesA, endZeroesB;

   countBits( A, onesA, endZeroesA );
   countBits( B, onesB, endZeroesB );

   int ops = onesB - onesA + endZeroesB;
   return ops > 0 ? ops : 2;
}

int main()
{
    int N;
    INT A, B;

   cin >> N;

   for ( int i = 0; i < N; i++ )
   {
      cin >> A >> B;
      cout << countOperations( A, B ) << '\n';
   }
}
