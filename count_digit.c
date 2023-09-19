#include "main.h"

/**
 * count_and_print_digits - it counts numbers of characters in a passed sets if numbers
 * @num: the incoming parameter to check
 *
 * Return: count
*/

int count_and_print_digits(int num)
{
    int count;
    int rem;
    count = 0;
    
    if (num < 0){
        pchar('-');
        count++;
        num = -num;
    }
    if (num < 10)
    {
        pchar('0'+ num);
        count++;
    }
    else
    {        
            num /= 10;
            rem = num % 10;
            count_and_print_digits(num);
            pchar('0' + rem);
            count++;
    }
    return count;
}
