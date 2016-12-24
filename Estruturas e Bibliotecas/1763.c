#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 200

int main (){	
	
	char in[MAX];
	while(scanf("%s", in) != EOF)
		if(strcmp(in,"brasil")==0 || strcmp(in,"portugal")==0)
			printf("Feliz Natal!\n");
		else
			if(strcmp(in,"alemanha")==0)
				printf("Frohliche Weihnachten!\n");
			else
				if(strcmp(in,"austria")==0)
					printf("Frohe Weihnacht!\n");
				else
					if(strcmp(in,"coreia")==0)
						printf("Chuk Sung Tan!\n");
					else
						if(strcmp(in,"espanha")==0 || strcmp(in,"argentina")==0 || strcmp(in,"chile")==0 || strcmp(in,"mexico")==0)
							printf("Feliz Navidad!\n");
						else
							if(strcmp(in,"grecia")==0)
								printf("Kala Christougena!\n");
							else
								if(strcmp(in,"estados-unidos")==0 || strcmp(in,"inglaterra")==0 || strcmp(in,"australia")==0 || strcmp(in,"antardida")==0 || strcmp(in,"canada")==0)
									printf("Merry Christmas!\n");
								else
									if(strcmp(in,"suecia")==0)
										printf("God Jul!\n");
									else
										if(strcmp(in,"turquia")==0)
											printf("Mutlu Noeller\n");
										else
											if(strcmp(in,"irlanda")==0)
												printf("Nollaig Shona Dhuit!\n");
											else
												if(strcmp(in,"belgica")==0)
													printf("Zalig Kerstfeest!\n");
												else
													if(strcmp(in,"italia")==0 || strcmp(in,"libia")==0)
														printf("Buon Natale!\n");
													else
														if(strcmp(in,"siria")==0 || strcmp(in,"marrocos")==0)
															printf("Milad Mubarak!\n");
														else
															if(strcmp(in,"japao")==0)
																printf("Merii Kurisumasu!\n");
															else
																printf("--- NOT FOUND ---\n");
									
	
	return 0;
}
