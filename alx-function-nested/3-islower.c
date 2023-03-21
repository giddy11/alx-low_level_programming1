#include <stdio.h>

int _isLower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}


int main()
{
    printf("%d", _isLower('h'));



//     int _islower(int c) {
//   if (c >= 'a' && c <= 'z') {
//     return 1;
//   }
//   else {
//     return 0;
//   }
// }

}