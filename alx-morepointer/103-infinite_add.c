#include "main.h"

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int i, j, k, len1, len2, carry;
        len1 = len2 = carry = 0;

        while (n1[len1] != '\0')
        {
                len1++;
        }
        
        while (n2[len2] != '\0')
        {
                len2++;
        }

        if (len1 + 1 >= size_r || len2 + 1 >= size_r)
        {
                return (0);
        }
        

        for (i = len1 - 1, j = len2 - 1, k = len1 + len2; i >= 0 || j >= 0; i--)
        {
                int digit1 = i >= 0 ? n1[i] - '0' : 0;
                int digit2 = j >= 0 ? n2[j] - '0' : 0;
                int sum = digit1 + digit2 + carry;

                carry = sum / 10;

                r[k-1] = '0' + (sum % 10);
                j--, k--;
        }

        if (carry != 0)
        {
                r[k - 1] = '0' + carry;
                k--;
        }

        for(i = 0; r[k] >= 48 && r[k] <= 57; i++, k++)
        {
                r[i] = r[k];
        }

        r[i] = '\0';
        
        return r;        
}
