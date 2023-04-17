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

void init_dog(struct dog *ptr, char *n, float a, char *o);
void print_dog(struct dog *str);
dog_t *new_dog(char *n, float a, char *o);
void free_dog(dog_t *fr);
char *_strcpy(char *first, char *second);
int _strlen(char *str);

#endif
