/**
 * save.c -- Сохраняет в файл указанный в параметрах
 *
 * Copyright (c) 2017, Artur Harkovchyk <harkovch@petrsu.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>
#include <assert.h>
#include "common.h"
#include "text/text.h"

static void save_line(int index, char *contents, void *f);

/**
 * Сохраняет в файл указанный в параметрах
 */
void save(text txt, char *f)
{
    FILE *mf;

    mf = fopen(f, "w");

    if (mf == NULL) {
        fprintf(stderr, "Ошибка сохранения файла\n");
        return;
    }
    /* Вставляет курсор в текст */
    //print_cursor(txt);

    /* Применяем функцию save_line к каждой строке текста */

    process_forward_extra_options(txt, save_line, (void *) mf);
    /* Удаляет курсор из текста */
    //remove_cursor(txt);
    if (fclose(mf) != 0) {
        fprintf(stderr, "Ошибка закрытия файла");
        return;
    }

}

/**
 * Сохраняет в файл указанный в параметрах
 */
static void save_line(int index, char *contents, void *f)
{

    FILE *t = (FILE *) f;


    /* Функция обработчик всегда получает существующую строку */
    assert(contents != NULL);

    /* Декларируем неиспользуемый параметр */
    UNUSED(index);

    /* Записыввает  строку в файл */

    fprintf(t, "%s", contents);

}
