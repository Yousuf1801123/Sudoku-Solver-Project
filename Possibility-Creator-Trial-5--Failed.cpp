/**
FAILED:
    Giving very weird and very large addresses when printing
        IDK why this is happening
        if you know
            message me or email me
**/


#include<iostream>

using namespace std ;

const int R = 3 ;

void print(int arr[R])
{
    for(int i = 0 ; i < R ; i++)
        cout << arr[i] << " " ;
    cout << endl ;
}

void add(int* ptr , int x , int* brk)//, int arr[R])
{
    if(ptr == brk ){return ;}
    add(ptr+1 , x , brk);
    for(x = 0 ; x < 10 ; x++)
    {
        //a = i%10 , b = ((i%100))/10 , c = ((i%1000))/100;
        //*ptr = x ;
        add(ptr+1 , x , brk);
        /**(ptr+1) = b ;
        *(ptr+2) = c ;*/
        //if(a+b+c == 6 && a != b && b != c && a!=c)
            print(ptr);
    }
    //add(ptr+1 , x , brk);
}


int main()
{
    int board[R] = { 0,0,0 } ;
    int* ptr = board ;
    add(ptr , 0 , &board[3]);// , board);
}
