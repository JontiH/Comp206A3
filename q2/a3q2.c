/* --- The following code comes from c:\lcc\lib\wizard\textmode.tpl. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[])
{
	int size;
	char *token;
	int set;
	char new_prompt[1024]; //arbitrarily large

	if (argc > 1) {
		printf("ERROR");
		return 1;
	}

	set = 0;
	//int count = 0;

	char prompt[1024] = "This is the prompt!"; //arbitrarily large
	while(1)
		{
			printf("%s ", prompt);

			char input[1024];
			fgets(input,1024,stdin);
			//printf("%s\n",input);
			char testinput[1024];
			strcpy(testinput,input);
			//printf("%s\n", input);


							for(int i = 0; testinput[i]; i++)
								{
  									testinput[i] = tolower(testinput[i]);
								}

							if((strncmp(testinput,"quit",4) == 0))
								{
									return 0;
								}
							else if((strncmp(testinput,"set prompt",10) == 0))
								{
									//printf("lol -->? %s ok so now we know", input+11);
									strcpy(prompt,strtok(input+11,"\n"));

									//printf("%s",*p);


								}
							else
								{
									system(input);
								}




		}




	return 0;

}

