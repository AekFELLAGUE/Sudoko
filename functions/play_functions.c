#include<stdio.h>
void play(char matrix[9][9])
{
	float p_h, p_v;
	int pos_h, pos_v;
	int rep;
	char number;
	do
	{
		rep = 1;
		printf("\n\t\t\t\t Position:\n");
		do
		{
			printf("\n Vertically 1---->9: ");
			while(!scanf("%f", &p_h))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_h = p_h;
		}while(pos_h < 1 || pos_h >9);
		do
		{
			printf("\n Horizontly 1---->9: ");
			while(!scanf("%f", &p_v))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_v = p_v;
		}while(pos_v < 1 || pos_v >9);
		if((pos_h-1 == 0 && pos_v-1 == 6)||(pos_h-1 == 1 && pos_v-1 == 0)||(pos_h-1 == 1 && pos_v-1 == 2)||(pos_h-1 == 1 && pos_v-1 == 4)||(pos_h-1 == 1 && pos_v-1 == 6))
		{
			printf("Can't play that (Static)\n");
			rep = 0;
		}
		else
		{
			if((pos_h-1 == 1 && pos_v-1 == 7)||(pos_h-1 == 2 && pos_v-1 == 0)||(pos_h-1 == 2 && pos_v-1 == 3)||(pos_h-1 == 3 && pos_v-1 == 7)||(pos_h-1 == 3 && pos_v-1 == 8))
			{
				printf("Can't play that (Static)\n");
				rep = 0;
			}
			else
			{
				if((pos_h-1 == 4 && pos_v-1 == 1)||(pos_h-1 == 4 && pos_v-1 == 3)||(pos_h-1 == 4 && pos_v-1 == 6)||(pos_h-1 == 4 && pos_v-1 == 7)||(pos_h-1 == 4 && pos_v-1 == 8))
				{
					printf("Can't play that (Static)\n");
					rep = 0;
				}
				else
				{
					if((pos_h-1 == 5 && pos_v-1 == 0)||(pos_h-1 == 5 && pos_v-1 == 1)||(pos_h-1 == 5 && pos_v-1 == 3)||(pos_h-1 == 5 && pos_v-1 == 5)||(pos_h-1 == 8 && pos_v-1 == 2))
					{
						printf("Can't play that (Static)\n");
						rep = 0;
					}
					else
					{
						if((pos_h-1 == 8 && pos_v-1 == 3)||(pos_h-1 == 8 && pos_v-1 == 4)||(pos_h-1 == 8 && pos_v-1 == 6)||(pos_h-1 == 8 && pos_v-1 == 1)||(pos_h-1 == 5 && pos_v-1 == 7))
						{
							printf("Can't play that (Static)\n");
							rep = 0;
						}
						else
						{
							if((pos_h-1 == 6 && pos_v-1 == 0)||(pos_h-1 == 6 && pos_v-1 == 2)||(pos_h-1 == 6 && pos_v-1 == 3)||(pos_h-1 == 7 && pos_v-1 == 0)||(pos_h-1 == 7 && pos_v-1 == 1))
							{
								printf("Can't play that (Static)\n");
								rep = 0;
							}
							else
							{
								if((pos_h-1 == 7 && pos_v-1 == 6)||(pos_h-1 == 7 && pos_v-1 == 7))
								{
									printf("Can't play that (Static)\n");
									rep = 0;
								}
							}
						}
					}
				}
			}
		}
	}while(rep == 0);
	do
	{
		rewind(stdin);
		printf("\n The number: ");
		scanf("%c", &number);
		rewind(stdin);
	}while(number != '9' && number != '8' && number != '7' && number != '6' && number != '5' && number != '4' && number != '3' && number != '2' && number != '1');
	matrix[pos_h-1][pos_v-1] = number;
}
/*  Static Numbers:
matrix[0][6] = '5'  matrix[1][0] = '3'  matrix[1][2] = '2'  matrix[1][4] = '7'  matrix[1][6] = '9'  matrix[1][7] = '1'  matrix[2][0] = '6'  matrix[2][3] = '9' 
matrix[3][7] = '2'  matrix[3][8] = '6'  matrix[4][1] = '2'  matrix[4][3] = '3'  matrix[4][6] = '1'  matrix[4][7] = '5'  matrix[4][8] = '9'  matrix[5][0] = '7' 
matrix[5][1] = '9'  matrix[5][3] = '6'  matrix[5][5] = '5'  matrix[8][2] = '8'  matrix[8][3] = '4'  matrix[8][4] = '5'  matrix[8][6] = '6'  matrix[8][1] = '3' 
matrix[5][7] = '8'  matrix[6][0] = '1'  matrix[6][2] = '9'  matrix[6][3] = '7'  matrix[7][0] = '4'  matrix[7][1] = '5'  matrix[7][6] = '2'  matrix[7][7] = '3' 
*/
//    ----------------------------------------------------------------------------------------------------------------------------------    //


