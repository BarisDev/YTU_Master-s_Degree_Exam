/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void
hash (int array[], int size, int array2[], int size2)
{
  //table sD1fD1rla
  int hashTable[11];
  for (int i = 0; i < 11; i++)
    {
      hashTable[i] = NULL;
    }

  for (int i = 0; i < size; i++)
    {
      if (array[i] > 10)
	{
	  int temp = array[i] % 11;
	  while (hashTable[temp] != NULL)
	    {
	      temp = (array[i] + 1) % 11;
	    }
	  hashTable[temp] = array[i];

	}
      else
	{
	  int temp2 = array[i];
	  while (hashTable[temp2] != NULL)
	    {
	      temp2 = array[i] + 1;
	    }
	  hashTable[temp2] = array[i];
	}

    }
  //table yazdD1r
  printf ("hash table elemanlari:\n");
  for (int i = 0; i < 11; i++)
    {
      printf ("%d \n", (int) hashTable[i]);
    }

  //Bnin elemanlarD1nD1 kD1yaslayalD1m
  for (int i = 0; i < size2; i++)
    {
      for (int j = 0; j < 11; j++)
	{
	  if (array2[i] == hashTable[j])
	    {
	      printf ("ortak eleman: %d \n", (int) array2[i]);
	    }
	}
    }
}

int
main ()
{
  int A[6] = { 3, 14, 2, 4, 10, 21 };
  int B[4] = { 7, 2, 12, 21 };
  hash (A, 6, B, 4);

  return 0;
}
