#ifndef FUNCTIONS_AREA_H
#define FUNCTIONS_AREA_H

typedef float (*AreaCalculator)(float base, float height);

typedef struct {
    char name[30];
    int code;
    AreaCalculator calculate_area;
} Figure;

float calculate_triangle_area(float base, float height);
float calculate_square_area(float base, float height);
float calculate_trapezium_area(float base, float height);
void calculate_figure_area(void);

#endif // FUNCTIONS_AREA_H