void play2(char matrix[9][9])
{
	float p_h, p_v;
	int pos_h, pos_v;
	int rep;
	char number;
	do
	{
		rep = 1;
		printf("\n\t\t\t\t Position:\n");
		do
		{
			printf("\n Vertically 1---->9: ");
			while(!scanf("%f", &p_h))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_h = p_h;
		}while(pos_h < 1 || pos_h >9);
		do
		{
			printf("\n Horizontly 1---->9: ");
			while(!scanf("%f", &p_v))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_v = p_v;
		}while(pos_v < 1 || pos_v >9);
		if((pos_h-1 == 0 && pos_v-1 == 1)||(pos_h-1 == 0 && pos_v-1 == 7)||(pos_h-1 == 1 && pos_v-1 == 1)||(pos_h-1 == 1 && pos_v-1 == 2)||(pos_h-1 == 1 && pos_v-1 == 6))
		{
			printf("Can't play that (Static)\n");
			rep = 0;
		}
		else
		{
			if((pos_h-1 == 1 && pos_v-1 == 7)||(pos_h-1 == 2 && pos_v-1 == 0)||(pos_h-1 == 2 && pos_v-1 == 2)||(pos_h-1 == 2 && pos_v-1 == 4)||(pos_h-1 == 2 && pos_v-1 == 6))
			{
				printf("Can't play that (Static)\n");
				rep = 0;
			}
			else
			{
				if((pos_h-1 == 2 && pos_v-1 == 8)||(pos_h-1 == 3 && pos_v-1 == 0)||(pos_h-1 == 3 && pos_v-1 == 3)||(pos_h-1 == 3 && pos_v-1 == 4)||(pos_h-1 == 3 && pos_v-1 == 5))
				{
					printf("Can't play that (Static)\n");
					rep = 0;
				}
				else
				{
					if((pos_h-1 == 3 && pos_v-1 == 8)||(pos_h-1 == 4 && pos_v-1 == 0)||(pos_h-1 == 4 && pos_v-1 == 3)||(pos_h-1 == 4 && pos_v-1 == 5)||(pos_h-1 == 4 && pos_v-1 == 8))
					{
						printf("Can't play that (Static)\n");
						rep = 0;
					}
					else
					{
						if((pos_h-1 == 5 && pos_v-1 == 1)||(pos_h-1 == 5 && pos_v-1 == 3)||(pos_h-1 == 5 && pos_v-1 == 5)||(pos_h-1 == 5 && pos_v-1 == 7)||(pos_h-1 == 6 && pos_v-1 == 2))
						{
							printf("Can't play that (Static)\n");
							rep = 0;
						}
						else
						{
							if((pos_h-1 == 6 && pos_v-1 == 6)||(pos_h-1 == 7 && pos_v-1 == 1)||(pos_h-1 == 7 && pos_v-1 == 2)||(pos_h-1 == 7 && pos_v-1 == 4)||(pos_h-1 == 7 && pos_v-1 == 6))
							{
								printf("Can't play that (Static)\n");
								rep = 0;
							}
							else
							{
								if((pos_h-1 == 7 && pos_v-1 == 7)||(pos_h-1 == 8 && pos_v-1 == 1)||(pos_h-1 == 8 && pos_v-1 == 4)||(pos_h-1 == 8 && pos_v-1 == 7))
								{
									printf("Can't play that (Static)\n");
									rep = 0;
								}
							}
						}
					}
				}
			}
		}
	}while(rep == 0);
	do
	{
		rewind(stdin);
		printf("\n The number: ");
		scanf("%c", &number);
		rewind(stdin);
	}while(number != '9' && number != '8' && number != '7' && number != '6' && number != '5' && number != '4' && number != '3' && number != '2' && number != '1');
	matrix[pos_h-1][pos_v-1] = number;
}

//  -------------------------------------------------------------------------------------------------------------------------------------   //

