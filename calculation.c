#define _CRT_SECURE_NO_WARNINGS
#include "courses.h"

double calculate_weighted_grade_points(Course course) {
    return course.AKTS * course.grade;
}
