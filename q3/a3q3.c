
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define SOMALI
#define ENGLISH

struct node {
    char* s;
    struct node * next;
};

struct node * head = NULL;
struct node * curr = NULL;
int code = 0;

void insertNode(struct node * temp) {
    if (head == NULL) {
        head = temp;
        temp->next = NULL;
    }
    else
	{
		curr = head;

		while (curr->next != NULL)
    	{
        	curr = curr->next;
    	}

        	curr->next = temp;
			temp->next = NULL;

    }
}

void display() {
    if(head == NULL)
		{
			#ifdef SOMALI
			printf("baadi ! Waxaad ma gelin in ereyada");
			#else
			printf("error! You didn't put in any words ");
			#endif
			code = 1;

		}
	else
		{
			curr = head;
    		while (curr->next != NULL)
    			{
        			printf("%s",curr->s);
        			curr = curr->next;
    			}
			printf("%s",curr->s);
		}
}
int main() {
    struct node * temp = (struct node *) malloc (sizeof(struct node));
	char* input= malloc(sizeof(char)*1024);

	//#ifdef FRENCH
//printf("Votre Nom: ");
//#else
//printf("Your Name: ");
//#endif
	#ifdef SOMALI
			printf("Ku soo dhawaada barnaamijka aan la koobi karayn kaydinta string \nraalli la gelin hal eray: ");
			#else
			printf("Welcome to the infinite string storage program \nplease input a single word:  ");
			#endif

			fgets(input,1024,stdin);
			input = strtok(input, " ");

	while((strncmp(input,"***END***",9)!=0))
		{
			temp = malloc (sizeof(struct node));

			temp->s = strdup(input);
    		insertNode(temp);

				#ifdef SOMALI
			printf("raalli la gelin hal eray: ");
			#else
			printf("please input a single word: ");
			#endif

			fgets(input,1024,stdin);
			input = strtok(input, " ");

		}
		display();


	return code;

}
