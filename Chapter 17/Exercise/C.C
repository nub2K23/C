#include <stdio.h>
#include <string.h>

#define SERIAL_LENGTH 4 // Including null terminator

struct EnginePart {
    char serialNumber[SERIAL_LENGTH];
    int yearOfManufacture;
    char material[20];
    int quantityManufactured;
};

void retrieveParts(struct EnginePart *, int, const char *, const char *);
int main() {
    // Sample data
    struct EnginePart parts[] = {
        {"AA0", 2022, "Steel", 100},
        {"BB1", 2023, "Aluminum", 150},
        {"BB2", 2024, "Steel", 200},
        {"CC5", 2021, "Carbon Fiber", 50},
        {"CC6", 2024, "Aluminum", 175},
        {"DD0", 2020, "Steel", 120},
        {"EE9", 2023, "Aluminum", 180},
        {"FF9", 2024, "Steel", 220}
    };
    int numParts = sizeof(parts) / sizeof(parts[0]);

    // Retrieve information on parts with serial numbers between BB1 and CC6
    retrieveParts(parts, numParts, "BB1", "CC6");

    return 0;
}

// Function to retrieve information on parts with serial numbers between startSerial and endSerial
void retrieveParts(struct EnginePart parts[], int numParts, const char* startSerial, const char* endSerial) {
    printf("Retrieved parts:\n");
    for (int i = 0; i < numParts; i++) {
        if (strcmp(parts[i].serialNumber, startSerial) >= 0 && strcmp(parts[i].serialNumber, endSerial) <= 0) {
            printf("Serial Number: %s, Year of Manufacture: %d, Material: %s, Quantity Manufactured: %d\n", parts[i].serialNumber, parts[i].yearOfManufacture, parts[i].material, parts[i].quantityManufactured);
        }
    }
}