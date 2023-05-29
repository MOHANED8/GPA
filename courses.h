#define _CRT_SECURE_NO_WARNINGS
#ifndef COURSES_H
#define COURSES_H

typedef enum {
    A = 4,
    B = 3,
    C = 2,
    D = 1,
    F = 0
} Grade;

typedef struct {
    int semester;
    char code[10];
    char name[50];
    int AKTS;
    Grade grade;
} Course;

#endif
