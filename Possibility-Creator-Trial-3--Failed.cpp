/**
FAILED:
    Can not create every possible arrangement in 2D Array
**/


#include<iostream>
#include<string>
#include<conio.h>

using namespace std ;

int const R = 9 , C = 9 ;

void print(int arr[R][C])
{
    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ; j < C ; j++)
        {
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
}

//-------------------------------------------------------//

int * arr_zero(int board[R][C])
{
    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ; j < C ; j++)
            board[i][j] = 0 ;
    }
    int* ptr = &board[0][0] ;
    return ptr ;
}

//-------------------------------------------------------//

int * value_increment(int* ptr ,int board[R][C])
{
    if( board[0][0] == 10 ){return;}
    ptr = value_increment((ptr-1), board[R][C]);
    for(int i = 0 ; i < R ; i++)
    {

    }
}


int main()
{
    int board[R][C];
    int* ptr = arr_zero(board) ;
    print(board);
}
