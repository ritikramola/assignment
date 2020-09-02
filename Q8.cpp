#include<iostream>
using namespace std;
int main()
{  int a,b,c,ctr=0;
cout<<"Pythagorean triples less than 500 are: "<<endl;
    for( a = 0 ; a < 500; ++a )
    {
      const int asq = a*a ;

        for(  b = a+1 ; b < 500 ; ++b )
        {
             int bsq = b*b ;
            int sum = asq + bsq ;

            for( c = b+1 ; c < 500 ; c++ )
            {
                 int csq = c*c ;

                if(sum == csq)
                {
                   cout<<ctr++<<"->"<<"(" <<a<< ", " << b<< ", " <<c<<")"<<endl;
                }

                if( csq >= sum ) break ;
            }
        }
    }
}
