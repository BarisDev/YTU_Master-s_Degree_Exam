/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int array[] = {0, 21, 0, 13, 23, 0, 6, 0, 0, 0};
    int size = sizeof(array) / sizeof(array[0]);
    int counter = 0;
    for(int i = 0; i < size; i++){
        if(array[i] != 0){
            if(array[i] % 10 == i){
                counter++;
                printf("%d ilkinde girdi\n", array[i]);
            }
            
        }
    }
    printf("%d tane eleman ilkinde girdi", counter);
    return 0;
}
