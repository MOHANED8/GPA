//Muhanned Hasan 2200000776
#define _CRT_SECURE_NO_WARNINGS
// LabAssignment3.c

#include <stdio.h>
#include "courses.h"

// Function declarations
double calculate_weighted_grade_points(Course course);
int read_courses(const char* filename, Course** courses);
void write_output(const char* filename, const Course* courses, int count);

int main() {
    const char* input_filename = "courses.dat";
    const char* output_filename = "output.dat";
    Course* courses;
    int count;

    if (!read_courses(input_filename, &courses)) {
        printf("Error reading courses file.\n");
        return 1;
    }

    // Calculate weighted grade points and GPA.
    // ...

    write_output(output_filename, courses, count);

    // Clean up
    // ...

    return 0;
}
