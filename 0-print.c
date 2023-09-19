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
    int count;
    va_list my_list;
    va_start(my_list, format);
    
    for (count = 0; *format; count++)
    {
        char c;
        char *str;
        
        if (*format == '%'){
            format++;
            switch (*format)
            {
            case 'c':
                c = va_arg(my_list, int);
                pchar(c);
                count++;
                break;
            case 's':
                str = va_arg(my_list, char*);
                while (*str)
                {
                    pchar(*str);
                    str++;
                    count++;
                }
                break;
            case 'd':
                c = va_arg(my_list, int);
                if (c < 10){
                    pchar(c);
                    count++;
                } else if(c >= 10){
                    pchar(c / 10);
                    count++;
                    pchar(c % 10);
                    count++;
                }            
                break;
            case '%':
                pchar('%');
                count++;
                break;
            default:
                pchar('%');
                count++;
                pchar(*format);
                count++;
                break;
            }
        }
        else{
            pchar(*format);
            count++;
        }
        format++;
    }
    va_end(my_list);
    return (count);
}
