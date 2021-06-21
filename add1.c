/************************************************************
 * add1.c generates a counter for the riliffe website       *
 * counting the number of visitors.                         *
 *                                                          *
 * returns: the output is then be fed into the variable     *
 *          hits.                                           *
 * Author:  Roger Iliffe                                    *
 * Date:    16 September 2020                               *
************************************************************/ 

#include <stdio.h> /* needed for scanf */

int main(void)
{
    int counter;

    scanf("%d", &counter);
    printf("%d", ++counter);

    return 0;
}
