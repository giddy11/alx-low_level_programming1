#include <stdio.h>

void jack_bauer(void) {
  int hour, minute;
  
  for (hour = 0; hour < 24; hour++) {  // Iterate over hours
    for (minute = 0; minute < 60; minute++) {  // Iterate over minutes
      putchar(hour / 10 + '0');  // Print the tens digit of hour
      putchar(hour % 10 + '0');  // Print the ones digit of hour
      putchar(':');  // Print the separator
      putchar(minute / 10 + '0');  // Print the tens digit of minute
      putchar(minute % 10 + '0');  // Print the ones digit of minute
      putchar('\n');  // Print a newline character
    }
  }
}

int main()
{
    jack_bauer();
}
