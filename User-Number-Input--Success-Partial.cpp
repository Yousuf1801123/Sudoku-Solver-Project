/**
SUCCESS:
    Single Number Input By User
FAILURE:
    Complete code is in main function
Area of Improvement
    Working in separate function
    use of loops
    ASCII value reference to their actual value
    Instruction for User
**/


#include<iostream>
#include<conio.h>

using namespace std ;




int main()
{
    int i = 0, p = 13;
    //cout << i ;
    while(true)
    {
        do
        {
            int p = getch();
            if(p >= 49 && p <= 57 )
            {
                i = p-48;
                cout << i << endl;
            }
            else if( p == 13 )
            {
                i = 0 ;
                cout << i <<  endl;
            }
        }
        while(p <= 49 && p >= 57 );


    }
}
