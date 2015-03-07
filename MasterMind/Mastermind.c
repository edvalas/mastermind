# include "MyHeader.h"

main()
{
	int userDecision, userChoice;
	

	printf("Hello, Would you like to play MasterMind? (1 for yes 2 to exit): ");
	fflush(stdin);
	scanf("%d", &userDecision);

	if(userDecision != 1 && userDecision != 2)
	{
		do
		{
			printf("Hello, Would you like to play MasterMind? (1 for yes 2 to exit): ");
			fflush(stdin);
			scanf("%d", &userDecision);
		}while(userDecision != 1 && userDecision != 2);
		
	}

	if (userDecision == 2)
	{
		exit(0);
	}

	do
	{
		switch(userChoice = showMenu())
		{
		case 1:
			{
				easyDifficulty();
				break;
			}
		case 2:
			{
				mediumDifficulty();
				break;
			}
		case 3:
			{
				hardDifficulty();
				break;
			}
		default:
			{
				printf("\n\nThanks for Playing!");
				break;
			}
		} // switch
	} while( userChoice != 4 ); // while
	
	printf("\n");
	system("pause");
} // main

void numGen()
{
	int i, max, j;

	max = 8;

	srand (time(NULL));

	for (i = 0; i < 4; i++)
	{//for
		arr [i] = rand()%max+1;

		if (i == 1)
		{//if
			if (arr[i] == arr[i-1])
			{
				do
				{
					arr [i] = rand()%max+1;
				}while(arr [i] == arr[i-1]);
			}
		}//if

		if (i == 2)
		{//if
			if (arr[i] == arr[i-1] || arr[i] == arr[i-2])
			{
				do
				{
					arr [i] = rand()%max+1;
				}while(arr[i] == arr[i-1] || arr[i] == arr[i-2]);
			}
		}//if

		if (i == 3)
		{//if
			if (arr[i] == arr[i-1] || arr[i] == arr[i-2] || arr[i] == arr[i-3])
			{
				do
				{
					arr [i] = rand()%max+1;
				}while(arr[i] == arr[i-1] || arr[i] == arr[i-2] || arr[i] == arr[i-3]);
			}
		}
	}//for

	for (j = 0; j < 4; j++)
	{
		printf("%d ", arr[j]);
	}
}

void numGenMedium()
{
	int i, max, j;

	max = 8;

	srand (time(NULL));

	for (i = 0; i < 4; i++)
	{//for
		arr [i] = rand()%max+1;
	}//for

	for (j = 0; j < 4; j++)
	{
		printf("%d ", arr[j]);
	}
}

void numGenHard()
{
	int i, max, j;

	max = 8;

	srand (time(NULL));

	for (i = 0; i < 4; i++)
	{//for
		arr [i] = rand()%max;
	}//for

	for (j = 0; j < 4; j++)
	{
		printf("%d ", arr[j]);
	}
}