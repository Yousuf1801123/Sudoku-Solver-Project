/**
FAILED:
    Incomplete
    Can not create every single possible arrangement of Number

NOTE:
    This code is Incomplete :::: value increment function in empty which was meant to create arrangement
**/


#include<iostream>
#include<string>
#include<conio.h>
#include<ctime>

using namespace std ;

int const R = 5 ;

void print(int arr[R])
{
    for(int i = 0 ; i < R ; i++)
    {
        cout << arr[i] << " " ;
    }
}


int * arr_zero(int board[R])
{
    for(int i = 0 ; i < R ; i++)
    {
            board[i] = 0 ;
    }
    int* ptr = &board[0] ;
    return ptr ;
}

int * increment(int* ptr ,int arr[R])
{

}


int main()
{
    int board[R];
    int* ptr = arr_zero(board);
    ptr = board;

    print(board);

}
