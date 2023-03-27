#include <unistd.h>

/**
 * _putchar - prints a single character
 * @c: the character
 */

int _putchar(char c){
    return (write(1, &c, 1));
}
