QT += core gui sql widgets printsupport serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    article.cpp \
    connection.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    article.h \
    connection.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
