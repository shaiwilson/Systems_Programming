#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);

	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
}

void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\Weight: %d\n", who->weight);

}

int main(int argc, char *argv[])
{

	// make two people structures
	struct Person *joe = Person_create(
		"Joe Alex", 32, 64, 140);

	struct Person *shai = Person_create(
		"Shai Wilson", 22, 54, 190);

	// print them out and where they are in memory
	printf("Joe is at memory location %p\n", joe );
	Person_print(joe);

	printf("Shai is at memory location %p\n", shai );
	Person_print(shai);

	// destroy them both 
	Person_destroy(joe);
	Person_destroy(shai);

}

}