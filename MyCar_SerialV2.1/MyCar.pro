#-------------------------------------------------
#
# Project created by QtCreator 2016-07-10T17:09:00
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyCar
TEMPLATE = app


SOURCES += main.cpp\
        mainform.cpp \
    hled.cpp \
    form.cpp

HEADERS  += mainform.h \
    hled.h \
    form.h

FORMS    += \
    mainform.ui \
    form.ui
include(./qextserialport-1.2beta2/src/qextserialport.pri)

RESOURCES += \
    image.qrc
