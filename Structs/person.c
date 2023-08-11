#include <stdio.h>
#include <string.h>

typedef struct {
    char firstName[20];
    char streetName[20];
    float Longitude;
    float Latitude;
} Address;

int main()
{
    /* declaring a struct*/
    Address giftAddress;
    Address chimoAddress;

    /*assigning values to a struct*/
    strcpy(giftAddress.firstName, "Gift");
    strcpy(giftAddress.streetName, "Chimo street");
    giftAddress.Longitude = 2.76;
    giftAddress.Latitude = 1.76;

    /*assigning values to a struct*/
    strcpy(chimoAddress.firstName, "Chimo");
    strcpy(chimoAddress.streetName, "Chimo");
    chimoAddress.Longitude = 12.76;
    chimoAddress.Latitude = 1.86;
    
    printf("Who are you looking for? \n");
    char name[20];
    scanf("%s", name);

    if (strcmp(giftAddress.firstName, name) == 0)
    {
        printf("First Name: %s\n", giftAddress.firstName);
        printf("Street Name: %s\n", giftAddress.streetName);
        printf("Latitude: %.2f\n", giftAddress.Latitude);
        printf("Longitude: %.2f\n", giftAddress.Longitude);
    }
    else if (strcmp(chimoAddress.firstName, name) == 0)
    {
        printf("First Name: %s\n", chimoAddress.firstName);
        printf("Street Name: %s\n",chimoAddress.streetName);
        printf("Latitude: %.2f\n", chimoAddress.Latitude);
        printf("Longitude: %.2f\n",chimoAddress.Longitude);
    }
    else
        printf("%s Not found!!!", name);

    return (0);
}