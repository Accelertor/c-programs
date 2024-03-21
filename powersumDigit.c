#include <stdio.h>
#include <gmp.h>

int main()
{
    const int a = 2;
    mpz_t x;
    mpz_init(x);

    mpz_ui_pow_ui(x, a, 1000);

    char x_str[1001]; // Make sure this buffer is large enough to hold the number
    mpz_get_str(x_str, 10, x);

    int p = 0;
    for (int i = 0; x_str[i]; i++)
    {
        p += x_str[i] - '0';
    }

    gmp_printf("Sum=%i\n", p);

    mpz_clear(x);

    return 0;
}
