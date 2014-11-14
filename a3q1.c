
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *file_ptr;
	char *token;
	int value;
	int count;
	char line[1024];

	file_ptr = fopen(argv[1], "r");


	if (file_ptr == NULL)
		{
			printf("Error");
			return 1;
		}


	while(!feof(file_ptr))
	{
			count = 0;
			value = 0;
			fgets(line,299,file_ptr);
			token = strtok(line,",");
			while (token != NULL)
  			{
   			 	value = value + atoi(token);
				count++;
    			token = strtok(NULL, ",");
  			}
			printf("%i\n", value/count);

	}

	fclose(file_ptr);
	return 0;
}
