#include "variables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int g_age = 18;
float g_height = 1.75;
double g_weight = 3.14159;
char g_initial = 'A';
char *g_name = "Alice";

char *get_person_data_as_char_array(Person person) {
    char *data = malloc(100 * sizeof(char));

    if (data != NULL) {
        snprintf(data, 100,
                 "\nAge: %u, Height: %.2f, Weight: %.2f, Initial: %c, Name: %s",
                 person.age, person.height, person.weight, person.initial,
                 person.name);
    }

    return data;
}