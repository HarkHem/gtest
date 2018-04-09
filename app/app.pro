TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    editor.c\
    load.c\
    save.c\
    show.c\
    shownum.c\
    text/append_line.c \
    text/create_text.c \
    text/cursors.c \
    text/process_forward.c \
    text/process_forward_extra_option.c \
    text/tracer.c \
    text/remove_all.c

HEADERS += \
    common.h\
    myfunc.h\
    text/text.h \
    text/_text.h

QMAKE_CFLAGS += -Wall -Wextra -Werror


QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov

DISTFILES += \
    text/Makefile
