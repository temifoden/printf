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

    /* Initialize the argument list */
    va_start(my_list, format);


    /* Loop through the format string and handle each specifier */
    while (*format)
    {
        // char c;
        // char *str;
        
         if (*format == '%' && *(format + 1)){
            format++;
            switch (*format)
            {
            /* Handle 'c' specifier */
            case 'c':
                { 
                char c = va_arg(my_list, int);
                pchar(c);
                count++;
                }
                break;
            /* Handle 's' specifier */
            case 's':
                {  
                char *str  = va_arg(my_list, char *);
                int i = 0;
                while (str[i])
                    {
                        pchar(str[i]);
                        str++;
                        count++;
                    }
                }
                break;
            /* Handle 'd' and 'i' specifiers */
            case 'd':
            case 'i':
              
                {
                    int num = va_arg(my_list, int); 
                    printf("%d", num);
                    count += count_digits(num);
                }
                break;
            case '%':
                pchar('%');
                count++;
                break;
            default:
                pchar('%');
                pchar(*format);
                count=+2;
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

int count_digits(int num)
{
    int count = 0;
    if (num == 0)
    {
        return 1; 
    }
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}