void play3(char matrix[9][9])
{
	float p_h, p_v;
	int pos_h, pos_v;
	int rep;
	char number;
	do
	{
		rep = 1;
		printf("\n\t\t\t\t Position:\n");
		do
		{
			printf("\n Vertically 1---->9: ");
			while(!scanf("%f", &p_h))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_h = p_h;
		}while(pos_h < 1 || pos_h >9);
		do
		{
			printf("\n Horizontly 1---->9: ");
			while(!scanf("%f", &p_v))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_v = p_v;
		}while(pos_v < 1 || pos_v >9);
		if((pos_h-1 == 0 && pos_v-1 == 2)||(pos_h-1 == 0 && pos_v-1 == 6)||(pos_h-1 == 1 && pos_v-1 == 1)||(pos_h-1 == 1 && pos_v-1 == 2)||(pos_h-1 == 1 && pos_v-1 == 5))
		{
			printf("Can't play that (Static)\n");
			rep = 0;
		}
		else
		{
			if((pos_h-1 == 1 && pos_v-1 == 7)||(pos_h-1 == 2 && pos_v-1 == 3)||(pos_h-1 == 2 && pos_v-1 == 5)||(pos_h-1 == 2 && pos_v-1 == 7)||(pos_h-1 == 2 && pos_v-1 == 8))
			{
				printf("Can't play that (Static)\n");
				rep = 0;
			}
			else
			{
				if((pos_h-1 == 3 && pos_v-1 == 0)||(pos_h-1 == 3 && pos_v-1 == 3)||(pos_h-1 == 3 && pos_v-1 == 8)||(pos_h-1 == 4 && pos_v-1 == 0)||(pos_h-1 == 4 && pos_v-1 == 1))
				{
					printf("Can't play that (Static)\n");
					rep = 0;
				}
				else
				{
					if((pos_h-1 == 4 && pos_v-1 == 3)||(pos_h-1 == 4 && pos_v-1 == 4)||(pos_h-1 == 4 && pos_v-1 == 5)||(pos_h-1 == 4 && pos_v-1 == 7)||(pos_h-1 == 4 && pos_v-1 == 8))
					{
						printf("Can't play that (Static)\n");
						rep = 0;
					}
					else
					{
						if((pos_h-1 == 5 && pos_v-1 == 0)||(pos_h-1 == 5 && pos_v-1 == 5)||(pos_h-1 == 5 && pos_v-1 == 8)||(pos_h-1 == 6 && pos_v-1 == 0)||(pos_h-1 == 6 && pos_v-1 == 1))
						{
							printf("Can't play that (Static)\n");
							rep = 0;
						}
						else
						{
							if((pos_h-1 == 6 && pos_v-1 == 3)||(pos_h-1 == 6 && pos_v-1 == 5)||(pos_h-1 == 7 && pos_v-1 == 1)||(pos_h-1 == 7 && pos_v-1 == 3)||(pos_h-1 == 7 && pos_v-1 == 6))
							{
								printf("Can't play that (Static)\n");
								rep = 0;
							}
							else
							{
								if((pos_h-1 == 7 && pos_v-1 == 7)||(pos_h-1 == 8 && pos_v-1 == 2)||(pos_h-1 == 8 && pos_v-1 == 6))
								{
									printf("Can't play that (Static)\n");
									rep = 0;
								}
							}
						}
					}
				}
			}
		}
	}while(rep == 0);
	do
	{
		rewind(stdin);
		printf("\n The number: ");
		scanf("%c", &number);
		rewind(stdin);
	}while(number != '9' && number != '8' && number != '7' && number != '6' && number != '5' && number != '4' && number != '3' && number != '2' && number != '1');
	matrix[pos_h-1][pos_v-1] = number;
}

//  -------------------------------------------------------------------------------------------------------------------------------------   //

void play4(char matrix[9][9])
{
	float p_h, p_v;
	int pos_h, pos_v;
	int rep;
	char number;
	do
	{
		rep = 1;
		printf("\n\t\t\t\t Position:\n");
		do
		{
			printf("\n Vertically 1---->9: ");
			while(!scanf("%f", &p_h))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_h = p_h;
		}while(pos_h < 1 || pos_h >9);
		do
		{
			printf("\n Horizontly 1---->9: ");
			while(!scanf("%f", &p_v))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_v = p_v;
		}while(pos_v < 1 || pos_v >9);
		if((pos_h-1 == 0 && pos_v-1 == 3)||(pos_h-1 == 0 && pos_v-1 == 5)||(pos_h-1 == 1 && pos_v-1 == 2)||(pos_h-1 == 1 && pos_v-1 == 3)||(pos_h-1 == 1 && pos_v-1 == 5))
		{
			printf("Can't play that (Static)\n");
			rep = 0;
		}
		else
		{
			if((pos_h-1 == 1 && pos_v-1 == 6)||(pos_h-1 == 2 && pos_v-1 == 0)||(pos_h-1 == 2 && pos_v-1 == 2)||(pos_h-1 == 2 && pos_v-1 == 6)||(pos_h-1 == 2 && pos_v-1 == 8))
			{
				printf("Can't play that (Static)\n");
				rep = 0;
			}
			else
			{
				if((pos_h-1 == 3 && pos_v-1 == 1)||(pos_h-1 == 3 && pos_v-1 == 3)||(pos_h-1 == 3 && pos_v-1 == 5)||(pos_h-1 == 3 && pos_v-1 == 7)||(pos_h-1 == 4 && pos_v-1 == 0))
				{
					printf("Can't play that (Static)\n");
					rep = 0;
				}
				else
				{
					if((pos_h-1 == 4 && pos_v-1 == 4)||(pos_h-1 == 4 && pos_v-1 == 8)||(pos_h-1 == 5 && pos_v-1 == 0)||(pos_h-1 == 5 && pos_v-1 == 1)||(pos_h-1 == 5 && pos_v-1 == 4))
					{
						printf("Can't play that (Static)\n");
						rep = 0;
					}
					else
					{
						if((pos_h-1 == 5 && pos_v-1 == 7)||(pos_h-1 == 5 && pos_v-1 == 8)||(pos_h-1 == 6 && pos_v-1 == 0)||(pos_h-1 == 6 && pos_v-1 == 3)||(pos_h-1 == 6 && pos_v-1 == 5))
						{
							printf("Can't play that (Static)\n");
							rep = 0;
						}
						else
						{
							if((pos_h-1 == 6 && pos_v-1 == 8)||(pos_h-1 == 7 && pos_v-1 == 1)||(pos_h-1 == 7 && pos_v-1 == 3)||(pos_h-1 == 7 && pos_v-1 == 5)||(pos_h-1 == 7 && pos_v-1 == 7))
							{
								printf("Can't play that (Static)\n");
								rep = 0;
							}
							else
							{
								if((pos_h-1 == 8 && pos_v-1 == 2)||(pos_h-1 == 8 && pos_v-1 == 3)||(pos_h-1 == 8 && pos_v-1 == 5)||(pos_h-1 == 8 && pos_v-1 == 6))
								{
									printf("Can't play that (Static)\n");
									rep = 0;
								}
							}
						}
					}
				}
			}
		}
	}while(rep == 0);
	do
	{
		rewind(stdin);
		printf("\n The number: ");
		scanf("%c", &number);
		rewind(stdin);
	}while(number != '9' && number != '8' && number != '7' && number != '6' && number != '5' && number != '4' && number != '3' && number != '2' && number != '1');
	matrix[pos_h-1][pos_v-1] = number;
}

