
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *file_ptr;
	char *token;
	float value;
	float count;
	int size;

	char name[1024]; //arbitrarily large

	file_ptr = fopen(argv[1], "r");

	fseek(file_ptr, 0L, SEEK_END);
	size = ftell(file_ptr);
	fseek(file_ptr, 0L, SEEK_SET);

	char line[size];




	if (file_ptr == NULL)
		{
			printf("Error");
			return 1;
		}


	while(!feof(file_ptr))
	{
			count = -1;
			value = 0;
			fgets(line,299,file_ptr);
			token = strtok(line,",");
			while (token != NULL)
  			{
				if(count == -1)
					{
						strcpy(name,token);
						token = strtok(NULL, ",");
						count++;
					}
				//printf("yo --> %s", token);
				count++;
   			 	value = value + atof(token);
    			token = strtok(NULL, ",");

			}			printf("%s, %.2f \n", name, value/count);
	}

	fclose(file_ptr);
	return 0;
}
