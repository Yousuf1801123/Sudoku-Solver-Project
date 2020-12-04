#include<iostream>
#include<conio.h>
#include<string>

/**
SUCCESS:
    Giving Initial Value to the Board
    Printing The Board
    Design of the Board
**/

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

//----------------------------------------------//

void print(int board[R][C])
{
    cout << endl << "     A B C   D E F   G H I " << endl << "   |-----------------------|" << endl ;
    for(int i = 0 ; i < R ; i++)
    {
        cout << " " << i+1 << " | ";
        for(int j = 0 ; j < C ; j++)
        {
            cout << board[i][j] << " " ;
            if((j+1)%3 == 0)
                cout << "| ";
        }
        cout << endl ;
        if((i+1)%3 == 0)
            cout << "   |-----------------------|" << endl ;
    }
}

//----------------------------------------------//

int main()
{
    int Board[R][C] ;
    int* ptr = arr_zero(Board);
    print(Board) ;

}
