#include<stdio.h>
void post(char matrix[9][9], int level)
{
	system("cls");
	printf("\n\t\t\t      <-- SUDOKO -->");
	printf("\n\n\t\t\t\tL a v e l %d", level);
	printf("\n\n\n\t    1     2     3      4     5     6      7     8     9");
	printf("\n\t...........................................................\n");
	printf("\t||     |     |     ||     |     |     |||   ||     |     ||\n");
	printf("     1  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||\n", matrix[0][0], matrix[0][1], matrix[0][2], matrix[0][3], matrix[0][4], matrix[0][5], matrix[0][6], matrix[0][7], matrix[0][8]);
	printf("\t||     |     |     ||     |     |     |||   ||     |     ||\n");
	printf("\t-----------------------------------------------------------\n");
	printf("\t|||   ||     ||   |||     ||   ||     |||   |||   ||     ||\n");
	printf("     2  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||\n", matrix[1][0], matrix[1][1], matrix[1][2], matrix[1][3], matrix[1][4], matrix[1][5], matrix[1][6], matrix[1][7], matrix[1][8]);
	printf("\t|||   ||     ||   |||     ||   ||     |||   |||   ||     ||\n");
	printf("\t-----------------------------------------------------------\n");
	printf("\t|||   ||     |     |||   ||     |     ||     |     |     ||\n");
	printf("     3  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||\n", matrix[2][0], matrix[2][1], matrix[2][2], matrix[2][3], matrix[2][4], matrix[2][5], matrix[2][6], matrix[2][7], matrix[2][8]);
	printf("\t|||   ||     |     |||   ||     |     ||     |     |     ||\n");
	printf("\t...........................................................\n");
	printf("\t...........................................................\n");
	printf("\t||     |     |     ||     |     |     ||     ||   |||   |||\n");
	printf("     4  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||\n", matrix[3][0], matrix[3][1], matrix[3][2], matrix[3][3], matrix[3][4], matrix[3][5], matrix[3][6], matrix[3][7], matrix[3][8]);
	printf("\t||     |     |     ||     |     |     ||     ||   |||   |||\n");
	printf("\t-----------------------------------------------------------\n");
	printf("\t||     ||   ||     |||   ||     |     |||   |||   |||   |||\n");
	printf("     5  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||\n", matrix[4][0], matrix[4][1], matrix[4][2], matrix[4][3], matrix[4][4], matrix[4][5], matrix[4][6], matrix[4][7], matrix[4][8]);
	printf("\t||     ||   ||     |||   ||     |     |||   |||   |||   |||\n");
	printf("\t-----------------------------------------------------------\n");
	printf("\t|||   |||   ||     |||   ||     ||   |||     ||   ||     ||\n");
	printf("     6  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||\n", matrix[5][0], matrix[5][1], matrix[5][2], matrix[5][3], matrix[5][4], matrix[5][5], matrix[5][6], matrix[5][7], matrix[5][8]);
	printf("\t|||   |||   ||     |||   ||     ||   |||     ||   ||     ||\n");
	printf("\t...........................................................\n");
	printf("\t...........................................................\n");
	printf("\t|||   ||     ||   ||||   ||     |     ||     |     |     ||\n");
	printf("     7  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||\n", matrix[6][0], matrix[6][1], matrix[6][2], matrix[6][3], matrix[6][4], matrix[6][5], matrix[6][6], matrix[6][7], matrix[6][8]);
	printf("\t|||   ||     ||   ||||   ||     |     ||     |     |     ||\n");
	printf("\t-----------------------------------------------------------\n");
	printf("\t|||   |||   ||     ||     |     |     |||   |||   ||     ||\n");
	printf("     8  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||\n", matrix[7][0], matrix[7][1], matrix[7][2], matrix[7][3], matrix[7][4], matrix[7][5], matrix[7][6], matrix[7][7], matrix[7][8]);
	printf("\t|||   |||   ||     ||     |     |     |||   |||   ||     ||\n");
	printf("\t-----------------------------------------------------------\n");
	printf("\t||     ||   |||   ||||   |||   ||     |||   ||     |     ||\n");
	printf("     9  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||  %c  |  %c  |  %c  ||\n", matrix[8][0], matrix[8][1], matrix[8][2], matrix[8][3], matrix[8][4], matrix[8][5], matrix[8][6], matrix[8][7], matrix[8][8]);
	printf("\t||     ||   |||   ||||   |||   ||     |||   ||     |     ||\n");
	printf("\t...........................................................\n");
}

