include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov


HEADERS +=     tst_test1.h \
    ../app/text/_text.h \
    process_forward.h

SOURCES +=     main.cpp \
    ../app/shownum.c\
    ../app/load.c\
    ../app/text/append_line.c\
    ../app/text/process_forward_extra_option.c\
    ../app/text/create_text.c\
    ../app/text/remove_all.c

INCLUDEPATH += ../app

DEFINES += TESTER=\\\"$${PWD}/test\\\" \
    REZ=\\\"$${PWD}/rez\\\" \
    ITG=\\\"$${PWD}/itg\\\"
