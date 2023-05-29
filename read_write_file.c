#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "courses.h"

int read_courses(const char* filename, Course** courses) {
    FILE* file = fopen(filename, "r");
    if (!file) return 0;

    // Read file and populate the courses array.
    // ...

    fclose(file);
    return 1; // Return 1 on success.
}

void write_output(const char* filename, const Course* courses, int count) {
    FILE* file = fopen(filename, "w");
    if (!file) return;

    // Write data into file.
    // ...

    fclose(file);
}
