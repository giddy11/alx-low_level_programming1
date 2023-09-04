#include <stdio.h>
#include <fcntl.h>


int main()
{
    
    printf("O_RDWR: %d\n\n", O_RDWR);
    printf("O_RDONLY: %d\n", O_RDONLY);
    printf("O_WRONLY: %d\n", O_WRONLY);
    printf("3 | 2: %d\n", 3 | 2);
    printf("(O_RDONLY + O_WRONLY): %d\n", (O_RDONLY + O_WRONLY));
    printf("(O_RDONLY << 1): %d\n", (O_RDONLY << 1));
    printf("(O_RDONLY && O_WRONLY): %d\n", (O_RDONLY && O_WRONLY));
    printf("(O_RDONLY & O_WRONLY): %d\n", (O_RDONLY & O_WRONLY));
    printf("(O_WRONLY << 1): %d\n", (O_WRONLY << 1));
    printf("(O_RDONLY | O_WRONLY): %d\n", (O_RDONLY | O_WRONLY));




    return (0);
}