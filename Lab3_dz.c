#include <stdio.h>

#define GRAVITY 9.81

int main() {
    double mass, force;

    printf("Введите массу тела (в кг): ");
    scanf_s("%lf", &mass);

    if (mass <= 0) {
        printf("Ошибка: масса должна быть положительным числом!\n");
        return 1;
    }

    force = mass * GRAVITY;

    printf("Сила тяжести для тела массой %.2f кг:\n", mass);
    printf("F = m * g = %.2f * %.2f = %.2f Н (ньютонов)\n",
        mass, GRAVITY, force);

    return 0;
}