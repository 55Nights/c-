/*	A program is required that computes the square and cube of all numbers between 2 and 10 and display them using a loop.
 The output should take the following format.
      Number      Square          Cube
           2                4                   8
           3                9                 27
          …
         10            100              1000
      Write the program using: -
a)	do…while loop            
b)	for… loop
NB: The program has no input.*/
#include<iostream>
using namespace std;
int main()
{
  /* int i =2;
   do
   {
    
    cout<<i<<" " <<(i*i)<< " "<< (i*i*i)<<endl;
    i++;
 
   } while (i<=10);
   
*/
for (int i = 2; i < 11; i++)
{
    cout<<i<<" " <<(i*i)<< " "<< (i*i*i)<<endl;
}

    
    return 0;
}
