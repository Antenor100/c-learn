#include "functions/functions.h"
#include "helloWorld/hello.h"
#include "variables/variables.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Hello World demonstration
    print_hello_world();

    // Person data demonstration
    Person person = {g_age, g_height, g_weight, g_initial, g_name};
    char *person_data = get_person_data_as_char_array(person);
    if (person_data != NULL) {
        printf("%s\n", person_data);
        free(person_data);
    }

    // Figure area calculation demonstration
    calculate_figure_area();

    return 0;
}