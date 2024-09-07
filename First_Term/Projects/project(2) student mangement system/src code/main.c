/*
 ============================================================================
 Name        : student mangment system
 Author      : Abdullah Mahmoud ghazal
 ============================================================================
 */

#include "Queue_LinkedList.c"

int main(void) {
    int choice;
	void(*options[9])() =                                       //array of pointers to function
	{
			 add_element_manually, //1
			 add_element_file,     //2
			 find_roll,            //3
			 find_1st_name,        //4
			 find_course,          //5
			 tot_s,                //6  
			 delete_student,       //7
			 update_st_data,       //8
			 show_students         //9
	};

	init_queue();
    st_queue = init_queue();
	DPRINTF("<<< Welcome to student Management system >>>\n");
	
	while(1)	
	{
        {
            DPRINTF("choose the task that u want to perform :- \n");
            ////////////////////////////////////////////////////////
            DPRINTF("1. add the students details manually. \n");
            DPRINTF("2. add the students details from text file. \n");
            DPRINTF("3. find the student details by roll number. \n");
            DPRINTF("4. find the student details by first name. \n");
            DPRINTF("5. find the student details by course id. \n");
            DPRINTF("6. find the total number of students. \n");
            DPRINTF("7. delete the student details by roll number. \n");
            DPRINTF("8. update the student details by roll number. \n");
            DPRINTF("9. show all informations. \n");
            DPRINTF("10. Exit\n");
            ////////////////////////////////////////////////////////
            DPRINTF("Enter your choice to perform the task : ");
            scanf("%d",&choice);

            if(choice == 10) // exit
                break;
            else
                options[choice -1]();
        }
        printf("\n===============================================\n");
	}

	}