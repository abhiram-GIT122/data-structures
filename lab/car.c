#include <stdio.h>

struct Car {
    int car_id;
    char model[50];
    float rental_rate_per_day;
};

int main() {
    struct Car cars[3];  
    int days;
    int i;

    // Input data for three cars
    for (i = 0; i < 3; i++) {
        printf("Enter details for Car %d:\n", i + 1);
        printf("Enter car ID: ");
        scanf("%d", &cars[i].car_id); 
        getchar();  
        printf("Enter model: ");
        fgets(cars[i].model, sizeof(cars[i].model), stdin); 
        printf("Enter rental rate per day: ");
        scanf("%f", &cars[i].rental_rate_per_day);  
        printf("\n");
    }

   
    printf("Enter the number of rental days: ");
    scanf("%d", &days);

   
    printf("\nCar Rental Details:\n");
    for (i = 0; i < 3; i++) {
        float total_rental_cost = cars[i].rental_rate_per_day * days;  
        printf("Car ID: %d\n", cars[i].car_id);
        printf("Model: %s", cars[i].model);
        printf("Rental Rate per Day: %.2f\n", cars[i].rental_rate_per_day);
        printf("Total Rental Cost for %d days: %.2f\n\n", days, total_rental_cost);
    }

    return 0;
}
