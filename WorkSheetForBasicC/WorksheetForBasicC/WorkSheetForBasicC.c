

#include <stdio.h>      // Начальная функция
#include <string.h>     // Для функции склеивания и стравнения срок
#include <stdlib.h>     // Для функции работы с символами
#include <ctype.h>      // Для функции работы с символами по отдельности

// << 4.1 Строки >>

// Функция склеивания строк
/*
#include <string.h>

void helloFunction(char* name, char* out)   {
    char welcome[255] = "Hello, ";
    strcat(welcome, name); // функция склеивания строки
    strcpy(out, welcome);
}

int main(int argc, const char** argv)   {
    char string1[256] = "This is a string";
    char* string2 = "This is also string";

    printf("%s\n", string1);
    printf("%s\n", string2);

    string1[5] = 'X';
    printf("%s\n", string1);

    char name[255];
    char result[255];
    gets(name);
    puts(name);
    helloFunction(name, result);
    printf("%s\n", result);

    return 0;
}
*/

// Функция сравнения строк
/*
void helloFunction(char* name, char* out)   {
    char welcome[255] = "Hello, ";
    if (strcmp("Ivan", name) == 0)   {
        strcpy(name, "Master");
    }
    strcat(welcome, name);
    strcpy(out, welcome);
}

int main(int argc, const char** argv)   {
    char string1[256] = "This is a string";
    char* string2 = "This is also string";

    printf("%s\n", string1);
    printf("%s\n", string2);

    string1[5] = 'X';
    printf("%s\n", string1);

    char name[255];
    char result[255];
    gets(name);
    puts(name);
    helloFunction(name, result);
    printf("%s\n", result);

    return 0;
}
*/

// Функция работы с символами
/*
void helloFunction(char* name, char* out)   {
    char welcome[255] = "Hello, ";
    if (strcmp("Ivan", name) == 0)   {
        strcpy(name, "Master");
    }
    strcat(welcome, name);
    strcpy(out, welcome);
}

int main(int argc, const char** argv)   {
    char string1[256] = "This is a string";
    char* string2 = "This is also string";

    printf("%s\n", string1);
    printf("%s\n", string2);

    string1[5] = 'X';
    printf("%s\n", string1);

    char name[255];
    char result[255];

    // gets(name);
    // puts(name);
    // helloFunction(name, result);
    // printf("%s\n", result);

    char num[64];
    puts("Введите число");
    gets(num);
    int number = atoi(num);
    number *= number;
    printf("Мы возвели Ваше число в квадрат: %d\n", number);

    return 0;
}
*/

// Функция работы с каждым символом строки по отдельности
/*
void helloFunction(char* name, char* out)   {
    char welcome[255] = "Hello, ";
    name[0] = toupper(name[0]);
    if (strcmp("Ivan", name) == 0)   {
        strcpy(name, "Master");
    }
    strcat(welcome, name);
    strcpy(out, welcome);
}

int main(int argc, const char** argv)   {
    char string1[256] = "This is a string";
    char* string2 = "This is also string";

    printf("%s\n", string1);
    printf("%s\n", string2);

    string1[5] = 'X';
    printf("%s\n", string1);

    char name[255];
    char result[255];

    gets(name);
    puts(name);
    helloFunction(name, result);
    printf("%s\n", result);

    // char num[64];
    // puts("Введите число");
    // gets(num);
    // int number = atoi(num);
    // number *= number;
    // printf("Мы возвели Ваше число в квадрат: %d\n", number);

    return 0;
}
*/


// << 4.2 Структуры данных >>

// Простая дробь

struct fraction     // Описание структуры данных
{
    int integer;    // Перемення входящая в структуру данных
    int divisible;  // Перемення входящая в структуру данных
    int divider;    // Перемення входящая в структуру данных
};
typedef struct fraction Fraction;   // Описание типа данных (Описание старого типа данных и описание нового типа данных) Неоходимо для сокращения ввода вместо "struct fraction" просто "Fraction"

void frPrint(Fraction f)    // Передача по значанию. Показывет, что "f"  теперь исползуется для указания значения "Fraction". (для сокращения записи)
{
    if (f.divisible != 0)
    {
         if (f.integer == 0)
             printf("%d / %d\n", f.divisible, f.divider);
         else
             printf("%d | %d / %d\n", f.integer, f.divisible, f.divider);
    }
    else
        printf("%d", f.integer);
}

int main(int argc, const char** argv)   {   // Основная функция ввода данных
    Fraction f1, f2, result; // Указание дополнительных обозначений для условия совмещения данных с функцией "struct fraction"
    f1.integer = -1;
    f1.divisible = 1; // 1 | 1/5
    f1.divider = 5;
    f2.integer = 1;
    f2.divisible = 1; // 1 | 1/5
    f2.divider = 5;
    result.integer = 0;
    result.divisible = 0;
    result.divider = 0;

    frPrint(f1);    // Вызов вывода решения функции в консоль
    puts("");       // Вызов вывода решения функции в консоль
    frPrint(f2);    // Вызов вывода решения функции в консоль
    return 0;
}
