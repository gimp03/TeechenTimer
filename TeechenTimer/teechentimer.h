#ifndef TEECHENTIMER_H
#define TEECHENTIMER_H

#include <QtGui/QMainWindow>
#include "ui_teechentimer.h"

class TeechenTimer : public QMainWindow
{
	Q_OBJECT

public:
	TeechenTimer(QWidget *parent = 0, Qt::WFlags flags = 0);
	~TeechenTimer();
	//void TimerChange();
	QTimer* timer;
	QTime timeValue;

private:

	bool ok;
	QString mm, ss, hh, cc;
	int iss, icc;
	Ui::TeechenTimerClass ui;	
	void lcdChange(/*int hh, int mm, int ss*/);

protected slots:
	void on_timeEdit_timeChanged();
	void on_btnStart_clicked();
	//void timeOut();
};

#endif // TEECHENTIMER_H
