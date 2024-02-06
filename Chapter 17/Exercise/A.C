#include <stdio.h>

// Define the structure for a student
struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};

void printStudentsByYear(struct Student *, int, int);
void printStudentByRollNumber(struct Student *, int, int);
int main() {
    // Let's create an array of students for testing
    struct Student students[450] = {
        {101, "John", "Computer Science", "BCA", 2022},
        {102, "Alice", "Electronics", "B.Tech", 2021},
        // Add more students as needed
    };

    // Test the functions
    printStudentsByYear(students, 2, 2022);
    printStudentByRollNumber(students, 2, 101);

    return 0;
}

// Function to print names of students who joined in a particular year
void printStudentsByYear(struct Student students[], int numOfStudents, int targetYear) {
    printf("Students who joined in %d:\n", targetYear);
    for (int i = 0; i < numOfStudents; ++i) {
        if (students[i].yearOfJoining == targetYear) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to print data of a student by roll number
void printStudentByRollNumber(struct Student students[], int numOfStudents, int targetRollNumber) {
    for (int i = 0; i < numOfStudents; ++i) {
        if (students[i].rollNumber == targetRollNumber) {
            printf("Student Details:\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].yearOfJoining);
            return; // Exit the function once found
        }
    }
    // If the loop completes, the student with the given roll number wasn't found
    printf("Student with Roll Number %d not found.\n", targetRollNumber);
}