//  -------------------------------------------------------------------------------------------------------------------------------------   //

void play5(char matrix[9][9])
{
	float p_h, p_v;
	int pos_h, pos_v;
	int rep;
	char number;
	do
	{
		rep = 1;
		printf("\n\t\t\t\t Position:\n");
		do
		{
			printf("\n Vertically 1---->9: ");
			while(!scanf("%f", &p_h))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_h = p_h;
		}while(pos_h < 1 || pos_h >9);
		do
		{
			printf("\n Horizontly 1---->9: ");
			while(!scanf("%f", &p_v))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_v = p_v;
		}while(pos_v < 1 || pos_v >9);
		if((pos_h-1 == 0 && pos_v-1 == 1)||(pos_h-1 == 0 && pos_v-1 == 2)||(pos_h-1 == 0 && pos_v-1 == 3)||(pos_h-1 == 0 && pos_v-1 == 6)||(pos_h-1 == 1 && pos_v-1 == 0))
		{
			printf("Can't play that (Static)\n");
			rep = 0;
		}
		else
		{
			if((pos_h-1 == 1 && pos_v-1 == 6)||(pos_h-1 == 1 && pos_v-1 == 7)||(pos_h-1 == 1 && pos_v-1 == 8)||(pos_h-1 == 2 && pos_v-1 == 0)||(pos_h-1 == 2 && pos_v-1 == 1))
			{
				printf("Can't play that (Static)\n");
				rep = 0;
			}
			else
			{
				if((pos_h-1 == 2 && pos_v-1 == 3)||(pos_h-1 == 2 && pos_v-1 == 4)||(pos_h-1 == 2 && pos_v-1 == 6)||(pos_h-1 == 3 && pos_v-1 == 3)||(pos_h-1 == 3 && pos_v-1 == 7))
				{
					printf("Can't play that (Static)\n");
					rep = 0;
				}
				else
				{
					if((pos_h-1 == 3 && pos_v-1 == 8)||(pos_h-1 == 4 && pos_v-1 == 3)||(pos_h-1 == 4 && pos_v-1 == 5)||(pos_h-1 == 5 && pos_v-1 == 0)||(pos_h-1 == 5 && pos_v-1 == 1))
					{
						printf("Can't play that (Static)\n");
						rep = 0;
					}
					else
					{
						if((pos_h-1 == 5 && pos_v-1 == 5)||(pos_h-1 == 6 && pos_v-1 == 2)||(pos_h-1 == 6 && pos_v-1 == 4)||(pos_h-1 == 6 && pos_v-1 == 5)||(pos_h-1 == 6 && pos_v-1 == 7))
						{
							printf("Can't play that (Static)\n");
							rep = 0;
						}
						else
						{
							if((pos_h-1 == 6 && pos_v-1 == 8)||(pos_h-1 == 7 && pos_v-1 == 0)||(pos_h-1 == 7 && pos_v-1 == 1)||(pos_h-1 == 7 && pos_v-1 == 2)||(pos_h-1 == 7 && pos_v-1 == 8))
							{
								printf("Can't play that (Static)\n");
								rep = 0;
							}
							else
							{
								if((pos_h-1 == 8 && pos_v-1 == 2)||(pos_h-1 == 8 && pos_v-1 == 5)||(pos_h-1 == 8 && pos_v-1 == 6)||(pos_h-1 == 8 && pos_v-1 == 7))
								{
									printf("Can't play that (Static)\n");
									rep = 0;
								}
							}
						}
					}
				}
			}
		}
	}while(rep == 0);
	do
	{
		rewind(stdin);
		printf("\n The number: ");
		scanf("%c", &number);
		rewind(stdin);
	}while(number != '9' && number != '8' && number != '7' && number != '6' && number != '5' && number != '4' && number != '3' && number != '2' && number != '1');
	matrix[pos_h-1][pos_v-1] = number;
}

