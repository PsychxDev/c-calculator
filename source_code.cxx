#include <stdio.h>

void sep()
{ 
	printf("--------------------------\n");
}

int main()
{
	while (1)
	{
		int input;
		int fnum;
		int snum;

		printf("====== Calculator ======\n");
		printf("1. Add \n2. Subtract \n3. Multipy \n4. Division \n5. Quit\n");
		sep();
		printf("Choose from menu: \n=> ");
		scanf("%d", &input);

		if (input == 1)
		{
			sep();
			printf("Enter the first number: ");
			scanf("%d", &fnum);
			printf("Enter the second number: ");
			scanf("%d", &snum);
			sep();
			printf("Total: %d\n", fnum + snum);
		}

		else if (input == 2)
		{
			sep();
			printf("Enter the first number: ");
			scanf("%d", &fnum);
			printf("Enter the second number: ");
			scanf("%d", &snum);
			sep();
			printf("Total: %d\n", fnum - snum);
		}

		else if (input == 3)
		{
			sep();
			printf("Enter the first number: ");
			scanf("%d", &fnum);
			printf("Enter the second number: ");
			scanf("%d", &snum);
			sep();
			printf("Total: %d\n", fnum * snum);
		}

		else if (input == 4)
		{
			sep();
			printf("Enter the first number: ");
			scanf("%d", &fnum);
			printf("Enter the second number: ");
			scanf("%d", &snum);

			if (snum == 0)
			{
				sep();
				printf("Can't divide by zero\n");
			}
			else
			{
				sep();
				printf("Total: %d\n", fnum / snum);
			}
		}

		else if (input == 5)
		{
			sep();
			printf("Session Ended");
			return 0;
		}

		else if (input > 5 || input < 1)
		{
			sep();
			printf("Choose Only From The Menu Please\n");
		}
	}

	return 0;
}