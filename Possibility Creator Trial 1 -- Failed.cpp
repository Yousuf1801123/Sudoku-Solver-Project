/**
    SUCCESS:
        Every Possibility Created
            In 1D Array
    ISSUE:
        Everything in main() Function
            Hard coded
            May Not work for every scenarios
**/


#include<iostream>

using namespace std;

int main()
{
    int board[2] = {0,0} ;
    int* ptr = &board[1] ;

    for(int i = 0 ; i < 4 ; i++)
    {
        //system("cls");
        cout << board[0] << " " << board[1] << endl ;
        board[1]++;

        if(board[1] == 2)
        {
            board[1] = 0;
            board[0]++;
        }

    }
}
