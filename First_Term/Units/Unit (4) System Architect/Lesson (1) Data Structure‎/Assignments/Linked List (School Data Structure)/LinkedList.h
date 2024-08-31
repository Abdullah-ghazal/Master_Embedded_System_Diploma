
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include"others.h"

// the data of each node
struct Sdata{
	int id;
	char name[30];
	int age;
};
// the creation of each node
struct Sstudent{
	struct Sdata student;
	struct Sstudent* pNextStudent;
};


int addStudent();
int deleteStudent();
void printAllStudent();
void deleteAllStudent();
void printStudent();
void nodesnumber();
void printStudentRev();

#endif /* LINKEDLIST_H_ */