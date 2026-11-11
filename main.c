#include <stdio.h>
#include <stdbool.h>

void print_company_info(char name[], short foundation_year, char phone_number[], char email[], short start_work, short end_work) {
    printf("Company's name is \"%s\"\n", name);
    printf("Year of foundation: %hd\n", foundation_year);
    printf("Phone number: %s\n", phone_number);
    printf("E-mail: %s\n", email);
    printf("Working hours: from %hd to %hd\n", start_work, end_work);
    printf("\n");
}

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
    printf("\n");
    printf("ID: %d\n", car.id);
    printf("Car: %s %s\n", car.brand, car.model);
    printf("Color: %s\n", car.color);
    printf("Year: %hd\n", car.year);
    printf("Price: %.2f\n", car.price);
    printf("Available: %d\n", car.is_available);
    printf("\n");
}

void print_inventory(struct Car cars[], int count) {
    for (int i = 0; i < count; i++) {
        print_car(cars[i]);
    }
}

int find_car_by_id(struct Car cars[], int count, int id) {
    for (int i = 0; i < count; i++) {
        if (cars[i].id == id) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    enum { car_count = 3 };
    int search_id;

    struct Car car[car_count] = {
        {1, "BMB", "BIP-BIP", "White", 2025, 40500.00, true},
        {2, "TOTOYA", "BARSUK", "Black", 2026, 55490.00, false},
        {3, "Perrari", "FARA", "Yellow", 2026, 109900.00, true}
    };

    print_company_info("First", 2026, "+1234567890", "dealership@gmail.com", 9, 21);

    printf("Enter car ID: ");
    scanf("%d", &search_id);
    if (scanf("%d", &search_id) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    int index = find_car_by_id(car, car_count, search_id);
    if (index == -1) {
        printf("Car not found!");
    } else {
        print_car(car[index]);
    }

    return 0;
}