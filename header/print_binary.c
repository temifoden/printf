#include "main.h"


/**
 * print_binary - function entry
 * @num: parameter to convert to binary
 *
 * Return: count value
*/

int print_binary(int num){
    int count;
    int i, j;
    int binary[32];
    count = 0;

    if (num < 0){
        pchar('-');
        num = -num;
        count++;
    } else if (num == 0){
        pchar('0');
        count++;
    }

    i = 0;

    while (num > 0)
    {
        
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    for (j = i - 1; j >= 0; j--){
        pchar('0' + binary[j]);
        count++;
    }
    return (count);
}
