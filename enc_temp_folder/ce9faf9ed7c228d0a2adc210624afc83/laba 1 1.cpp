#include <stdio.h>
#include <locale.h>

/**
 * @brief Л/р 1 Знакомство со средой разработки
 * Исходный код на C
 * @return Всегда 0
*/
int main() {
    setlocale(LC_ALL, "ru");

    printf("Hello World! Привет мир!\n");
}
