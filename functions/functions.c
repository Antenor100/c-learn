#include "functions.h"
#include <stddef.h>
#include <stdio.h>

float calculate_triangle_area(float base, float height) {
    return (base * height) / 2;
}

float calculate_square_area(float base, float height) { return base * height; }

float calculate_trapezium_area(float base, float height) {
    return ((base + height) * height) / 2;
}

void calculate_figure_area(void) {
    puts("\nOlá, me informe a base da figura:");
    float base;
    if (scanf("%f", &base) != 1) {
        puts("Entrada inválida para base.");
        return;
    }

    puts("\nAgora, me informe a altura da figura:");
    float height;
    if (scanf("%f", &height) != 1) {
        puts("Entrada inválida para altura.");
        return;
    }

    puts("\nPra finalizar, a figura que você quer saber a área é um:");

    // Inicializando a array de figuras
    Figure figures[3] = {{"Triângulo", 1, calculate_triangle_area},
                         {"Quadrado ou Retângulo", 2, calculate_square_area},
                         {"Trapézio", 3, calculate_trapezium_area}};

    // Exibindo as opções de figuras
    for (size_t i = 0; i < sizeof(figures) / sizeof(figures[0]); i++) {
        printf("%d - %s\n", figures[i].code, figures[i].name);
    }

    int option_code;
    if (scanf("%d", &option_code) != 1 || option_code < 1 ||
        option_code > (int)(sizeof(figures) / sizeof(figures[0]))) {
        puts("Opção inválida.");
        return;
    }

    // Calculando a área da figura escolhida
    float area = figures[option_code - 1].calculate_area(base, height);
    printf("\nA área do %s é: %.2f\n", figures[option_code - 1].name, area);
}