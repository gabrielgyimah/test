#include "main.h"
#include <stdarg.h>

/**
 * _printf - Mimics the behaviour of the standard printf
 * @format: the value being passed
 * Return: Succes
 */

int _printf(const char* format, ...)
{

    int i, num_count = 0;
    va_list param;
    va_start(param, format);

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            switch(format[i + 1])
            {
                case 'c':
                    num_count += _putchar(va_arg(param, int));
                    i += 1;
                    break;
                case 'd':
                    num_count += digit(va_arg(param, int));
                    i += 1;
                    break;
                case 'i':
                    num_count += digit(va_arg(param, int));
                    i += 1;
                    break;
                    case 's':
                    num_count += _puts(va_arg(param, char *));
                    i += 1;
                    break;
                case '%':
                    num_count += _puts("%");
                    i += 1;
                    break;
                default:
                    num_count += _putchar(format[i]);
                    break;
            }
            continue;
        }
        else
            num_count += _putchar(format[i]);
    }
    va_end(param);
    return (num_count);
}
