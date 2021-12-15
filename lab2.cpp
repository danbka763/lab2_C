#include <iostream>
#pragma warning(disable : 4996)

using namespace std;
void main()
{
    system("chcp 1251");

    printf("Программу выполнил Жигалин Данил Вадимович\n");

    float R1, R2, R3;
    int err1, err2, err3;
    
    printf("Введите значение R1, R2, R3: \n");
    err1 = scanf("%f", &R1);
    err2 = scanf("%f", &R2);
    err3 = scanf("%f", &R3);
 
    if (err1 && err2 && err3 && R1 >= 0 && R2 >= 0 && R3 >= 0)
    {
        float y = R1 * R2 + R2 * R3 + R3 * R1;
        if (y == 0) 
        {
            printf("Ошибка деления на ноль…\n ");
        }
        else 
        {
            printf("R = %.4f", (R1 * R2 * R3) / y);
        }

    }
    else 
    {
        printf("\nВведены неверные данные…\n ");
    }
}