/**
SUCCESS:
    Print All ASCII Values
**/

#include<iostream>

using namespace std ;

int main()
{
    char A = 0 ;
    for(int i = 0 ; i <= 256 ; i++)
    {
        A = A+1 ;
        cout << i << " = " << A << endl ;
    }
}
