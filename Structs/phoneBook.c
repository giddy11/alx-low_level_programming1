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
    Address contact[2];

    strcpy(contact[0].firstName, "Chimo");
    strcpy(contact[0].streetName, "Chimo street");
    contact[0].Longitude = 12.76;
    contact[0].Latitude = 1.86;

    strcpy(contact[1].firstName, "Gift");
    strcpy(contact[1].streetName, "gift street");
    contact[1].Longitude = 1.76;
    contact[1].Latitude = 1.36;
    
    printf("Who are you looking for? \n");
    char name[20];
    scanf("%s", name);

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(contact[i].firstName, name) == 0)
        {
            printf("First Name: %s\n", contact[i].firstName);
            printf("Street Name: %s\n", contact[i].streetName);
            printf("Latitude: %.2f\n", contact[i].Latitude);
            printf("Longitude: %.2f\n", contact[i].Longitude);
        }
    }

    printf("%s Not found!!!", name);

    return (0);
}