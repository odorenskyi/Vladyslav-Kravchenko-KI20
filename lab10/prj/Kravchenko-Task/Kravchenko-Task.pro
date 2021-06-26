TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp



win32: LIBS += -L$$PWD/../build-ModulesKravchenko-Desktop_Qt_6_0_3_MinGW_64_bit-Debug/debug/ -lModulesKravchenko

INCLUDEPATH += $$PWD/../ModulesKravchenko
DEPENDPATH += $$PWD/../ModulesKravchenko

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../build-ModulesKravchenko-Desktop_Qt_6_0_3_MinGW_64_bit-Debug/debug/ModulesKravchenko.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/../build-ModulesKravchenko-Desktop_Qt_6_0_3_MinGW_64_bit-Debug/debug/libModulesKravchenko.a

QMAKE_LFLAGS += -static -static-libgcc -static-libstdc++ -lpthread
