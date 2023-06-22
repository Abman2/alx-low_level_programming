#include "main.h"
/**
  * 
  *
  *
  */
  void print_line(int n){
 if (n <= 0)
 {
_putchar('\n');
}
else if (n > 0)
{
for (int i = 1; i <= n; i++)
{
if (i != n)
{
_putchar('\\');
}
else if (i == n)
{
_putchar('\\');
}
}
_putchar('\n'); 
}

}
}
