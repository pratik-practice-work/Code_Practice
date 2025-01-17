/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -v -c DemoIf -p demoif.h:demoif.cpp com.nokia.Demo.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DEMOIF_H_1465970353
#define DEMOIF_H_1465970353

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.nokia.Demo
 */
class DemoIf: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.nokia.Demo"; }

public:
    DemoIf(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~DemoIf();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> SayBye()
    {
         qDebug()<<"demo_client SayBye is called";
        QList<QVariant> argumentList;
        qDebug()<<"demo_client SayBye asyncCallWithArgumentList(QLatin1String(SayBye), argumentList)";
         return asyncCallWithArgumentList(QLatin1String("SayBye"), argumentList);

    }

    inline QDBusPendingReply<> SayHello(const QString &name, const QVariantMap &customdata)
    {
        qDebug()<<"demo_client SayHello is called";
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(name) << QVariant::fromValue(customdata);
         qDebug()<<"demo_client SayHello asyncCallWithArgumentList(QLatin1String(SayHello), argumentList)";
        return asyncCallWithArgumentList(QLatin1String("SayHello"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void LateEvent(const QString &eventkind);
};

namespace com {
  namespace nokia {
    typedef ::DemoIf Demo;
  }
}
#endif
