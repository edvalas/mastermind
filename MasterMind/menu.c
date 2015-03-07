# include "MyHeader.h"

int showMenu()
{
	int userChoice;

	do//menu
	{
		system("cls");
		printf("\n\n\t\tMaster Mind Menu");
		printf("\n\n\t1: Easy difficulty (no repetition , no blanks)");
		printf("\n\n\t2: Medium difficulty (repetition , no blanks)");
		printf("\n\n\t3: Hard difficulty (repetition , with blanks)");
		printf("\n\n\t4: Exit");

		printf("\n\n\tWhat difficulty or 4 to quit: ");
		fflush(stdin);
		scanf("%d", &userChoice);
	}while( (userChoice < 1) || (userChoice > 4) );
	

	return(userChoice);
}