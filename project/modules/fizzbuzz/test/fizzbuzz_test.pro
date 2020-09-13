include(catch2_dependency.pri)
include(../fizzbuzz.pri)

TEMPLATE = app
CONFIG += console
CONFIG += c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        tst_regular_case.cpp
