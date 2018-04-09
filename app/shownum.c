/**
 * show.c -- реализует команду вывода хранимого текста на экран с порядковой нумирацией
 *
 * Copyright (c) 2017, Artur Harkovchuk <harkovch@petrsu.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>
#include <assert.h>
#include "common.h"
#include "text/text.h"

static void show_num(int index, char *contents, void *f);

/**
 * Выводит содержимое указанного файла на экран с порядковой нумирацией
 */
void shownum(text txt, char *filename)

{
    
      //freopen("2.txt","w",stdout);
    /* Вставляет курсор в текст */
    //print_cursor(txt);
    /* Применяем функцию show_num к каждой строке текста */
    //process_forward(txt, show_num);
    /* Удаляет курсор из текста */
    //remove_cursor(txt);
    //fclose(stdout);
    //return;
    
    FILE *mf;

    mf = fopen(filename, "w");

    if (mf == NULL) {
        fprintf(stderr, "Ошибка сохранения файла\n");
        return;
    }
    /* Вставляет курсор в текст */
    //print_cursor(txt);

    /* Применяем функцию save_line к каждой строке текста */

    process_forward_extra_options(txt, show_num, (void *) mf);
    /* Удаляет курсор из текста */
    //remove_cursor(txt);
    if (fclose(mf) != 0) {
        fprintf(stderr, "Ошибка закрытия файла");
        return;
    }


}

/**
 * Выводит содержимое указанного файла на экран с порядковой нумирацией
 */
static void show_num(int index, char *contents, void *f)
{
    FILE *t = (FILE *) f;
    /* Функция обработчик всегда получает существующую строку */
    assert(contents != NULL);

    /* Декларируем неиспользуемый параметр */
    UNUSED(index);
	/*Выводит номер строки на экран*/
	fprintf(t,"%d)", index+1);





    /* Выводим строку на экран */
      fprintf(t, "%s", contents);

}

