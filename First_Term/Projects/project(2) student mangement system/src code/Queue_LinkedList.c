#include "Queue_LinkedList.h"

student_queue* st_queue = NULL;
int count = 0;
FILE* filePointer = NULL;

// Function to initialize the queue
student_queue* init_queue()
{
    student_queue* queue = (student_queue*)malloc(sizeof(student_queue));
    queue->back = NULL;
    queue->front = NULL;
    return queue;
}

// Function to create a new node / Student

student_node* create_node(struct student_info st_data)
{
    student_node* new_student;
    new_student = (student_node*)malloc(sizeof(student_node));
    new_student->student = st_data;
    new_student->p_next_student = NULL;
    return new_student;
}




// Function to add an element to the queue
void enqueue_student(struct student_info st_data)
{
    student_node* new_node = create_node(st_data);

    if(new_node == NULL)
        DPRINTF("Error!!! Node Creation Failed!!\n");

    if(st_queue->back == NULL)
    {
        st_queue->back = new_node;
        st_queue->front = new_node;
        return;
    }

    st_queue->back->p_next_student = new_node;
    st_queue->back = new_node;
        
}

// Function to add the student manually to the queue
void add_element_manually()
{
    char temp_text[50]; // the string var to store the numbers  
    struct student_info student_data;

    // Get student ID
    DPRINTF("Enter your ID (Roll number): \n");
    gets(temp_text);
    student_data.roll = atoi(temp_text);

    // Get Student first Name from the user
    DPRINTF("Enter your Fisrt Name: \n");
    gets(student_data.first_name);

    // Get Student last Name from the user
    DPRINTF("Enter your Last Name: \n");
    gets(student_data.last_name);

    // Get Student GPA from the user
    DPRINTF("Enter your GPA: \n");
    gets(temp_text);
    student_data.GPA = atof(temp_text);

    // Get Courses of student
    DPRINTF("Enter num of courses: \n");
    gets(temp_text);
    student_data.num_of_courses = atoi(temp_text);
    DPRINTF("Enter the ID of each course: \n");
    for (int i = 0; i < student_data.num_of_courses; i++)
    {
        DPRINTF("Course %d ID: ",i+1);
        gets(temp_text);
        student_data.course_id[i] = atoi(temp_text);
    }
    
    DPRINTF("Add the Students Details \n");

    //If this ID has not been entered before
	if (check_roll(student_data.roll) == 0) 
    {
		enqueue_student(student_data);
		DPRINTF("Roll Number %d saved successfully \n", student_data.roll);
		DPRINTF("============================================\n");
		count++;
		tot_s();

	}
    else 
    {
		DPRINTF("Error!!! Roll Number %d is already taken!\n", student_data.roll);
	}
}


// Function to add the student from the file to the queue
void add_element_file()
{
    filePointer = fopen("student_data_file.txt", "r");

	struct student_info student_data;

	// Get Student ID from the user
	if (filePointer != NULL) {
		while (!feof(filePointer)){
			if( fscanf(filePointer, "%d", &student_data.roll) !=1)
                break;
			if( fscanf(filePointer, "%s", student_data.first_name) !=1) 
                break;
			if( fscanf(filePointer, "%s", student_data.last_name) !=1) 
                break;
			if( fscanf(filePointer, "%f", &student_data.GPA) !=1) 
                break;

            // get courses ids
			for (int i=0; i< 5; i++)
			{
				if( fscanf(filePointer, "%d", &student_data.course_id[i]) !=1) break;

			}

            //If this ID has not been entered before
			if (!check_roll(student_data.roll)) 
            {
				enqueue_student(student_data);
				DPRINTF("Roll Number %d saved successfully \n", student_data.roll);
				count++;


			} 
            else 
            {
				DPRINTF("Error!! Roll Number %d is already taken!\n", student_data.roll);
			}
		}

		fclose(filePointer);
	}

	DPRINTF("Student Details is added successfully \n");
	DPRINTF("-----------------^_^---------------------\n");
	tot_s();
}

// Function to check the roll number of the student in the queue if exist or not
int check_roll(int roll_num)
{
	if (st_queue->front == NULL)
		return 0;

    student_node* temp = st_queue->front;
    while (temp != NULL)
    {
        if(temp->student.roll == roll_num)
            return 1;

        temp = temp->p_next_student; // transient pointer to next node
    }
    
    //else
    return 0;

}

// Function to update the student data in the queue
void update_st_data()
{
    char temp_text[40];
	int update_num;
	int found =0;
	DPRINTF("Enter the Roll Number to update the entry: \n");
	gets(temp_text);
	int roll = atoi(temp_text);

    // check if the queue is empty or not
    if(st_queue->front == NULL)
    {
        DPRINTF("Queue is Empty !!!\n");
        return;
    }

    student_node* temp = st_queue->front;
    while (temp != NULL && !found)
    {
        DPRINTF("Enter the option: \n");
        DPRINTF("[1] FirstName\n[2] LastName\n[3] Roll\n[4] GPA\n")
        gets(temp_text);
        update_num = atoi(temp_text);
        switch(update_num)
        {
            case 1:
            {
                DPRINTF("Enter the new First Name: ");
                gets(temp->student.first_name);
                break;
            }
            case 2:
            {
                DPRINTF("Enter the new Last Name: ");
                gets(temp->student.last_name);
                break;
            }
            case 3:
            {
                DPRINTF("Enter the New Roll number: ");
                gets(temp_text);
                temp->student.roll = atoi(temp_text);
                break;
            }
            case 4:
            {
                DPRINTF("Enter the New GPA: ");
                gets(temp_text);
                temp->student.GPA = atof(temp_text);
                break;
            }
            default:
            {
                DPRINTF("Error!!!\n");                
                break;
            }
        }
        found = 1;
        DPRINTF("Updated Successfully!!!\n");
    }

    if (!found) 
    {
		DPRINTF("Error!!! Roll Number %d not found!\n", roll );
	}
    	
}


