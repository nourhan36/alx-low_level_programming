#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic information of a dog
 * @n: name
 * @a: age
 * @o: owner
 *
 * Description: information
 */
struct dog
{
	char *n;
	float a;
	char *o;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
