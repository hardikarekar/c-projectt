#include <stdio.h>
void menu (void)
{
	char ch;
	printf("Check spelling\n");
	printf("Correct spelling error\n");
	printf("Display spelling error\n");
	printf("Strike any other key to skip\n");
	printf("   Enter your choice\n");
	
	ch = getchar();
	
	switch (ch){
		case '1':
			check_spelling();
				break;
		case '2':
			correct_errors();
				break;
		case '3':
			display_errors();
				break;
			default;
				printf("No option selected");
		}
}