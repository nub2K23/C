#include <stdio.h>

int main() {
    // Declare file pointers
    FILE *sourceFile, *destinationFile;

    // Open the source file in read mode
    sourceFile = fopen("source.txt", "r");

    // Check if the source file exists
    if (sourceFile == NULL) {
        printf("Source file not found or cannot be opened.\n");
        return 1; // Exit with an error code
    }

    // Open the destination file in write mode
    destinationFile = fopen("destination.txt", "w");

    // Check if the destination file can be opened
    if (destinationFile == NULL) {
        printf("Destination file cannot be created or opened.\n");
        fclose(sourceFile); // Close the source file before exiting
        return 2; // Exit with an error code
    }

    char ch;

    // Read from the source file and write to the destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully!\n");

    return 0; // Exit successfully
}