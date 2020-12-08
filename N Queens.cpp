//
//  main.cpp
//  hw10.cpp
//
//  Created by Avishai Rostamian on 10/14/20.
//  Copyright © 2020 Avishai Rostamian. All rights reserved.
//


#include <iostream>
#include <cmath>
using namespace std;

    int n;
static int numSolutions = 0;

void func();  //Checks if current queens is diagonal or next to an existing queens
bool ok(int q[], int c) {
   for (int i = 0; i < c; i++){
       if (q[i] == q[c] || (c - i) == abs(q[c] - q[i])) return false;
   }
   return true;
}

void print(int q[]) {   //Prints all solutions
    
  cout << "Solution #" << ++numSolutions << ": ";
    for(int i = 0; i < n; i++){
         cout << q[i] << " ";
         } // Print the array
      cout << "\n";
   
    numSolutions++;
    cout <<"";
   }


    
void func(int n){
   int* q = new int[n];   // Initialize the array to 0.
   int c = 0;
   q[0] = 0;  // Start in the 1st row, 1st column
   while (c >= 0) {
    if (c == -1) break;  // End the loop if you backtrack from the first column
     c ++; // Move to the next column
      if (c == n){

       print(q);// If you have passed the last column,
          c--;

      }
         
         // Call the print function and backtrack
       else q[c] = -1;    // Otherwise, move to one before the first row
      while (c >= 0) {
         q[c]++;// Move to the next row
         if (q[c] == n){

       c--;
              if(c == -1){
                  cout << "There are " << numSolutions << " solutions to the " << n << " queens problem\n";
                delete [] q;
                numSolutions = 0;
                return;
              }
         }
                      
           else{
      if (ok(q, c)) break;// If you have passed the end of the column, backtrack
         // Otherwise, call the ok function.  If it returns true, go back to the beginning of the outer loop.
         
      }
   }
      }


   }
int main() {

    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        func(i);
    }
}
 
