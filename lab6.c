#include <stdio.h>
#include <locale.h>

int math()
{
    setlocale(LC_CTYPE, "RUS");

    int a, b, product;

    printf("=== ПРОВЕРКА ПРОИЗВЕДЕНИЯ ===\n");
    printf("Введите первое число: ");
    scanf("%d", &a);
    printf("Введите второе число: ");
    scanf("%d", &b);
    if (a < 10 || a > 99 || b < 10 || b > 99)
    {
        printf("Ошибка! Оба числа должны быть от 10 до 99.\n");
    }
    else
    {
        product = a * b;
        printf("Произведение: %d * %d = %d\n", a, b, product);
        if (product > 2000)
        {
            printf("Да! Произведение больше 2000.\n");
        }
        else
        {
            printf("Нет. Произведение не больше 2000.\n");
        }
    }
}

int main()
{
    math();
    getchar();
    return 0;
}