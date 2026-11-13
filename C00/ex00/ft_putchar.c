#include <unistd.h> // Loads the write function

void ft_putchar(char c){; // Prototype
    write(1, &c, 1); // Write function
}

int main(void)
{
    ft_putchar('a');
}