#include <stdlib.h>
#include "../../malloc/src/malloc.h"

/* 
    Define the Person struct by specifying the fields that make up the
    Person type. Don't forget to specify the type of each field.
*/
struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

/*
    Creates an instance of the Person struct that receives all the relevant
    pieces of data associated with a Person instance.

    Allocates the appropriate amount of memory to hold an instance of the 
    Person struct, and then sets the struct's fields with the input data.
    When setting the `name` field, use your previously-built string_dup.
*/
struct Person *Person_create(char *name, int age, int height, int weight)
{
    struct Person *who = malloc(sizeof(struct Person));
    
    who->name = string_dup(name);
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

/*
    Given a pointer to a Person struct, frees up the memory that holds the
    Person's name as well as the memory that holds the Person instance.
*/
void Person_destroy(struct Person *who)
{
    free(who->name);
    free(who);
}