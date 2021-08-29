#include <stdio.h>
#include <stdlib.h>

#include "funcs.h"

#define KEY 3
#define D_SIZE 25

int main() {
    char key[KEY], sx[D_SIZE], sy[D_SIZE];
    double x, y, result;

    x = 0.0;
    y = 0.0;
    result = 0.0;

    printf("Для вывода действий на экран введите m\n");
    printf("Введите число\n");

    fgets(key, KEY, stdin);

    while (key[0] != 0) {
        switch  (key[0]) {
            case 'm':
                printf("Для сложения введите 1\n");
                printf("Для вычитания введите 2\n");
                printf("Для умножения введите 3\n");
                printf("Для деления введите 4\n");
                printf("Для выхода введите 0\n");
                break;
            case '1':
                printf("Введите 2 числа\n");

                readNum(sx, sy, '+');

                x = atol(sx);
                y = atol(sy);

                result = plus(x, y);

                printf("Ответ: %10.2lf\n", result);
                break;
            case '2':
                printf("Введите 2 числа\n");

                readNum(sx, sy, '-');

                x = atol(sx);
                y = atol(sy);

                result = minus(x, y);
                printf("Ответ: %10.2lf\n", result);
                break;
            case '3':
                printf("Введите 2 числа\n");

                readNum(sx, sy, '*');

                x = atol(sx);
                y = atol(sy);

                result = multiplication(x, y);
                printf("Ответ: %10.2lf\n", result);
                break;
            case '4':
                printf("Введите 2 числа\n");

                readNum(sx, sy, '/');

                x = atol(sx);
                y = atol(sy);

                result = division(x, y);
                printf("Ответ: %10.2lf\n", result);
                break;
            case '0':
                exit(0);
            default:
                printf("Вы ввели неверный символ\n");
        }
        printf("\nВведите следующую оперцию: ");
        fgets(key, 3, stdin);
    }

    return 0;
}

void readNum(char *x, char *y, char token) {
    fgets(x, D_SIZE, stdin);
    printf("%c\n", token);
    fgets(y, D_SIZE, stdin);
}