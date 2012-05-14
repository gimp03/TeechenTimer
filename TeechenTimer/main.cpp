#include "stdafx.h"
#include "teechentimer.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TeechenTimer w;
	w.show();
	return a.exec();
}
