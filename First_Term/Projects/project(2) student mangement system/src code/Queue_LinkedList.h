
#ifndef QUEUE_LINKEDLIST_H_
#define QUEUE_LINKEDLIST_H_

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
// macro to print
#define DPRINTF(...) 		{fflush(stdout);fflush(stdin);\
							printf(__VA_ARGS__);\
							fflush(stdout);fflush(stdin);}

// Node structure for the linked list

struct student_info
{
    char first_name[50];
    char last_name[50];
    int roll;
    float GPA;
    int num_of_courses;
    int course_id[10];
}st[55];

// linked_list
typedef struct student_node
{
    struct student_info student;
    struct student_node* p_next_student; // pointer of the next node
}student_node;


// Queue structure
typedef struct student_queue
{
    student_node* front;
    student_node* back;
}student_queue;

// variables & pointers
extern student_queue* st_queue ;
extern int count;
extern FILE* filePointer;

// Functions / APIs:
// Function to create a new node / Student
student_node* create_node(struct student_info st_data);
// Function to initialize the queue
student_queue* init_queue();
// Function to add an element to the queue
void enqueue_student(struct student_info st_data);
// Function to add the student manually to the queue
void add_element_manually();
// Function to add the student from the file to the queue
void add_element_file();
// Function to check the roll number of the student in the queue
int check_roll(int roll_num);
// Function to update the student data in the queue
void update_st_data();
// Function to find the student with his roll number in the queue
void find_roll();
// Function to find the student with his first name in the queue
void find_1st_name();
// Function to find the student with his course in the queue
void find_course();
// Function to calculate the total number of students in the queue
void tot_s();
// Function to remove the student manually from the queue
void delete_student();
// Function to display single studen 
void display_student(int roll_num);
// Function to display the queue (all students)
void show_students();

#endif /* QUEUE_LINKEDLIST_H_ */