QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../controller/controller_smart_calc.cc \
    ../model/smart_calc/model_smart_calc.cc \
    ../model/finance_calc/model_finance_calc.cc \
    ../model/validation/model_validation_calc.cc \
    ./credit_calc_view/view_credit.cc \
    ./smart_calc_view/view_smart_calc.cc \
    ./deposit_calc_view/view_deposit.cc \
    ../main.cc \
    qcustomplot.cc

HEADERS += \
    ../controller/controller_smart_calc.h \
    ../model/smart_calc/model_smart_calc.h \
    ../model/finance_calc/model_finance_calc.h \
    ../model/validation/model_validation_calc.h \
    ./credit_calc_view/view_credit.h \
    ./smart_calc_view/view_smart_calc.h \
    ./deposit_calc_view/view_deposit.h \
    qcustomplot.h

FORMS += \
    ./credit_calc_view/view_credit.ui \
    ./deposit_calc_view/view_deposit.ui \
    ./smart_calc_view/view_smart_calc.ui \

ICON = $${PWD}/calc.icns

TARGET = Smart_Calculator

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