// Function to find the student with his roll number in the queue
void find_roll()
{
    char temp_text[40];
	DPRINTF("Enter the Roll Number of the student: \n");
	gets(temp_text);
	int roll = atoi(temp_text);

	if(check_roll(roll) == 0)
	{
		DPRINTF("Error!! Roll Number %d not found!\n", roll);
	}
	else
    {
		display_student(roll);
	}
}

// Function to find the student with his first name in the queue
void find_1st_name()
{
    char temp_text[40];
	DPRINTF("Enter the First Name of the student to find:");
	gets(temp_text);
	int found =0;

	student_node* temp = st_queue->front;

	if (st_queue->front == NULL) 
    {
		st_queue->back = NULL;
	}

	while (temp != NULL) 
    {
		if (strcmp(temp->student.first_name, temp_text) == 0) 
        {
			DPRINTF("The Students Details are \n");
			DPRINTF("The First name is : %s  \n",temp->student.first_name);
			DPRINTF("The Last name is : %s  \n",temp->student.last_name);
			DPRINTF("The GPA is %.3f \n",temp->student.GPA);
			for (int i = 0; i<5; i++)
			{
				DPRINTF("The Course IDs are %d \n",temp->student.course_id[i]);
			}
			found = 1;
		}
		temp = temp->p_next_student;
	}

	if (!found) 
    {
		DPRINTF("Error!!! First Name %s not found \n", temp_text);
	}
}

// Function to find the student with his course in the queue
void find_course()
{
    char temp_text[40];
	DPRINTF("Enter the Course ID to find:");
	gets(temp_text);
	int id = atoi(temp_text);
	int found =0;

	student_node* temp = st_queue->front;

	if (st_queue->front == NULL) 
    {
		st_queue->back = NULL;
	}

	int i, enrolled=0;
	while (temp != NULL) 
    {
		for (i=0; i<5;i++)
		{
			if(temp->student.course_id[i] == id)
			{
			    DPRINTF("The Students Details are \n");
			    DPRINTF("The First name is : %s  \n",temp->student.first_name);
			    DPRINTF("The Last name is : %s  \n",temp->student.last_name);
			    DPRINTF("The GPA is %.3f \n",temp->student.GPA);
				found = 1;
				enrolled++;
			}
		}

		temp = temp->p_next_student;
	}

	if (!found) 
    {
		DPRINTF("Error!! Course ID %d not found ! \n", id);
		return;
	}
	DPRINTF("[INFO] Total Number of Students Enrolled: %d \n", enrolled);
}

// Function to calculate the total number of students in the queue
void tot_s()
{
    DPRINTF("You can add up to 50 students.\n")
    DPRINTF("The total number of students: %d\n",count);
    DPRINTF("the available number of students to add: \n");
}

// Function to remove the student manually from the queue
void delete_student()
{
    char temp_text[40];
	DPRINTF("Enter the Roll Number which you want to delete: \n");
	gets(temp_text);
	int roll = atoi(temp_text);
    // check is the queue is empty
	if (st_queue->front == NULL) 
    {
		printf("Queue is empty\n");
		return;
	}

	student_node* temp = st_queue->front;
	student_node* prev = NULL;

	// if the fisrt node will be removed
	if (temp != NULL && temp->student.roll == roll) 
    {
		st_queue->front = temp->p_next_student;
		if (st_queue->front == NULL)
        {
			st_queue->back = NULL;
		}
		free(temp);
		count--;
		printf("This Roll Number %d is removed successfully!\n", roll);
		return;
	}

	// Search for the node to be removed
	while (temp != NULL && temp->student.roll !=roll) 
    {
		prev = temp;
		temp = temp->p_next_student;
	}

	// If the node was not found
	if (temp == NULL) {
		printf("Error!! This Roll Number %d not found!\n", roll);
		return;
	}

	// Unlink the node from the linked list
	prev->p_next_student = temp->p_next_student;

	// If the node to be removed is the rear node
	if (temp->p_next_student == NULL) {
		st_queue->back = prev;
	}

	free(temp);
	count--;
	printf("This Roll Number %d is removed successfully!\n", roll);
}

// Function to display single studen 
void display_student(int roll_num)
{
    student_node* temp = st_queue->front; // start node
    while (temp != NULL)
    {
        if(temp->student.roll == roll_num)
        {
            DPRINTF(" ======== The Students Details: ========\n");
			DPRINTF("The First name is : %s  \n",temp->student.first_name);
			DPRINTF("The Last name is : %s  \n",temp->student.last_name);
			DPRINTF("The GPA is %.3f \n",temp->student.GPA);

			for (int i = 0; i<5; i++)
			{
				DPRINTF("The Course IDs are is %d \n",temp->student.course_id[i]);
			}
        }
		temp = temp->p_next_student;
    }
    
}

// Function to display the queue (all students)
void show_students()
{
    student_node* temp = st_queue->front;

	while (temp != NULL) 
    {
		DPRINTF("The First name is : %s  \n",temp->student.first_name);
		DPRINTF("The Last name is : %s  \n",temp->student.last_name);
		DPRINTF("The GPA is %0.2f \n",temp->student.GPA);
		for (int i = 0; i<5; i++)
		{
			DPRINTF("The Course IDs are %d \n",temp->student.course_id[i]);
		}
		DPRINTF("---------------------------\n");
		temp = temp->p_next_student; // next node
	}
}