//  -------------------------------------------------------------------------------------------------------------------------------------  //

void play6(char matrix[9][9])
{
	float p_h, p_v;
	int pos_h, pos_v;
	int rep;
	char number;
	do
	{
		rep = 1;
		printf("\n\t\t\t\t Position:\n");
		do
		{
			printf("\n Vertically 1---->9: ");
			while(!scanf("%f", &p_h))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_h = p_h;
		}while(pos_h < 1 || pos_h >9);
		do
		{
			printf("\n Horizontly 1---->9: ");
			while(!scanf("%f", &p_v))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_v = p_v;
		}while(pos_v < 1 || pos_v >9);
		if((pos_h-1 == 0 && pos_v-1 == 2)||(pos_h-1 == 0 && pos_v-1 == 5)||(pos_h-1 == 0 && pos_v-1 == 7)||(pos_h-1 == 1 && pos_v-1 == 1)||(pos_h-1 == 1 && pos_v-1 == 2))
		{
			printf("Can't play that (Static)\n");
			rep = 0;
		}
		else
		{
			if((pos_h-1 == 1 && pos_v-1 == 5)||(pos_h-1 == 1 && pos_v-1 == 6)||(pos_h-1 == 2 && pos_v-1 == 0)||(pos_h-1 == 2 && pos_v-1 == 3)||(pos_h-1 == 2 && pos_v-1 == 4))
			{
				printf("Can't play that (Static)\n");
				rep = 0;
			}
			else
			{
				if((pos_h-1 == 2 && pos_v-1 == 8)||(pos_h-1 == 3 && pos_v-1 == 0)||(pos_h-1 == 3 && pos_v-1 == 1)||(pos_h-1 == 3 && pos_v-1 == 3)||(pos_h-1 == 3 && pos_v-1 == 5))
				{
					printf("Can't play that (Static)\n");
					rep = 0;
				}
				else
				{
					if((pos_h-1 == 3 && pos_v-1 == 7)||(pos_h-1 == 3 && pos_v-1 == 8)||(pos_h-1 == 5 && pos_v-1 == 0)||(pos_h-1 == 5 && pos_v-1 == 1)||(pos_h-1 == 5 && pos_v-1 == 3))
					{
						printf("Can't play that (Static)\n");
						rep = 0;
					}
					else
					{
						if((pos_h-1 == 5 && pos_v-1 == 5)||(pos_h-1 == 5 && pos_v-1 == 7)||(pos_h-1 == 5 && pos_v-1 == 8)||(pos_h-1 == 6 && pos_v-1 == 0)||(pos_h-1 == 6 && pos_v-1 == 3))
						{
							printf("Can't play that (Static)\n");
							rep = 0;
						}
						else
						{
							if((pos_h-1 == 6 && pos_v-1 == 4)||(pos_h-1 == 6 && pos_v-1 == 8)||(pos_h-1 == 7 && pos_v-1 == 1)||(pos_h-1 == 7 && pos_v-1 == 2)||(pos_h-1 == 7 && pos_v-1 == 5))
							{
								printf("Can't play that (Static)\n");
								rep = 0;
							}
							else
							{
								if((pos_h-1 == 7 && pos_v-1 == 6)||(pos_h-1 == 8 && pos_v-1 == 2)||(pos_h-1 == 8 && pos_v-1 == 5)||(pos_h-1 == 8 && pos_v-1 == 7))
								{
									printf("Can't play that (Static)\n");
									rep = 0;
								}
							}
						}
					}
				}
			}
		}
	}while(rep == 0);
	do
	{
		rewind(stdin);
		printf("\n The number: ");
		scanf("%c", &number);
		rewind(stdin);
	}while(number != '9' && number != '8' && number != '7' && number != '6' && number != '5' && number != '4' && number != '3' && number != '2' && number != '1');
	matrix[pos_h-1][pos_v-1] = number;
}

//  -------------------------------------------------------------------------------------------------------------------------------------  //

