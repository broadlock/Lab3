### Домашнее задание 3

### 1. Алгоритм:
1. Начало

2. Объявить переменные: 
- mass
- force

3. Вывести приглашение для ввода массы

4. Считать значение массы с клавиатуры

5. Если масса ≤ 0:
- Вывести сообщение об ошибке

- Перейти к концу

6. Иначе:

- Вычислить force = mass × 9.81

- Вывести результат расчета

7. Конец

Блок-схема:

<img width="401" height="861" alt="Lab3 - chema drawio" src="https://github.com/user-attachments/assets/7c17c472-4569-4384-99af-6a9a5ef411c0" />

### 2. Реализация программы

#define _CRT_SECURE_NO_WARNING 
#include <stdio.h>
#define GRAVITY 9.81

int main() {
    double mass, force;

    printf(" Введите массу тела (в кг): ");
    scanf("%lf", &mass);

    if (mass <= 0) {
        printf(" Ошибка: масса должна быть положительным числом!\n");
        return 1;
    }

    force = mass * GRAVITY;

    printf(" Сила тяжести для тела массой %.2f кг:\n", mass);
    printf(" F = m * g = %.2f * %.2f = %.2f Н (ньютонов)\n",
        mass, GRAVITY, force);

    return 0;
}

### 3. Результат работы программы

<img width="400" height="57" alt="image" src="https://github.com/user-attachments/assets/389818fe-c179-4af5-8b01-93be14bd02a4" />


### 4. Информация о разработчике
бИЦ - 251, Гаркин Алексей
