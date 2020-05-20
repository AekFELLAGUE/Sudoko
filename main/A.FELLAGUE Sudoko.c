							/*			Abdelkader FELLAGUE ==>	a.fellague27@gmail.com			*/

#include<stdio.h>
#include"../functions/Post_main.c"
#include"../functions/play_functions.c"
#include"../functions/post_functions.c"
#include"../functions/tst.c"
main()
{
	system("color B0");
	int s, level_choice, result = 1;
	char answer = 'y', e = ' ';
	
	char matrix10[9][9] = {{'4',e,e,'7',e,'1',e,e,'9'},{e,'9',e,e,'2',e,e,'4',e},{e,'3','1',e,e,e,'2','5',e},{'6','7',e,'9',e,'2',e,'8','3'},{e,e,e,e,'3',e,e,e,e},{'9',e,e,'5',e,'4',e,e,'2'},{e,'8','9',e,e,e,'6','7',e},{e,'6','2',e,e,e,'4','9',e},{'5',e,e,'8',e,'6',e,e,'1'}};
	
	char matrix_9[9][9] = {{e,'6','2',e,e,e,'3',e,e},{e,'5','9',e,e,'3','4','2',e},{'4','1',e,e,e,e,e,e,e},{e,e,'6','3',e,'2','5',e,'7'},{e,'2',e,e,'4',e,e,'9',e},{e,e,'5','9',e,'7','2',e,'8'},{'2','9',e,e,e,e,e,e,e},{e,'3','8',e,e,'4','9','6',e},{e,'7','4',e,e,e,'1',e,e}};
	
	char matrix_8[9][9] = {{e,'4','2',e,e,e,'9',e,e},{'9',e,'3','5','8',e,'7','2',e},{e,'7',e,e,'9',e,e,e,e},{e,e,'1',e,e,e,e,'4','5'},{'4',e,e,'2','5','3',e,e,'8'},{'2','9',e,e,e,e,'6',e,e},{e,e,e,e,'3',e,e,'7',e},{e,'2','4',e,'7','5','3',e,'9'},{e,e,'6',e,e,e,'5','1',e}};
	
	char matrix_7[9][9] = {{e,'4',e,e,e,e,e,'8',e},{e,e,'9',e,e,e,'2',e,e},{'5',e,e,'4',e,'1',e,e,'3'},{e,'7',e,'9','8','3',e,'5',e},{e,e,'8','7',e,'2','4',e,e},{e,e,e,'1',e,'6',e,e,e},{e,'2','4',e,'1',e,'5','7',e},{e,'3','6',e,'9',e,'8','2',e},{'8',e,e,'2','6','4',e,e,'1'}};
	
	char matrix_6[9][9] = {{e,e,'3',e,e,'4',e,'2',e},{e,'8','6',e,e,'7','4',e,e},{'4',e,e,'8','6',e,e,e,'3'},{'8','4',e,'6',e,'3',e,'9','1'},{e,e,e,e,e,e,e,e,e},{'3','2',e,'4',e,'9',e,'8','7'},{'2',e,e,'5','3',e,e,e,'9'},{e,'3','4',e,e,'8','5',e,e},{e,e,'9',e,e,'2',e,'3',e}};
	
	char matrix_5[9][9] = {{e,'1','3','5',e,e,'2',e,e},{'5',e,e,e,e,e,'8','3','4'},{'4','7',e,'9','3',e,'5',e,e},{e,e,e,'7',e,e,e,'9','5'},{e,e,e,'3',e,'5',e,e,e},{'3','2',e,e,e,'9',e,e,e},{e,e,'8',e,'7','3',e,'2','6'},{'7','6','4',e,e,e,e,e,'3'},{e,e,'9',e,e,'1','4','8',e}};
	
	char matrix_4[9][9] = {{e,e,e,'6',e,'1',e,e,e},{e,e,'4','5',e,'7','2',e,e},{'1',e,'3',e,e,e,'7',e,'6'},{e,'5',e,'9',e,'3',e,'8',e},{'3',e,e,e,'8',e,e,e,'9'},{'2','8',e,e,'5',e,e,'7','3'},{'5',e,e,'7',e,'8',e,e,'1'},{e,'4',e,'2',e,'5',e,'6',e},{e,e,'2','3',e,'4','8',e,e}};	
	
	char matrix_3[9][9] = {{e,e,'5',e,e,e,'1',e,e},{e,'1','9',e,e,'5',e,'4',e},{e,e,e,'8',e,'2',e,'9','3'},{'8',e,e,'1',e,e,e,e,'6'},{'1','3',e,'2','4','8',e,'5','7'},{'4',e,e,e,e,'6',e,e,'1'},{'5','7',e,'3',e,'9',e,e,e},{e,'2',e,'4',e,e,'7','6',e},{e,e,'1',e,e,e,'8',e,e}};
	
	char matrix_2[9][9] = {{e,'7',e,e,e,e,e,'5',e},{e,'9','3',e,e,e,'1','6',e},{'1',e,'5',e,'7',e,'4',e,'3'},{'9',e,e,'2','1','6',e,e,'4'},{'4',e,e,'3',e,'9',e,e,'1'},{e,'1',e,'8',e,'7',e,'2',e},{e,e,'8',e,e,e,'5',e,e},{e,'6','1',e,'9',e,'7','8',e},{e,'4',e,e,'8',e,e,'1',e}};
	
	char matrix_1[9][9] = {{e,e,e,e,e,e,'5',e,e},{'3',e,'2',e,'7',e,'9','1',e},{'6',e,e,'9',e,e,e,e,e},{e,e,e,e,e,e,e,'2','6'},{e,'2',e,'3',e,e,'1','5','9'},{'7','9',e,'6',e,'5',e,'8',e},{'1',e,'9','7',e,e,e,e,e},{'4','5',e,e,e,e,'2','3',e},{e,'3','8','4','5',e,'6',e,e}};
	while(answer != 'N' && answer != 'n')
	{
		system("color B0");
		post_main();
		do
		{
			printf("\n\nChoose a Level please: ");
			rewind(stdin);
			while(!scanf("%d", &level_choice))
			{
				printf("\nMust be integer!!\n\nChoose a Level please: ");
				rewind(stdin);
			}
		}while(level_choice > 10 || level_choice < 1);
		system("color A0");
		switch(level_choice)
		{
			case 1:
					while(test(matrix_1))
					{
						post(matrix_1, 1);
						play(matrix_1);
						test_result(matrix_1);
					}
					post(matrix_1, 1);
					result = test_result(matrix_1);
					break;
			case 2:
					while(test(matrix_2))
					{
						post(matrix_2, 2);
						play2(matrix_2);
						test_result(matrix_2);
					}
					post(matrix_2, 2);
					result = test_result(matrix_2);
					break;
			case 3:
					while(test(matrix_3))
					{
						post(matrix_3, 3);
						play3(matrix_3);
						test_result(matrix_3);
					}
					post(matrix_3, 3);
					result = test_result(matrix_3);
					break;
			case 4:
					while(test(matrix_4))
					{
						post(matrix_4, 4);
						play4(matrix_4);
						test_result(matrix_4);
					}
					post(matrix_4, 4);
					result = test_result(matrix_4);
					break;
			case 5:
					while(test(matrix_5))
					{
						post(matrix_5, 5);
						play5(matrix_5);
						test_result(matrix_5);
					}
					post(matrix_5, 5);
					result = test_result(matrix_5);
					break;
			case 6:
					while(test(matrix_6))
					{
						post(matrix_6, 6);
						play6(matrix_6);
						test_result(matrix_6);
					}
					post(matrix_6, 6);
					result = test_result(matrix_6);
					break;
			case 7:
					while(test(matrix_7))
					{
						post(matrix_7, 7);
						play7(matrix_7);
						test_result(matrix_7);
					}
					post(matrix_7, 7);
					result = test_result(matrix_7);
					break;
			case 8:
					while(test(matrix_8))
					{
						post(matrix_8, 8);
						play8(matrix_8);
						test_result(matrix_8);
					}
					post(matrix_8, 8);
					result = test_result(matrix_8);
					break;
			case 9:
					while(test(matrix_9))
					{
						post(matrix_9, 9);
						play9(matrix_9);
						test_result(matrix_9);
					}
					post(matrix_9, 9);
					result = test_result(matrix_9);
					break;
			case 10:
					while(test(matrix10))
					{
						post(matrix10, 10);
						play10(matrix10);
						test_result(matrix10);
					}
					post(matrix10, 10);
					result = test_result(matrix10);
					break;
		}
		if(result) printf("\n\n\t\t\t      CONGRATULATIONS, You made it !!!\n");
		else       printf("\n\n\t\t\t      Fauzditha jeune !!!\n");
		do
		{
			rewind(stdin);
			printf("\nDo you want to continue (Yes/No): ");
			scanf("%c", &answer);
			rewind(stdin);
		}while((answer != 'N')&&(answer != 'n')&&(answer != 'Y')&&(answer != 'y'));
	}
	system("pause");
}