void play7(char matrix[9][9])
{
	float p_h, p_v;
	int pos_h, pos_v;
	int rep;
	char number;
	do
	{
		rep = 1;
		printf("\n\t\t\t\t Position:\n");
		do
		{
			printf("\n Vertically 1---->9: ");
			while(!scanf("%f", &p_h))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_h = p_h;
		}while(pos_h < 1 || pos_h >9);
		do
		{
			printf("\n Horizontly 1---->9: ");
			while(!scanf("%f", &p_v))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_v = p_v;
		}while(pos_v < 1 || pos_v >9);
		if((pos_h-1 == 0 && pos_v-1 == 1)||(pos_h-1 == 0 && pos_v-1 == 7)||(pos_h-1 == 1 && pos_v-1 == 2)||(pos_h-1 == 1 && pos_v-1 == 6)||(pos_h-1 == 2 && pos_v-1 == 0))
		{
			printf("Can't play that (Static)\n");
			rep = 0;
		}
		else
		{
			if((pos_h-1 == 2 && pos_v-1 == 3)||(pos_h-1 == 2 && pos_v-1 == 5)||(pos_h-1 == 2 && pos_v-1 == 8)||(pos_h-1 == 3 && pos_v-1 == 1)||(pos_h-1 == 3 && pos_v-1 == 3))
			{
				printf("Can't play that (Static)\n");
				rep = 0;
			}
			else
			{
				if((pos_h-1 == 3 && pos_v-1 == 4)||(pos_h-1 == 3 && pos_v-1 == 5)||(pos_h-1 == 3 && pos_v-1 == 7)||(pos_h-1 == 4 && pos_v-1 == 2)||(pos_h-1 == 4 && pos_v-1 == 3))
				{
					printf("Can't play that (Static)\n");
					rep = 0;
				}
				else
				{
					if((pos_h-1 == 4 && pos_v-1 == 5)||(pos_h-1 == 4 && pos_v-1 == 6)||(pos_h-1 == 5 && pos_v-1 == 3)||(pos_h-1 == 5 && pos_v-1 == 5)||(pos_h-1 == 6 && pos_v-1 == 1))
					{
						printf("Can't play that (Static)\n");
						rep = 0;
					}
					else
					{
						if((pos_h-1 == 6 && pos_v-1 == 2)||(pos_h-1 == 6 && pos_v-1 == 4)||(pos_h-1 == 6 && pos_v-1 == 6)||(pos_h-1 == 6 && pos_v-1 == 7)||(pos_h-1 == 7 && pos_v-1 == 1))
						{
							printf("Can't play that (Static)\n");
							rep = 0;
						}
						else
						{
							if((pos_h-1 == 7 && pos_v-1 == 2)||(pos_h-1 == 7 && pos_v-1 == 4)||(pos_h-1 == 7 && pos_v-1 == 6)||(pos_h-1 == 7 && pos_v-1 == 7)||(pos_h-1 == 8 && pos_v-1 == 0))
							{
								printf("Can't play that (Static)\n");
								rep = 0;
							}
							else
							{
								if((pos_h-1 == 8 && pos_v-1 == 3)||(pos_h-1 == 8 && pos_v-1 == 4)||(pos_h-1 == 8 && pos_v-1 == 5)||(pos_h-1 == 8 && pos_v-1 == 8))
								{
									printf("Can't play that (Static)\n");
									rep = 0;
								}
							}
						}
					}
				}
			}
		}
	}while(rep == 0);
	do
	{
		rewind(stdin);
		printf("\n The number: ");
		scanf("%c", &number);
		rewind(stdin);
	}while(number != '9' && number != '8' && number != '7' && number != '6' && number != '5' && number != '4' && number != '3' && number != '2' && number != '1');
	matrix[pos_h-1][pos_v-1] = number;
}

//  -------------------------------------------------------------------------------------------------------------------------------------  //

