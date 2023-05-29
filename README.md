# GPA

This program is designed to read course information from a file, perform calculations on the data, and write the results to an output file. 
The program consists of several source files: 'read_write_file.c', 'courses.h', 'calculation.c', and 'LabAssignment3.c'.

Source Files
read_write_file.c
This file contains functions for reading course information from a file and writing output to a file. It includes the following functions:

read_courses: This function reads course data from a file specified by the filename parameter. It populates the courses array with the read data. It returns 1 on success and 0 on failure.

write_output: This function writes the course data from the courses array to a file specified by the filename parameter. The count parameter specifies the number of courses in the array.

courses.h
This header file defines the structures and enumerations used in the program. It includes the following:

Grade: An enumeration that represents different grades. The grades are assigned numeric values: A=4, B=3, C=2, D=1, F=0.

Course: A structure that represents a course. It contains fields for semester, code, name, AKTS (credit hours), and grade.

calculation.c
This file contains a single function:

calculate_weighted_grade_points: This function takes a Course structure as input and calculates the weighted grade points by multiplying the AKTS (credit hours) with the grade value. It returns the calculated value.
LabAssignment3.c
This file is the main entry point of the program. It includes the necessary header files and defines the main function. The main function performs the following tasks:

Defines input and output filenames.

Declares variables for storing course information.

Calls the read_courses function to read the course data from the input file into the courses array.

Performs calculations on the course data, such as calculating weighted grade points and GPA.

Calls the write_output function to write the calculated data to the output file.

Cleans up any allocated memory or resources.

Usage
To use this program, follow these steps:

Place the input file (courses.dat) in the same directory as the program files.

Compile the program using a C compiler.

Run the compiled executable.

The program will read the course data from the input file, perform calculations, and write the results to the output file (output.dat).

Note: Ensure that you have the necessary read and write permissions for the input and output files.

Disclaimer
This program was created as part of a lab assignment and may require modifications or enhancements to suit specific requirements. It is provided as-is without any warranty or guarantee of its functionality. Use it at your own risk.
