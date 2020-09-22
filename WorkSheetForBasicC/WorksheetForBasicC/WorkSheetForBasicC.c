

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
/*
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
*/

// Умножение - Передача по ссылке
/*
struct fraction     // Описание структуры данных
{
    int integer;    // Перемення входящая в структуру данных
    int divisible;  // Перемення входящая в структуру данных
    int divider;   // Перемення входящая в структуру данных
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

void frDesinteger(Fraction* f)  // Функция для перевода в простой вид
{
    int sign = (f->integer < 0) ? -1 : 1;   //
    if (f->integer < 0)
        f->integer = -f->integer; // Указатель "->" используется и может использоваться вместо точки
    f->divisible = f->divisible + (f->integer * f->divider);
    f->divisible *= sign;
    f->integer = 0;

}

void frMul(Fraction f1, Fraction f2, Fraction* r)   // Функция для сбора результата вычеслений
{
    frDesinteger(&f1);  // Лишить дробь целой части
    frDesinteger(&f2);  // Лишить дробь целой части
    r->divisible = f1.divisible * f2.divisible;
    r->divider = f1.divider * f2.divider;
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
    puts("");
    frMul(f1, f2, &result);
    frPrint(result);
    return 0;
}
*/

// << 4.3 Файловая система>>

// Создание и запись текстового файла
/*
FILE *f; // Указатель на создание файла

int main(int argc, const char** argv) {
    f = fopen("filename.txt", "w");     // создание текстового файла (файл будет содан в той паке в которой запускается программа)
    if (f == NULL)  // Проверка: смогла ли программа открыть текстовой файл или создатькго?
        return 1;
    fprintf(f, "Hello, file! %s", "We actually did it!");    // Запись ф файл данных
    fclose(f);  // Закрыть файл после записи

// Чтение из текстового файла

    f == fopen("filename.txt", "r");    // открыть файл в режиме чтениия
    char word[256];
    fscanf(f, "%s", &word);
    printf("%s\n", word);
    fclose(f);
*/

// Чтение всего текса из файла
    /*
    f == fopen("filename.txt", "r");    // открыть файл в режиме чтениия
    char word[256];
    while (!feof(f)) {      // Чтение всего файла через условие цикла
        fscanf(f, "%s", word);
        printf("%s ", word);
    }
    fclose(f);

    return 0;
}
*/

// << 4.4 Динамические выделения памяти >>

// Процесс выделения памяти с помощю функции malloc()
/*
int main(int argc, const char** argv) {
    int* area = (int*) malloc(123);   // Память выделена и размечена
    return 0;
} */

// Узнать колличество выделения памяти c помощью функии sizeof()
/*
int main(int argc, const char** argv) {
    int* area = (int*) malloc(123);   // Память выделена и расмечена + два способа (обычный и с момощью выделения памяти)
    printf("%lu\n", sizeof(int));
    const int SIZE = 10;
    int* array = (int*) malloc(sizeof (int) * 10); // указали 40 байк размер файла
    int array2[SIZE];
    int i;
    for (i = 0; i < SIZE; i++) {
        *(array + i) = i * 10;
    }
    for (i = 0; i < SIZE; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
    for (i = 0; i < SIZE; i++) {
        array2[i] = i * 10;
    }
    for (i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
*/
// Очистить выделенную область памяти с помощью функции calloc()
/*
int main(int argc, const char** argv) {
    int* area = (int*) malloc(123);   // Память выделена и расмечена + два способа (обычный и с момощью выделения памяти)
    printf("%lu\n", sizeof(int));
    const int SIZE = 10;
    // int* array = (int*) malloc(sizeof (int) * 10); // указали 40 байк размер файла
    int* array = (int*) calloc(SIZE, sizeof(int));
    int array2[SIZE];
    int i;
    // for (i = 0; i < SIZE; i++) {
    //     *(array + i) = i * 10;
    //  }
    for (i = 0; i < SIZE; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
    for (i = 0; i < SIZE; i++) {
        array2[i] = i * 10;
    }
    for (i = 0; i < SIZE; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");
    return 0;
} */

// Освобождение области памяти после её использования с помощью функции free()
/*
int main(int argc, const char** argv) {
    int* area = (int*) malloc(123);   // Память выделена и расмечена + два способа (обычный и с момощью выделения памяти)
    printf("%lu\n", sizeof(int));
    const int SIZE = 10;
    // int* array = (int*) malloc(sizeof (int) * 10); // указали 40 байк размер файла
    int* array = (int*) calloc(SIZE, sizeof(int));
    int array2[SIZE];
    int i;
    // for (i = 0; i < SIZE; i++) {
    //     *(array + i) = i * 10;
    //  }
    for (i = 0; i < SIZE; i++) {
        printf("%d ", *(array + i));
    }
    free(array);
    printf("\n");
    for (i = 0; i < SIZE; i++) {
        array2[i] = i * 10;
    }
    for (i = 0; i < SIZE; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");
    return 0;
} */

// Изменение рамера уже выделенного блока памяти с помощью функции realloc()

int main(int argc, const char** argv) {
    int* area = (int*) malloc(123);   // Память выделена и расмечена + два способа (обычный и с момощью выделения памяти)
    // printf("%lu\n", sizeof(int));
    const int SIZE = 10;
    // int* array = (int*) malloc(sizeof (int) * 10); // указали 40 байк размер файла
    int* array = (int*) calloc(SIZE, sizeof(int));
    int array2[SIZE];
    int i;
    for (i = 0; i < SIZE; i++) {
        printf("%d ", *(array + i));
    }
    // free(array);
    printf("\n");
    for (i = 0; i < SIZE; i++) {
        array2[i] = i * 10;
    }
    for (i = 0; i < SIZE; i++) {
        printf("%d ", array2[i]);
    }
    int NEWSIZE = SIZE + 10;
    array = realloc(array, NEWSIZE * sizeof (int));
    for (i = 0; i < NEWSIZE; i++) {
        *(array + i) = i * 10;
    }
    printf("\n");
    for (i = 0; i < NEWSIZE; i++) {
        printf("%d ", *(array + i));
    }
    free(array);

    printf("\n");
    return 0;
}









