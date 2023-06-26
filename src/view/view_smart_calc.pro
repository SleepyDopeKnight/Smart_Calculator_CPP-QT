QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../controller/controller_smart_calc.cc \
    ../model/model_smart_calc.cc \
    ../model/model_finance_calc.cc \
    ../model/model_validation_calc.cc \
    view_credit.cc \
    view_smart_calc.cc \
    view_deposit.cc \
    main.cc \
    qcustomplot.cc

HEADERS += \
    ../controller/controller_smart_calc.h \
    ../model/model_smart_calc.h \
    ../model/model_finance_calc.h \
    ../model/model_validation_calc.h \
    view_credit.h \
    view_smart_calc.h \
    view_deposit.h \
    qcustomplot.h

FORMS += \
    view_credit.ui \
    view_credit.ui \
    view_deposit.ui \
    view_smart_calc.ui \
    view_deposit.ui

ICON = $${PWD}/calc.icns

TARGET = Smart_Calculator

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=


FORMS += \
    view_credit.ui \
    view_deposit.ui \
    view_smart_calc.ui \
    view_deposit.ui

ICON = $${PWD}/calc.icns

TARGET = Smart_Calculator

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
