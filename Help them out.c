// Three friends Bob , Alice and Peter are giving a coding contest where they are given a array problem which they are expected to solve in order to win the contest . Help them to win the contest .The problem is given below.

// They are suppose to find the number of steps(moves) required to convert the given array to zero array(an array in which every element is 0)

// Condition :

// Only 2 moves are possible (  Decrement and half operations ):

// 1) The decrement operator decreses the value of an element in the array by 1 .

// 2) Half operation halfs the value of each element in the array.

// Example :

// Input : 7 8 9                       Output :  9

// Minimum moves required to convert array [7 8 9] to array [0 0 0]  as per given condition is 9 .

// Input : 10 15 11                  Output :  12

// Minimum moves required to convert array [10 15 11] to array [0 0 0]  as per given condition is 12 .

// Input

// The first line contains  integer n that is the size of array. The next line contains n integers gi, the elements of array.

// Output

// Print an integer that is minimum number of moves required .

// Constraints:
// 1 ≤ N ≤ 106
// 1 ≤ g[i] ≤ 5*107

#include <stdio.h>
int main()
{
  int size, A[10], i, moves = 0;
  printf("\nEnter Size of array: ");
  scanf("%d", &size);
  printf("\nEnter Array elements: \n");
  for (i = 0; i < size; i++)
    scanf("%d", &A[i]);

  while (A[size - 1] != 0)
  {
    //make an array even
    for (i = 0; i < size; i++)
    {
      if (A[i] % 2 != 0 && A[i] != 0)
      {
        A[i] = A[i] - 1;
        moves += 1;
      }
    }
    // half the even array
    for (i = 0; i < size; i++)
    {
      A[i] = A[i] / 2;
    }
    moves += 1;
  }

  printf("\nNo. of Moves: %d", moves - 1);
  return 0;
}

// Partially submitted
