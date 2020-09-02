#include <iostream>
using namespace std;
int main()

{int A[1000];

for(int i= 0; i< 1000; i++){

      A[i] = 1;}

    for (int j = 1; j <1000; j++)

    {if (A[j] == 1 && j != 1)

        {for (int k = j; k <1000; k++) {
                        if (k % j == 0 && k != j)

                         {A[k] = 0;}} }

    }
cout<<"the list of prime numbers from 2 to 999 are: "<<endl;
        for(int x= 2; x < 1000; x++)

        {

          if(A[x] == 1)

          {

            cout<< x << " is a prime number"<<endl;
          }

        }

   }
