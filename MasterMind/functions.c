# include "MyHeader.h"

void easyDifficulty()
{
	int i, j, number = 0, whitePeg = 0, blackPeg = 0;
	int numTimesViewed = 0;

	printf("\nYou've choosen Easy difficulty, good luck!\n\n");
	printf("Color List\n");
	printf("1 = Red\n");
	printf("2 = Blue\n");
	printf("3 = Green\n");
	printf("4 = Yellow\n");
	printf("5 = Violet\n");
	printf("6 = Orange\n");
	printf("7 = Purple\n");

	numGen();

	while(blackPeg != 4)
	{
		whitePeg = 0;
		blackPeg = 0;

		//user input
		for (i = 0; i < 4; i++)
		{
			printf("\nEnter your color choices: ");
			fflush(stdin);
			scanf("%d", &number);
			userArray [i] = number;
		}

		numTimesViewed++;

		//compare 2 arrays
		for (i = 0; i < 4; i++)
		{//outer for
			for (j = 0; j < 4; j++)
			{
				if (arr[i] == userArray[j] && i==j)
				{
					blackPeg++;
				}
				else if (arr[i] == userArray[j])
				{
					whitePeg++;
				}
			}
		}//outer for

		printf("You got %d white pegs!", whitePeg);
		printf("\nYou got %d black pegs!", blackPeg);

		if(blackPeg == 4)
		{
			printf("\nCongrats You Won , it took you %d turn to win!!!", numTimesViewed);
			printf("\nPress any key to return to menu...");
			_getch();
		}	
	}

}

void mediumDifficulty()
{
	const int mediumModeNumber = 15;
	int i, j, number = 0, whitePeg = 0, blackPeg = 0;
	int numTimesViewed = 0;

	printf("\nYou've choosen Medium difficulty, good luck!\n\n");

	printf("Color List\n");
	printf("1 = Red\n");
	printf("2 = Blue\n");
	printf("3 = Green\n");
	printf("4 = Yellow\n");
	printf("5 = Violet\n");
	printf("6 = Orange\n");
	printf("7 = Purple\n");

	numGenMedium();

	while(blackPeg != 4 && numTimesViewed != mediumModeNumber)
	{
		whitePeg = 0;
		blackPeg = 0;

		//user input
		for (i = 0; i < 4; i++)
		{
			printf("\nEnter your color choices: ");
			fflush(stdin);
			scanf("%d", &number);
			userArray [i] = number;
		}

		numTimesViewed++;
		
		//compare 2 arrays
		for (i = 0; i < 4; i++)
		{//outer for
			if (arr[i] == userArray[i])
			{
				blackPeg++;
				continue;
			}
			for (j = 0; j < 4; j++)
			{
				if (arr[i] == userArray[j] && arr[i] != userArray[i])
				{
					whitePeg++;
					break;
				}
			}
		}//outer for

		printf("You got %d white pegs!", whitePeg);
		printf("\nYou got %d black pegs!", blackPeg);

		if(blackPeg == 4)
		{
			printf("\nCongrats You Won , it took you %d turn to win!!!", numTimesViewed);
			printf("\nPress any key to return to menu...");
			_getch();
		}
		else if(numTimesViewed == mediumModeNumber)
		{
			printf("\nUps!!! You ran out of tries\nPress any key to return to menu: ");
			_getch();
		}
		
	}
	
}

void hardDifficulty()
{
	const int HardModeNumber = 10;
	int i, j, number = 0, whitePeg = 0, blackPeg = 0;
	int numTimesViewed = 0;

	printf("\nYou've choosen Hard difficulty, good luck!\n\n");

	printf("Color List\n");
	printf("0 = Blank\n");
	printf("1 = Red\n");
	printf("2 = Blue\n");
	printf("3 = Green\n");
	printf("4 = Yellow\n");
	printf("5 = Violet\n");
	printf("6 = Orange\n");
	printf("7 = Purple\n");

	numGenHard();

	while(blackPeg != 4 && numTimesViewed != HardModeNumber)
	{
		whitePeg = 0;
		blackPeg = 0;

		//user input
		for (i = 0; i < 4; i++)
		{
			printf("\nEnter your color choices: ");
			fflush(stdin);
			scanf("%d", &number);
			userArray [i] = number;
		}

		numTimesViewed++;

		//compare 2 arrays
		for (i = 0; i < 4; i++)
		{//outer for
			if (arr[i] == userArray[i])
			{
				blackPeg++;
				continue;
			}
			for (j = 0; j < 4; j++)
			{
				if (arr[i] == userArray[j] && arr[i] != userArray[i])
				{
					whitePeg++;
					break;
				}
			}
		}//outer for

		printf("You got %d white pegs!", whitePeg);
		printf("\nYou got %d black pegs!", blackPeg);

		if(blackPeg == 4)
		{
			printf("\nCongrats You Won , it took you %d turn to win!!!", numTimesViewed);
			printf("\nPress any key to return to menu...");
			_getch();
		}
		else if(numTimesViewed == HardModeNumber)
		{
			printf("\nUps!!! You ran out of tries\nPress any key to return to menu: ");
			_getch();
		}
		
	}
	
}