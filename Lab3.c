#include <stdio.h>
void menu_choices();
void main()
{
	//Menu Choices in the following
	char choice;
	char character;
	char number;
	char type;
	int rows;
	int boolean = 0; //True
	do{
	menu_choices();
	scanf("%c", &choice);
	switch(choice)
	{
		case 'C':
		case 'c':
			printf("Enter your character\t\t");
			scanf(" %c",&character);
			break;
			
		case 'N':
		case 'n':
			printf("Enter your number\t\t");
			scanf(" %c",&number);
			break;
		case '1':
			printf("Dis shit going up");
			int i,j;
			for(i=1;i<=number;++i)
			{
				for(j=1;j<=i;++j)
				{
					printf("%c ",character);
				}
				printf("\n");
			}
			break;
		case 'Q':
			boolean = 1;
	}
	}while(choice!= 'Q');
		

}

void menu_choices()
{
	printf("Menu choice \t\t\t\t\t Valid Choices\nEnter/Change Character\t\t\t\t 'C' or 'c'\n");
	printf("Enter/Change Number \t\t\t\t 'N' or 'n'\n");
	printf("Print Triangle Type 1 (Left Justified) \t\t '1'\n");
	printf("Print Triangle Type 2 (Right Justified) \t '2'\n");
	printf("Quit program \t\t\t\t\t 'Q' or 'q'\n\nInput your choice\t\t");
}
