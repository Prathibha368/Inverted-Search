#include "inverted.h"
int update_flag;
int create_flag;
int main(int argc, char *argv[])
{
	
    F_node *head = NULL;
    M_node *HT[27];
	for(int i=0;i<27;i++){
		HT[i]=NULL;
	}
    // Validate_files
	validate_files(argv, &head);
	if(argc == 1){
		printf(PURPLE"INFO: NEED TO PASS ATLEAST ONE FILE\n"RESET);
		return 0;
	}

    int option;
    do
    {
	printf("Select your choice among following operations:\n1. Create Database\n2. Display Database\n3. Save Database\n4. Search\n5. Update Database\n6. Exit\n\nEnter your choice : ");

	scanf("%d", &option);

	switch (option)
	{
	    case 1:
		if(create_flag==0)
			create_database(HT, head);
			create_flag=1;
		break;

	    case 2:
		display_database(HT);
		break;

	    case 3:
		save_database(HT);
		    break;

	    case 4:
		search_database(HT);
		break;

	    case 5:
		if(create_flag){
			update_flag=1;
			update_database(HT, &head);
		}
		printf("Update database is not possible\n");
		break;

	    case 6:
		break;

	    default:
		printf("INFO : Please enter the valid option\n");
	}
    }while( option != 6 );

    return 0;
}
