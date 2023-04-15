#include <stdio.h>
#include <time.h>
 
void getSeconds(unsigned long par);

int main () {

   unsigned long sec;
   getSeconds( sec );

   /* print the actual value */
   printf("Number of seconds: %ld\n", sec );

   return 0;
}

void getSeconds(unsigned long par) {
   /* get the current number of seconds */
   par = time( NULL );
   return;
}

/*
This C code demonstrates the usage of a function with pointers to modify data outside of its own scope. 

The program includes two header files: <stdio.h> and <time.h>. 

The main() function initializes an unsigned long variable called sec, which will be used to store the number of seconds since the Epoch (i.e., January 1st, 1970 at 00:00:00 UTC). The function getSeconds() is then called, with the address of sec passed as its argument using the '&' operator. 

The getSeconds() function takes an unsigned long pointer as its parameter. It accesses the memory location pointed to by the pointer using the '*' operator, and stores the current time (in seconds) into that memory location using the time() function from <time.h>. 

Back in the main() function, the value of sec is printed out using printf(). Since the getSeconds() function modified sec directly through its memory address, the value has been updated to reflect the current time. 

In summary, this code demonstrates how to use pointers to modify data in functions that exist outside of the scope of the main() function. Specifically, it shows how to pass a memory address to a function, access the value stored at that address with a pointer, and modify the value using the data accessed by the pointer.*/