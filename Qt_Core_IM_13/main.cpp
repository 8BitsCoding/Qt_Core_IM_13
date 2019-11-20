#include <QtCore/QCoreApplication>

#include <qiodevice.h>
#include <qbuffer.h>
#include <qdebug.h>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QBuffer buffer;

	return a.exec();
}
