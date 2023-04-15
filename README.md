# Pointers in C Programming
A pointer is a variable that stores the memory address of another variable. Using pointers allows you to manipulate data by reference, meaning you can directly access and modify the data at a particular memory location.

in other words, a **pointer** is just the address of a piece of data in memory.

The address of the variable tells you where to find the variable in memory. That is why an address is also called a **pointer**, because it **points** to the variable in memory.

## Types and Memory
Every time you declare a variable, the computer will reserve memory for this variable. The memory reserved will then store the value of the variable.

Depending on the type of the variable, the computer will reserve more or less memory. The size of each type is generally defined in bytes (**1 byte = 8 bits**, each bit being 0 or 1).

Below are the sizes of the common types on most 64-bit Linux machines:
+ **char -> 1 byte**
+ **int -> 4 bytes**
+ **float -> 4 bytes**
+ **pointers -> 8 bytes**

### Reasons for Pointers
1. Instead of passing around a whole copy of the data, you can just pass a pointer.
2. You might want two pieces of code to work on the same piece of data rather than a separate copy.

### Declaring a Pointer
To declare a pointer, you use the * operator in combination with a data type. For example, to declare a pointer to an integer variable, you would write:

```c 
    int *ptr;
```
This declares a pointer called ptr that points to an integer variable.

The `*` operator can read and set the contents of a memory address.
```c 
    int main()
    {
        int num = 42;
        int *ptr = &num; // ptr stores the memory address of num

        printf("The value of num is: %d\n", num); // Output: The value of num is: 42
        printf("The value of *ptr is: %d\n", *ptr); // Output: The value of *ptr is: 42

        *ptr = 21; // Set the value of num to 21 through ptr

        printf("The value of num is: %d\n", num); // Output: The value of num is: 21
        printf("The value of *ptr is: %d\n", *ptr); // Output: The value of *ptr is: 21

        return 0;
    }
```

### Assigning Values to Pointers
To assign a value to a pointer, you use the & (address-of) operator to get the address of a variable, and then store that value in the pointer. For example:

```c 
    int main() 
    {
        int x = 5;   // declare a variable x and initialize it to 5
        int *ptr;    // declare a pointer to an integer variable
    
        ptr = &x;    // assign the address of x to the pointer
    
        return 0;
    }
```
### Dereferencing Pointers
Dereferencing a pointer means accessing the value stored at the memory address pointed to by the pointer. To dereference a pointer, you use the * operator. For example:
```c 
    int main()
    {
        int x = 5;   // declare a variable x and initialize it to 5
        int *ptr;    // declare a pointer to an integer variable
    
        ptr = &x;    // assign the address of x to the pointer
    
        printf("The value of x is %d\n", *ptr);  // output: The value of x is 5
    
        return 0;
    }
```
### Passing Pointers as Function Arguments
Passing pointers as function arguments allows you to modify the original value of a variable. For example:
```c 
    void increment(int *ptr) {
        (*ptr)++;   // increment the value stored at the memory address pointed to by ptr
    }
    
    int main()
    {
        int x = 5;
        int *ptr = &x;
    
        increment(ptr);   // pass ptr to increment function
    
        printf("The value of x is %d\n", x);   // output: The value of x is 6
    
        return 0;
    }
```
In this example, the `increment` function takes a pointer to an integer as an argument, and then increments the value stored at that memory address. Since we passed the address of x to the function, the original value of x is modified.

### Conclusion
Pointers can be a powerful tool in C programming, allowing you to manipulate data directly by reference. However, they can also be a source of bugs and errors if not used carefully. Understanding how pointers work and practicing their use can help you become a more effective C programmer

## Additional Resources
- [Concept: Pointers and arrays](https://intranet.alxswe.com/concepts/60) >> Only alx student can view this
- [C- Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm#)
- [MarkDown in Visual Studio Code](https://code.visualstudio.com/docs/languages/markdown)