#include <stdio.h>
#include <string.h>

typedef struct {
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
} Car;

int main()
{
    Car car[2];
    int i;

    for ( i = 0; i < 2; i++)
    {
        printf("Enter the car %d fuel tank capacity: ", i + 1);
        scanf("%d", &car[i].fuel_tank_cap);

        printf("Enter the car %d seating capacity: ", i + 1);
        scanf("%d", &car[i].seating_cap);

        printf("Enter the car %d city mileage: ", i + 1);
        scanf("%2f", &car[i].city_mileage);
    }
    printf(("\n"));

    for ( i = 0; i < 2; i++)
    {
        printf("\nCar %d details: \n", i + 1);
        printf("\nfuel tank capacity: %d\n", car[i].fuel_tank_cap);
        printf("\nseating capacity: %d\n", car[i].seating_cap);
        printf("\ncity mileage: %f\n", car[i].city_mileage);
    }

    return (0);
}