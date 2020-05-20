#include<stdio.h>
int test_result(char matrix[9][9])
{
	int repete = 0, i, j, k, p_l_u_i, p_l_u_j;
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			if(matrix[i][j] != ' ')
			{
				for(k = 0; k < 9; k++)
				{
					if(matrix[i][k] == matrix[i][j]) repete++;
				}
				if(repete > 1) {   printf("\a"); return 0;   }
				repete = 0;
				for(k = 0; k < 9; k++)
				{
					if(matrix[k][j] == matrix[i][j]) repete++;
				}
				if(repete > 1) {   printf("\a"); return 0;   }
				repete = 0;
				if(i < 3)//test de la partie up
				{
					if(j < 3)//test de la partie left up
					{
						for(p_l_u_i = 0; p_l_u_i < 3; p_l_u_i++)
						{
							for(p_l_u_j = 0; p_l_u_j < 3; p_l_u_j++)
							{
								if(matrix[p_l_u_i][p_l_u_j] == matrix[i][j]) repete++;
							}
						}
						if(repete > 1) {   printf("\a"); return 0;   }
						repete = 0;
					}//Fin test de la partie left up
					else
					{
						if(j < 6)//test de la partie middle up
						{
							for(p_l_u_i = 0; p_l_u_i < 3; p_l_u_i++)
							{
								for(p_l_u_j = 3; p_l_u_j < 6; p_l_u_j++)
								{
									if(matrix[p_l_u_i][p_l_u_j] == matrix[i][j]) repete++;
								}
							}
							if(repete > 1) {   printf("\a"); return 0;   }
							repete = 0;
						}//Fin test de la partie middle up
						else//test de la partie right up
						{
							for(p_l_u_i = 0; p_l_u_i < 3; p_l_u_i++)
							{
								for(p_l_u_j = 6; p_l_u_j < 9; p_l_u_j++)
								{
									if(matrix[p_l_u_i][p_l_u_j] == matrix[i][j]) repete++;
								}
							}
							if(repete > 1) {   printf("\a"); return 0;   }
							repete = 0;
						}//Fin test de la partie right up
					}
				}//Fin du test de la partie up
				else
				{
					if(i < 6)//test de la partie Middle
					{
						if(j < 3)//test de la partie left Middle
						{
							for(p_l_u_i = 3; p_l_u_i < 6; p_l_u_i++)
							{
								for(p_l_u_j = 0; p_l_u_j < 3; p_l_u_j++)
								{
									if(matrix[p_l_u_i][p_l_u_j] == matrix[i][j]) repete++;
								}
							}
							if(repete > 1) {   printf("\a"); return 0;   }
							repete = 0;
						}//Fin test de la partie left Middle
						else
						{
							if(j < 6)//test de la partie middle Middle
							{
								for(p_l_u_i = 3; p_l_u_i < 6; p_l_u_i++)
								{
									for(p_l_u_j = 3; p_l_u_j < 6; p_l_u_j++)
									{
										if(matrix[p_l_u_i][p_l_u_j] == matrix[i][j]) repete++;
									}
								}
								if(repete > 1) {   printf("\a"); return 0;   }
								repete = 0;
							}//Fin test de la partie middle Middle
							else//test de la partie right Middle
							{
								for(p_l_u_i = 3; p_l_u_i < 6; p_l_u_i++)
								{
									for(p_l_u_j = 6; p_l_u_j < 9; p_l_u_j++)
									{
										if(matrix[p_l_u_i][p_l_u_j] == matrix[i][j]) repete++;
									}
								}
								if(repete > 1) {   printf("\a"); return 0;   }
								repete = 0;
							}//Fin test de la partie right Middle
						}
					}//Fin du test de la partie Middle
					else
					{
						if(j < 3)//test de la partie left Down
						{
							for(p_l_u_i = 6; p_l_u_i < 9; p_l_u_i++)
							{
								for(p_l_u_j = 0; p_l_u_j < 3; p_l_u_j++)
								{
									if(matrix[p_l_u_i][p_l_u_j] == matrix[i][j]) repete++;
								}
							}
							if(repete > 1) {   printf("\a"); return 0;   }
							repete = 0;
						}//Fin test de la partie left Down
						else
						{
							if(j < 6)//test de la partie middle Down
							{
								for(p_l_u_i = 6; p_l_u_i < 9; p_l_u_i++)
								{
									for(p_l_u_j = 3; p_l_u_j < 6; p_l_u_j++)
									{
										if(matrix[p_l_u_i][p_l_u_j] == matrix[i][j]) repete++;
									}
								}
								if(repete > 1) {   printf("\a"); return 0;   }
								repete = 0;
							}//Fin test de la partie middle Down
							else//test de la partie right Down
							{
								for(p_l_u_i = 6; p_l_u_i < 9; p_l_u_i++)
								{
									for(p_l_u_j = 6; p_l_u_j < 9; p_l_u_j++)
									{
										if(matrix[p_l_u_i][p_l_u_j] == matrix[i][j]) repete++;
									}
								}
								if(repete > 1) {   printf("\a"); return 0;   }
								repete = 0;
							}//Fin test de la partie right Down
						}
					}
				}
			}
		}
	}
	return 1;
}
              
			  // --------------------------------------------------------------------------------------------------------------- //
			  
int test(char matrix[9][9])
{
	int i, j;
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			if(matrix[i][j] == ' ')
				return 1;
		}
	}
	return 0;
}
