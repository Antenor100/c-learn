#ifndef VARIABLES_PERSON_H
#define VARIABLES_PERSON_H

extern unsigned int g_age;
extern float g_height;
extern double g_weight;
extern char g_initial;
extern char *g_name;

typedef struct {
    unsigned int age;
    float height;
    double weight;
    char initial;
    char *name;
} Person;

char *get_person_data_as_char_array(Person person);

#endif // VARIABLES_PERSON_H