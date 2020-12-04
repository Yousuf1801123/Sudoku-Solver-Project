/**
FAILED:
    Failed to print in right way
    Incrementation by loop failed
        Crazy loop run
        don't know WHY!!!!!!!!!
**/


#include<iostream>

using namespace std ;

int const R = 9 , C = 9 ;

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

int * data(int* ptr, int arr[9][9], int counter)
{
    if(ptr == &arr[0][0]){cout << *ptr << endl << counter; return ptr ;}
    cout << *ptr << " " ;
    data(ptr-1 , arr, counter++);
    return ptr ;
}

int main()
{
    int arr[9][9];
    //int* ptr = &arr[0][0] ;
    int* ptr = arr_zero(arr);
    ptr = &arr[8][8];
    data(ptr, arr,1);
}

