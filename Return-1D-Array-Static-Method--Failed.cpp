/**
SUCCESS:
    Learning to return 1D array by Function
        Static Keyword Method
FAILED
    Can use it in the project
        Since we need to do both pass and return array
        ans Static method creates the array in the function and returns it
        while we have our own array therefore we don't need to create one
**/


//Array return by function, Static Method

#include <iostream>
#include <ctime>

using namespace std;

// function to generate and retrun random numbers.
int * getRandom( ) {

   static int  r[10]= {0,0,0,0,0,0,0,0,0,0};

   // set the seed
   //srand( (unsigned)time( NULL ) );

   for (int i = 0; i < 10; ++i) {
      //r[i] = rand();
      cout << r[i] << endl;
   }

   return r;
}

// main function to call above defined function.
int main () {

   // a pointer to an int.
   int *p;

   p = getRandom();

   for ( int i = 0; i < 10; i++ ) {
      cout << "*(p + " << i << ") : ";
      cout << *(p + i) << endl;
   }

   return 0;
}
