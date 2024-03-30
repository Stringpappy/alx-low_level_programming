#ofinclude "main.h"                                                                                               /**                                                      * times_table - Prints the n times, starting with 0     * Return: empty output                                  */                                                     void print_times_table(int n)                         {                                                               int x, y, z, v, d;                              
        for (x = 0; x <= n; x++)                                {                                                       for (y = 0; y <= n; y++)                                {                                                       z = x * y;                                              if (z > n)                                              {                                                       v = z % 10;                                             d = (z - v) / 10;                                       _putchar(44);                                           _putchar(32);                                           _putchar(d  + '0');                                     _putchar(v + '0');                                      }
        else
        {
        if (y != 0)
        {
        _putchar(44);
        _putchar(32);
        _putchar(32);
        }
        _putchar(z + '0');
        }
        }
        _putchar('\n');
        }
}
