#include <stdio.h>
#include <stdbool.h>

struct Car {
    int id;
    char brand[30];
    char model[30];
    char color[30];
    short year;
    double price;
    bool is_available;
};

void print_car(struct Car car) {
    printf("Car: %s %s\n", car.brand, car.model);
    printf("Color: %s\n", car.color);
    printf("Year: %hd\n", car.year);
    printf("Price: %.2f\n", car.price);
    printf("Available: %d\n", car.is_available);
    printf("\n");
}

int main(void) {
    char name[] = "First";
    short foundation_year = 2026;
    char phone_number[] = "+1234567890";
    char email[] = "dealership@gmail.com";
    short start_work = 9;
    short end_work = 21;
    enum { car_count = 3 };

    struct Car car[car_count] = {
        {1, "BMB", "BIP-BIP", "White", 2025, 40500.00, true},
        {2, "TOTOYA", "BARSUK", "Black", 2026, 55490.00, false},
        {3, "Perrari", "FARA", "Yellow", 2026, 109900.00, true}
    };

    printf("Company's name is \"%s\"\n", name);
    printf("Year of foundation: %hd\n", foundation_year);
    printf("Phone number: %s\n", phone_number);
    printf("E-mail: %s\n", email);
    printf("Working hours: from %hd to %hd\n", start_work, end_work);
    printf("\n");
    
    for (int i = 0; i < car_count; i++) {
        print_car(car[i]);
    }
}