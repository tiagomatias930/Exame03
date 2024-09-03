#include <stdarg.h>
#include <unistd.h>

void    put_str(char *str, int *len)
{
    if (!str)
        str= "(null)";
    while (*str)
        *len += write (1, str++, 1);
}

void    put_digite(long long int num, int base, int *len)
{
    char    *he;

    he = "0123456789abcdef";
    if (num < 0)
    {
        num *= -1;
        *len += write (1, "-", 1);
    }
    if (num >= base)
        put_digite((num / base), base, len);
    *len = write (1, &he[num % base], 1);
}

int ft_printf(const char   *format, ...)
{
    int     len;
    va_list     ptr;

    len = 0;
    va_start(ptr, format);
    while(*format)
    {
        if((*format == '%') && *(format + 1))
        {
            format++;
            if (*format == 's')
                put_str(va_arg(ptr, char *), &len);
            else if (*format == 'd')
                put_digite((long long int)va_arg(ptr, int), 10, &len);
            else if (*format == 'x')
                put_digite((long long int)va_arg(ptr,unsigned int), 16, &len);
        }
        else
            len += write(1, format, 1);
        format++;
    }
    return (va_end(ptr), len);
}

int main()
{
    ft_printf("Ola mundo\n");
    ft_printf("%d\n", 42);
    ft_printf("%x\n", 12);

    return(0);
}