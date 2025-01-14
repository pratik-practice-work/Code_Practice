/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c DemoIfAdaptor -a demoifadaptor.h:demoifadaptor.cpp com.nokia.Demo.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef DEMOIFADAPTOR_H_1465971246
#define DEMOIFADAPTOR_H_1465971246

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.nokia.Demo
 */
class DemoIfAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.nokia.Demo")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.nokia.Demo\">\n"
"    <method name=\"SayHello\">\n"
"      <annotation value=\"QVariantMap\" name=\"com.trolltech.QtDBus.QtTypeName.In1\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"name\"/>\n"
"      <arg direction=\"in\" type=\"a{sv}\" name=\"customdata\"/>\n"
"    </method>\n"
"    <method name=\"SayBye\"/>\n"
"    <signal name=\"LateEvent\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"eventkind\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    DemoIfAdaptor(QObject *parent);
    virtual ~DemoIfAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void SayBye();
    void SayHello(const QString &name, const QVariantMap &customdata);
Q_SIGNALS: // SIGNALS
    void LateEvent(const QString &eventkind);
};

#endif