void play8(char matrix[9][9])
{
	float p_h, p_v;
	int pos_h, pos_v;
	int rep;
	char number;
	do
	{
		rep = 1;
		printf("\n\t\t\t\t Position:\n");
		do
		{
			printf("\n Vertically 1---->9: ");
			while(!scanf("%f", &p_h))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_h = p_h;
		}while(pos_h < 1 || pos_h >9);
		do
		{
			printf("\n Horizontly 1---->9: ");
			while(!scanf("%f", &p_v))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_v = p_v;
		}while(pos_v < 1 || pos_v >9);
		if((pos_h-1 == 0 && pos_v-1 == 1)||(pos_h-1 == 0 && pos_v-1 == 2)||(pos_h-1 == 0 && pos_v-1 == 6)||(pos_h-1 == 1 && pos_v-1 == 0)||(pos_h-1 == 1 && pos_v-1 == 2))
		{
			printf("Can't play that (Static)\n");
			rep = 0;
		}
		else
		{
			if((pos_h-1 == 1 && pos_v-1 == 3)||(pos_h-1 == 1 && pos_v-1 == 4)||(pos_h-1 == 1 && pos_v-1 == 6)||(pos_h-1 == 1 && pos_v-1 == 7)||(pos_h-1 == 2 && pos_v-1 == 1))
			{
				printf("Can't play that (Static)\n");
				rep = 0;
			}
			else
			{
				if((pos_h-1 == 2 && pos_v-1 == 4)||(pos_h-1 == 3 && pos_v-1 == 2)||(pos_h-1 == 3 && pos_v-1 == 7)||(pos_h-1 == 3 && pos_v-1 == 8)||(pos_h-1 == 4 && pos_v-1 == 0))
				{
					printf("Can't play that (Static)\n");
					rep = 0;
				}
				else
				{
					if((pos_h-1 == 4 && pos_v-1 == 3)||(pos_h-1 == 4 && pos_v-1 == 4)||(pos_h-1 == 4 && pos_v-1 == 5)||(pos_h-1 == 4 && pos_v-1 == 8)||(pos_h-1 == 5 && pos_v-1 == 0))
					{
						printf("Can't play that (Static)\n");
						rep = 0;
					}
					else
					{
						if((pos_h-1 == 5 && pos_v-1 == 1)||(pos_h-1 == 5 && pos_v-1 == 6)||(pos_h-1 == 6 && pos_v-1 == 4)||(pos_h-1 == 6 && pos_v-1 == 7)||(pos_h-1 == 7 && pos_v-1 == 1))
						{
							printf("Can't play that (Static)\n");
							rep = 0;
						}
						else
						{
							if((pos_h-1 == 7 && pos_v-1 == 2)||(pos_h-1 == 7 && pos_v-1 == 4)||(pos_h-1 == 7 && pos_v-1 == 5)||(pos_h-1 == 7 && pos_v-1 == 6)||(pos_h-1 == 7 && pos_v-1 == 8))
							{
								printf("Can't play that (Static)\n");
								rep = 0;
							}
							else
							{
								if((pos_h-1 == 8 && pos_v-1 == 2)||(pos_h-1 == 8 && pos_v-1 == 6)||(pos_h-1 == 8 && pos_v-1 == 7))
								{
									printf("Can't play that (Static)\n");
									rep = 0;
								}
							}
						}
					}
				}
			}
		}
	}while(rep == 0);
	do
	{
		rewind(stdin);
		printf("\n The number: ");
		scanf("%c", &number);
		rewind(stdin);
	}while(number != '9' && number != '8' && number != '7' && number != '6' && number != '5' && number != '4' && number != '3' && number != '2' && number != '1');
	matrix[pos_h-1][pos_v-1] = number;
}

//  -------------------------------------------------------------------------------------------------------------------------------------  //

void play9(char matrix[9][9])
{
	float p_h, p_v;
	int pos_h, pos_v;
	int rep;
	char number;
	do
	{
		rep = 1;
		printf("\n\t\t\t\t Position:\n");
		do
		{
			printf("\n Vertically 1---->9: ");
			while(!scanf("%f", &p_h))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_h = p_h;
		}while(pos_h < 1 || pos_h >9);
		do
		{
			printf("\n Horizontly 1---->9: ");
			while(!scanf("%f", &p_v))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_v = p_v;
		}while(pos_v < 1 || pos_v >9);
		if((pos_h-1 == 0 && pos_v-1 == 1)||(pos_h-1 == 0 && pos_v-1 == 2)||(pos_h-1 == 0 && pos_v-1 == 6)||(pos_h-1 == 1 && pos_v-1 == 1)||(pos_h-1 == 1 && pos_v-1 == 2))
		{
			printf("Can't play that (Static)\n");
			rep = 0;
		}
		else
		{
			if((pos_h-1 == 1 && pos_v-1 == 5)||(pos_h-1 == 1 && pos_v-1 == 6)||(pos_h-1 == 1 && pos_v-1 == 7)||(pos_h-1 == 2 && pos_v-1 == 0)||(pos_h-1 == 2 && pos_v-1 == 1))
			{
				printf("Can't play that (Static)\n");
				rep = 0;
			}
			else
			{
				if((pos_h-1 == 3 && pos_v-1 == 2)||(pos_h-1 == 3 && pos_v-1 == 3)||(pos_h-1 == 3 && pos_v-1 == 5)||(pos_h-1 == 3 && pos_v-1 == 6)||(pos_h-1 == 3 && pos_v-1 == 8))
				{
					printf("Can't play that (Static)\n");
					rep = 0;
				}
				else
				{
					if((pos_h-1 == 4 && pos_v-1 == 1)||(pos_h-1 == 4 && pos_v-1 == 4)||(pos_h-1 == 4 && pos_v-1 == 7)||(pos_h-1 == 5 && pos_v-1 == 2)||(pos_h-1 == 5 && pos_v-1 == 3))
					{
						printf("Can't play that (Static)\n");
						rep = 0;
					}
					else
					{
						if((pos_h-1 == 5 && pos_v-1 == 5)||(pos_h-1 == 5 && pos_v-1 == 6)||(pos_h-1 == 5 && pos_v-1 == 8)||(pos_h-1 == 6 && pos_v-1 == 0)||(pos_h-1 == 6 && pos_v-1 == 1))
						{
							printf("Can't play that (Static)\n");
							rep = 0;
						}
						else
						{
							if((pos_h-1 == 7 && pos_v-1 == 1)||(pos_h-1 == 7 && pos_v-1 == 2)||(pos_h-1 == 7 && pos_v-1 == 5)||(pos_h-1 == 7 && pos_v-1 == 6)||(pos_h-1 == 7 && pos_v-1 == 7))
							{
								printf("Can't play that (Static)\n");
								rep = 0;
							}
							else
							{
								if((pos_h-1 == 8 && pos_v-1 == 1)||(pos_h-1 == 8 && pos_v-1 == 2)||(pos_h-1 == 8 && pos_v-1 == 6))
								{
									printf("Can't play that (Static)\n");
									rep = 0;
								}
							}
						}
					}
				}
			}
		}
	}while(rep == 0);
	do
	{
		rewind(stdin);
		printf("\n The number: ");
		scanf("%c", &number);
		rewind(stdin);
	}while(number != '9' && number != '8' && number != '7' && number != '6' && number != '5' && number != '4' && number != '3' && number != '2' && number != '1');
	matrix[pos_h-1][pos_v-1] = number;
}

