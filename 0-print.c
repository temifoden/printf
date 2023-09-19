#include "main.h"
#include <stdarg.h>

/**
 * _printf - function entry
 * @format: first parameter
 *
 * Return: an integer value
*/

int _printf(const char *format, ...)
{
    int count = 0;
    va_list my_list;
    va_start(my_list, format);
    while (*format)
    {
        char c;
        char *str;
        int num;
         if (*format == '%' && *(format + 1)){
            format++;
            switch (*format)
            {
            case 'c':
                { 
                c = va_arg(my_list, int);
                pchar(c);
                count++;
                }
                break;
            case 's':
                {  
                int i;
                str  = va_arg(my_list, char *);
                i = 0;
                while (str[i])
                    {
                        count += pchar(str[i]);
                        i++;
                    }
                break;
                }
            case 'd':
            case 'i':
                {
                    num = va_arg(my_list, int);
                    count += count_and_print_digits(num);
                    break;
                }
            case 'b':
            {
                num = va_arg(my_list, int);
                count += print_binary(num);
                break;
            }
            case '%':
                count += pchar('%');
                break;
            default:
                count += pchar('%');
                count += pchar(*format);
                count += 2;
                break;
            }
        }
        else
            count += pchar(*format);
        format++;
    }
    va_end(my_list);
    return (count);
}
