#include <stdio.h>


int _abs(int num) {
  if (num < 0) {
    return -num;
  }
  else {
    return num;
  }
}

int main()
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}