TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.c \
    ../../md5.c \
    ../../lib/scunit-clang/scunit.c

INCLUDEPATH += ../../
INCLUDEPATH += ../../lib/scunit-clang

HEADERS += \
    ../../md5.h \
    ../../lib/scunit-clang/scunit.h