//  -------------------------------------------------------------------------------------------------------------------------------------  //

void play10(char matrix[9][9])
{
	float p_h, p_v;
	int pos_h, pos_v;
	int rep;
	char number;
	do
	{
		rep = 1;
		printf("\n\t\t\t\t Position:\n");
		do
		{
			printf("\n Vertically 1---->9: ");
			while(!scanf("%f", &p_h))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_h = p_h;
		}while(pos_h < 1 || pos_h >9);
		do
		{
			printf("\n Horizontly 1---->9: ");
			while(!scanf("%f", &p_v))
			{
				printf("\nEnter an integer\n");
				rewind(stdin);
			}
			pos_v = p_v;
		}while(pos_v < 1 || pos_v >9);
		if((pos_h-1 == 0 && pos_v-1 == 0)||(pos_h-1 == 0 && pos_v-1 == 3)||(pos_h-1 == 0 && pos_v-1 == 5)||(pos_h-1 == 0 && pos_v-1 == 8)||(pos_h-1 == 1 && pos_v-1 == 1))
		{
			printf("Can't play that (Static)\n");
			rep = 0;
		}
		else
		{
			if((pos_h-1 == 1 && pos_v-1 == 4)||(pos_h-1 == 1 && pos_v-1 == 7)||(pos_h-1 == 2 && pos_v-1 == 1)||(pos_h-1 == 2 && pos_v-1 == 2)||(pos_h-1 == 2 && pos_v-1 == 6))
			{
				printf("Can't play that (Static)\n");
				rep = 0;
			}
			else
			{
				if((pos_h-1 == 2 && pos_v-1 == 7)||(pos_h-1 == 3 && pos_v-1 == 0)||(pos_h-1 == 3 && pos_v-1 == 1)||(pos_h-1 == 3 && pos_v-1 == 3)||(pos_h-1 == 3 && pos_v-1 == 5))
				{
					printf("Can't play that (Static)\n");
					rep = 0;
				}
				else
				{
					if((pos_h-1 == 3 && pos_v-1 == 7)||(pos_h-1 == 3 && pos_v-1 == 8)||(pos_h-1 == 4 && pos_v-1 == 4)||(pos_h-1 == 5 && pos_v-1 == 0)||(pos_h-1 == 5 && pos_v-1 == 3))
					{
						printf("Can't play that (Static)\n");
						rep = 0;
					}
					else
					{
						if((pos_h-1 == 5 && pos_v-1 == 5)||(pos_h-1 == 5 && pos_v-1 == 8)||(pos_h-1 == 6 && pos_v-1 == 1)||(pos_h-1 == 6 && pos_v-1 == 2)||(pos_h-1 == 6 && pos_v-1 == 6))
						{
							printf("Can't play that (Static)\n");
							rep = 0;
						}
						else
						{
							if((pos_h-1 == 6 && pos_v-1 == 7)||(pos_h-1 == 7 && pos_v-1 == 1)||(pos_h-1 == 7 && pos_v-1 == 2)||(pos_h-1 == 7 && pos_v-1 == 6)||(pos_h-1 == 7 && pos_v-1 == 7))
							{
								printf("Can't play that (Static)\n");
								rep = 0;
							}
							else
							{
								if((pos_h-1 == 8 && pos_v-1 == 0)||(pos_h-1 == 8 && pos_v-1 == 3)||(pos_h-1 == 8 && pos_v-1 == 5)||(pos_h-1 == 8 && pos_v-1 == 8))
								{
									printf("Can't play that (Static)\n");
									rep = 0;
								}
							}
						}
					}
				}
			}
		}
	}while(rep == 0);
	do
	{
		rewind(stdin);
		printf("\n The number: ");
		scanf("%c", &number);
		rewind(stdin);
	}while(number != '9' && number != '8' && number != '7' && number != '6' && number != '5' && number != '4' && number != '3' && number != '2' && number != '1');
	matrix[pos_h-1][pos_v-1] = number;
}

