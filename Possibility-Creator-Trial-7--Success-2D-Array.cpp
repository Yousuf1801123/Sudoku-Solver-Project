
/**
SUCCESS:
    Value Incrementation :
        Creating every possible arrangement of the numbers
            in a 2D array
                using Recursive Function
IMPROVEMENT:
    Speed of the the program increased by using printf() function for the output
FAILED:
    To much time consuming
        Increase in time by exponential function of 9
            after every single increase in the size of the array
**/

#include<iostream>
#include<conio.h>


using namespace std ;

const int R = 9 , C = 9 ;

void print(int arr[R][C])
{
    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ; j < C ; j++)
            /**cout << arr[i][j] << " " ;
        cout << endl ;**/
            printf("%i ",arr[i][j]);    //using printf function for output to increase the sped of the program
        printf("\n") ;
    }
}



void add(int* ptr , int arr[R][C])
{
    if(ptr == &arr[R-1][C-1])
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
}


int main()
{
    int board[R][C] = { {0,0},{0,0} } ;
    int* ptr = &board[0][0] ;
    add(ptr , board);// , board);
    print(board);
}

