
/**
SUCCESS:
    Value Incrementation :
        Creating every possible arrangement of the numbers
            in a 1D array
                using Recursive Function
FAILED:
    To much time consuming
        Increase in time by exponential function of 9
            after every single increase in the size of the array
**/

#include<iostream>
#include<conio.h>


using namespace std ;

const int R = 5 ;

void print(int arr[R])
{
    for(int i = 0 ; i < R ; i++)
        cout << arr[i] << " " ;
    cout << endl ;
}



void add(int* ptr , int arr[R])
{
    if(ptr == &arr[R-1])
    {
        for(int i = 0 ; i <= 9 ; i++)
        {
            *ptr = i ;
            print(arr) ;
            system("cls");
        }
    }
    else
    {
        for(int i = 0 ; i <= 9 ;i++)
        {
            *ptr = i ;
            add(ptr+1 , arr);
        }
    }








    /*for(int i = 0 ; i <= 9 ; i++)
    {
        *ptr = i ;
        for(int j = 0 ; j <= 9 ; j++)
        {
            *(ptr+1) = j ;
            for(int k = 0 ; k <= 9 ; k++)
            {
                //if(i == j){continue ;}
                *(ptr+2) = k ;
                for(int l = 0 ; l <= 9 ; l++)
                {
                    *(ptr+3) = l ;
                    print(arr);
                    //_sleep(1);
                    system( "cls" );
                }
                //print(arr) ;
            }
            //print(arr) ;
        }
        //print(arr);
    }*/
}


int main()
{
    int board[R] = { 0,0,0,0,0 } ;
    int* ptr = board ;
    add(ptr , board);// , board);
}

