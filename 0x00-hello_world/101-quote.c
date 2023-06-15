#include<unistd.h>
/**
 * main - error printer
 * Return: 1
 */
int main(void)
{
char message[60];
message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, sizeof(message) - 1);
return (1);
}
