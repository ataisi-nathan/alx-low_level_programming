#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Always returns 0
 */
int main(void)

{
int left = 48;
int right = 48;

while (right < 58)
{
left = 48;
while (left < 58)
{
if (right < left && right != left)
{
putchar(right);
putchar(left);
if (left == 57 && right == 56)
{
break;
}
putchar(',');
putchar(' ');
}
left++;
}
right++;
}
putchar('\n');


return (0);


}
